#!/usr/bin/env Rscript
set.seed(1)

suppressPackageStartupMessages(library(dplyr))
suppressPackageStartupMessages(library(tidyr))
suppressPackageStartupMessages(library(readr))
suppressPackageStartupMessages(library(stringr))    
suppressPackageStartupMessages(library(purrr))

# Function to load all CSV files in a folder into tibbles
load_csvs_into_tibbles <- function(folder_path) {
  if (!dir.exists(folder_path)) {
    stop("The specified folder does not exist.")
  }

  csv_files <- list.files(path = folder_path, pattern = "\\.csv$", full.names = TRUE)
  # remove merged_output.csv if it exists
  csv_files <- csv_files[!basename(csv_files) %in% "merged_output.csv"]

  if (length(csv_files) == 0) {
    stop("No CSV files found in the specified folder.")
  }

  tibble_list <- map(csv_files, ~ read_csv(.x, show_col_types = FALSE))


  return(tibble_list)
}

args <- commandArgs(trailingOnly=TRUE)

if (length(args) == 0) {
  stop("Please provide a folder path as a command-line argument.")
}

folder_path <- args[1]

tibbles <- load_csvs_into_tibbles(folder_path)

df <- bind_rows(tibbles) |>
    mutate(across(matches("^[A-Z0-9_]+$", ignore.case=FALSE), ~ replace_na(., 0)))
    # uppercase columns happen to be opcodes. All NA hits must be 0 instead


  # save to CSV 
output_file <- file.path(folder_path, "merged_output.csv")
write_csv(df, output_file)