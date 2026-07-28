#? returns(1100)
#? [bc2c]noIsq
# this for loop will not use ISQ as it will be constant folded
s <- 0L
for (i in 1:10) {
    for (j in 1:10) {
        s <- s + j + i
    }
}
s
