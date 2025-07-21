#!/usr/bin/env Rscript 

set.seed(1)

suppressPackageStartupMessages(library(dplyr))
suppressPackageStartupMessages(library(tidyr))
suppressPackageStartupMessages(library(readr))
suppressPackageStartupMessages(library(stringr))    
suppressPackageStartupMessages(library(purrr))

parse_timer_raw_csv <- function(file) {
    # The timeR raw file is divided into sections 
    # 1. General information Key Value paris (sperated by a space)
    # 2. Starts with #!LABEL small medium. CSV. Overhead and total times
    # 3. Starts with #!LABEL self total calls abort. CSV. Sums for builtins and specials 
    # 4. Starts with #!LABEL self total calls abort. CSV. Sums for user functions
    # 5. Starts with #!LABEL self total calls abort has_bcode. CSV. Values per function/static timer


    if (!file.exists(file)) {
        stop(paste0("File does not exist: ", file))
    }
    lines <- readLines(file)

    
    labels <- which(str_starts(lines, "#!LABEL"))

    if( length(labels) < 4) {
        stop(paste0("File does not contain enough sections: ", file))
    }

    res <- list()

    # Parse the general information section
    general_info <- lines[1:(labels[1] - 1)]
    for(l in general_info) {
        parts <- str_split(l, "\\s", n = 2)[[1]]
        if (length(parts) == 2) {
            res[[parts[1]]] <- parts[2]
        }
    }

 

    # Overhead 
    parts <- str_split(lines[[labels[1] + 1]], "\\s", n = 3)[[1]]
    if (length(parts) == 3) {
        res$small_overhead <- parts[2]
        res$medium_overhead <- parts[3]
    }

    # Total times
    times <- lines[(labels[1] + 2):(labels[2] - 1)] 
    for(l in times) {
        parts <- str_split(l, "\\s", n = 2)[[1]]
        if (length(parts) == 2) {
            res[[parts[1]]] <- parts[2]
        }
    }
    

    for(i in 2:length(labels)) {
        section <- lines[(labels[i]):(ifelse(i == length(labels), length(lines), labels[i + 1] - 1))]
        if (length(section) > 0) {
            # Read the CSV section
            vals <- read_tsv(paste(section, collapse = "\n"), col_names = TRUE, show_col_types = FALSE)

            for(j in seq.int(nrow(vals))) {
                r <- vals[j,]
                timer_name <- r[["#!LABEL"]]
                if(is.na(timer_name) || str_detect(timer_name, fixed("library"))) {
                    next
                }
                res[[paste0(timer_name, "_self")]] <- r[["self"]]
                res[[paste0(timer_name, "_calls")]] <- r[["calls"]]
            }
        }
    }

    as_tibble(res) |>
        mutate(file = tools::file_path_sans_ext(basename(file)), .before = 1) 
}

parse_profiles <- function(folder_path) {
    if (!dir.exists(folder_path)) {
        stop("The specified folder does not exist.")
    }

    files <- list.files(path = folder_path, pattern = "\\.csv$", full.names = TRUE)
    files <- files[!basename(files) %in% "timer_merged_output.csv"]

    if (length(files) == 0) {
        stop("No timeR profile files found in the specified folder.")
    }

    profiles <- map_dfr(files, parse_timer_raw_csv)

    return(profiles)
}

if(!interactive()) {
    args <- commandArgs(trailingOnly=TRUE)

    if (length(args) == 0) {
    stop("Please provide a folder path as a command-line argument.")
    }

    folder_path <- args[1]

    profiles <- parse_profiles(folder_path)

    output_file <- file.path(folder_path, "timer_merged_output.csv")

    write_csv(profiles, output_file)
    message(paste0("Merged timer profiles saved to: ", output_file))
}