#? stdlib
`NLSstLfAsymptote.sortedXyData` <- function (xy) 
{
    in.range <- range(xy$y)
    first.dif <- abs(in.range - xy$y[1L])
    if (match(min(first.dif), first.dif) == 2L) 
        in.range[2L] + diff(in.range)/8
    else in.range[1L] - diff(in.range)/8
}
