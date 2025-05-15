library(tidyverse)

files <- list.files(path = ".", recursive = TRUE, pattern = "*\\.csv$", full.names = TRUE)

D_raw <- map_dfr(files, function(file) {
  d <- read_csv(file) %>%
    mutate(suite = basename(dirname(file)))
  if (ncol(d) != 5) {
    warning("File does not have 5 columns: ", file)
    NULL
  } else {
    d
  }
})

write_csv(D_raw, "benchmarks.csv")
