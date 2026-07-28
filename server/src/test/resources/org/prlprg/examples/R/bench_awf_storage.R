count <- 0

execute <- function(n) {
    count <<- 0
    resetSeed()
    buildTreeDepth(n, nextRandom())
    return (count) 
}

verifyResult <- function(result, iterations) {
    return (result == 5461)
}

buildTreeDepth <- function(depth, random) {
    count <<- count + 1
    if (depth == 1) {
        return (c(nextRandom() %% 10 + 1))
    } else {
        array <- vector("list", length = 4)
        for (i in 1:4) {
            array[[i]] <- buildTreeDepth(depth - 1, random)
        }
        return (array)
    }
}

seed <- NaN

resetSeed <- function() seed <<- 74755

nextRandom <- function() {
  seed <<- bitwAnd((seed * 1309) + 13849, 65535)
  return (seed)
}

#? benchmark: execute(7)

# warmup
for (i in 1:12) {
  execute(3)
}
