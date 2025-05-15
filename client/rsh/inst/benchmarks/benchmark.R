library(tidyverse)

D_raw <- read_csv("benchmarks-fix-1.csv")

D <- D_raw %>%
  group_by(suite, name, expr) %>%
  summarise(
    n = n(),
    min = min(time),
    mean = mean(time),
    median = median(time),
    max = max(time),
    sd = sd(time)
  )

D_sp <- pivot_wider(D, id_cols = c(suite, name), names_from = expr, values_from = median) %>%
  mutate(
    speedup = RBC / RSH
  )

D_sp %>%
  arrange(speedup) %>%
  print(n=Inf)
