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
}