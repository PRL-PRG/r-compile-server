# sequence is RAW
s <- 0
for (i in as.raw(c(1,2,3)))  s <- s + as.integer(i)
s
