use std::fs;

#[derive(Debug)]
struct Stack {
    value: i32,
    crates: Vec<char>,
}

fn main() {
    let puzzle_input = fs::read_to_string("./2022_Day5_Input.txt").unwrap();

    let mut stacks: Vec<Stack> = Vec::new();

    format_input(&puzzle_input, &mut stacks);

    println!("{:?}", stacks);
}

fn format_input(input: &String, stacks: &mut Vec<Stack>) {
    let mut stack_count: i32 = 0;
    let mut max_containers: i32 = 0;

    // read amount of stacks
    for (line, iptl) in input.lines().enumerate() {
        if iptl.starts_with(" 1") {
            stack_count = iptl
                .split("   ")
                .last()
                .unwrap()
                .trim()
                .parse::<i32>()
                .unwrap();
            max_containers = line as i32;
            break;
        }
    }

    // create and fill stack
    for stack_idx in 0..stack_count {
        let mut stack_items: Vec<char> = Vec::new();

        for line in (0..max_containers).rev() {
            // 1, 5, 9, ...
            let letter = input
                .lines()
                .nth(line as usize)
                .unwrap()
                .chars()
                .nth(1 + 4 * stack_idx as usize)
                .unwrap();

            if letter != ' ' {
                stack_items.push(letter);
            }
        }

        stacks.push(Stack {
            value: stack_idx,
            crates: stack_items.clone(),
        });
    }
}
