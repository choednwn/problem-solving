use std::fs;

fn main() {
    let puzzle_file_path = "./2022_Day1_Input.txt";
    let puzzle_file_text = fs::read_to_string(puzzle_file_path).unwrap();

    let elves = puzzle_file_text.split("\n\n");
    let mut calories_per_elf: Vec<i32> = Vec::new();

    // Calculate amount of Calories each Elf carries
    for elf in elves {
        let mut total_calories = 0;

        for food in elf.split("\n") {
            total_calories += food.parse::<i32>().unwrap();
        }

        calories_per_elf.push(total_calories);
    }

    // --- Part 1 ---
    println!("The Elf carrying the most amount of Calories");
    println!("{}", calories_per_elf.iter().max().unwrap().to_string());

    // --- Part 2 ---
    let mut calories_top_three = 0;

    calories_per_elf.sort_by(|a, b| b.cmp(a));
    for x in 0..3 {
        calories_top_three += calories_per_elf[x];
    }

    println!("Amount of calories the top three elves carry");
    println!("{}", calories_top_three.to_string());
}
