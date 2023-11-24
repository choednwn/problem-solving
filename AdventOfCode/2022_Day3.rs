use std::{collections::HashSet, fs};

fn main() {
    let puzzle_input_text = fs::read_to_string("./2022_Day3_Input.txt").unwrap();
    let rucksacks = puzzle_input_text.lines();

    let mut rucksack_group: Vec<HashSet<char>> = Vec::new();
    let mut sum_of_priorities = 0;
    let mut sum_of_badges = 0;

    for (i, rs) in rucksacks.enumerate() {
        let (rsl, rsr) = rs.split_at(rs.len() / 2);
        let rsl_hashset: HashSet<char> = rsl.chars().collect();
        let rsr_hashset: HashSet<char> = rsr.chars().collect();

        // Part 1
        let diff_letter = rsl_hashset
            .intersection(&rsr_hashset)
            .into_iter()
            .nth(0)
            .unwrap();

        sum_of_priorities += char_to_val(*diff_letter);

        // Part 2
        match i % 3 {
            0 => {
                rucksack_group.clear();
                rucksack_group.push(rs.chars().collect());
            }
            1 => {
                rucksack_group.push(rs.chars().collect());
            }
            2 => {
                rucksack_group.push(rs.chars().collect());

                let fs_union: HashSet<char> = rucksack_group[0]
                    .intersection(&rucksack_group[1])
                    .copied()
                    .collect();
                let st_union: HashSet<char> = rucksack_group[1]
                    .intersection(&rucksack_group[2])
                    .copied()
                    .collect();
                let badge = fs_union.intersection(&st_union).into_iter().nth(0).unwrap();

                sum_of_badges += char_to_val(*badge);
            }
            _ => {}
        }
    }

    println!("The sum of priorities.");
    println!("{}", sum_of_priorities);

    println!("The sum of badges.");
    println!("{}", sum_of_badges);
}

fn char_to_val(dl: char) -> i32 {
    let dl_ascii = dl as i32;

    return if dl_ascii <= 90 {
        // Uppercase 27 ~ 52
        dl_ascii - 38
    } else {
        dl_ascii - 96
    };
}
