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
    # 2. Starts with #!LABEL small mediaum. CSV. Overhead and total times
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

    as_tibble(res) |>
        mutate(file = tools::file_path_sans_ext(basename(file)), .before = 1) 
}

if(!interactive()) {
    args <- commandArgs(trailingOnly=TRUE)

    if (length(args) == 0) {
    stop("Please provide a folder path as a command-line argument.")
    }

    folder_path <- args[1]

    # TODO
}