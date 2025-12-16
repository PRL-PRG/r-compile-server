#? stdlib
`NLSstRtAsymptote.sortedXyData` <- function (xy) 
{
    in.range <- range(xy$y)
    last.dif <- abs(in.range - xy$y[nrow(xy)])
    if (match(min(last.dif), last.dif) == 2L) 
        in.range[2L] + diff(in.range)/8
    else in.range[1L] - diff(in.range)/8
}
