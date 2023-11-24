use std::{collections::HashSet, fs, str::FromStr};

fn main() {
    let puzzle_file_text = fs::read_to_string("./2022_Day4_Input.txt").unwrap();
    let sections = puzzle_file_text.lines();

    let mut fully_contained_count = 0;
    let mut overlap_count = 0;

    for sect in sections {
        let (fst, snd) = sect.split_once(",").unwrap();

        let (fst_s, fst_e) = fst.split_once("-").unwrap();
        let (snd_s, snd_e) = snd.split_once("-").unwrap();

        let fst_si: i32 = FromStr::from_str(fst_s).unwrap();
        let fst_ei: i32 = FromStr::from_str(fst_e).unwrap();
        let snd_si: i32 = FromStr::from_str(snd_s).unwrap();
        let snd_ei: i32 = FromStr::from_str(snd_e).unwrap();

        // Part One
        if (fst_si <= snd_si && snd_ei <= fst_ei) || (snd_si <= fst_si && fst_ei <= snd_ei) {
            fully_contained_count += 1;
        };

        // Part Two
        let fst_hashset: HashSet<i32> = (fst_si..=fst_ei).collect();
        for i in snd_si..=snd_ei {
            if fst_hashset.contains(&i) {
                overlap_count += 1;
                break;
            }
        }
    }

    println!("Count of full containted pairs.");
    println!("{}", fully_contained_count);

    println!("Count of overlapping pairs.");
    println!("{}", overlap_count);
}
