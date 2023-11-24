use std::fs;

/*
Rock :     A / X    - 1
Paper :    B / Y    - 2
Scissors : C / Z    - 3

Lose: 0
Tie:  3
Win:  6
 */

fn main() {
    let puzzle_input = fs::read_to_string("./2022_Day2_Input.txt").unwrap();
    let round_list = puzzle_input.lines();
    let mut part_one_score = 0;
    let mut part_two_score = 0;

    for line in round_list {
        part_one_score += calculate_part_one(line);
        part_two_score += calculate_part_two(line);
    }

    // Part One
    println!("Score based on strategy guide");
    println!("{}", part_one_score);

    // Part Two
    println!("Score based on second strategy guide");
    println!("{}", part_two_score);
}

fn calculate_part_one(line: &str) -> i32 {
    let (o, p) = line.split_once(" ").unwrap();
    let o_val = match o {
        "A" => 1,
        "B" => 2,
        "C" => 3,
        _ => panic!("Wrong opponent value"),
    };
    let p_val = match p {
        "X" => 1,
        "Y" => 2,
        "Z" => 3,
        _ => panic!("Wrong player value"),
    };

    return if o_val + 1 == p_val || o_val - 2 == p_val {
        // Win
        p_val + 6
    } else if o_val == p_val {
        // Tie
        p_val + 3
    } else {
        p_val
    };
}

fn calculate_part_two(line: &str) -> i32 {
    let (o, s) = line.split_once(" ").unwrap();
    let o_val = match o {
        "A" => 1,
        "B" => 2,
        "C" => 3,
        _ => panic!("Wrong opponent value"),
    };

    match s {
        "X" => {
            // Lose
            if o_val != 1 {
                o_val - 1
            } else {
                o_val + 2
            }
        }
        "Y" => {
            // Tie
            o_val + 3
        }
        "Z" => {
            // Win
            if o_val != 3 {
                o_val + 1 + 6
            } else {
                o_val - 2 + 6
            }
        }
        _ => {
            println!("Wrong state value");
            0
        }
    }
}
