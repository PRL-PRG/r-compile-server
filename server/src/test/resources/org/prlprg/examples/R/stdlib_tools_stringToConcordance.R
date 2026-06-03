#? stdlib
`stringToConcordance` <- function (s) 
{
    split <- strsplit(s, ":")[[1]]
    if (.Platform$OS.type == "windows") 
        split <- fixWindowsConcordancePaths(split)
    targetfile <- split[2]
    srcFile <- split[3]
    if (length(split) == 4) {
        ofs <- 0
        vi <- 4
    }
    else {
        ofs <- as.integer(sub("^ofs ([0-9]+)", "\\1", split[4]))
        vi <- 5
    }
    values <- as.integer(strsplit(split[vi], " ")[[1]])
    firstline <- values[1]
    rledata <- matrix(values[-1], nrow = 2)
    rle <- structure(list(lengths = rledata[1, ], values = rledata[2, 
        ]), class = "rle")
    diffs <- inverse.rle(rle)
    srcLines <- c(firstline, firstline + cumsum(diffs))
    structure(list(offset = ofs, srcFile = srcFile, srcLine = srcLines), 
        class = "Rconcordance")
}
