#? stdlib
`substr_with_tabs` <- function (x, start, stop, tabsize = 8) 
{
    widths <- rep_len(1, nchar(x))
    tabs <- which(strsplit(x, "")[[1]] == "\t")
    for (i in tabs) {
        cols <- cumsum(widths)
        widths[i] <- tabsize - (cols[i] - 1)%%tabsize
    }
    cols <- cumsum(widths)
    start <- which(cols >= start)
    if (!length(start)) 
        return("")
    start <- start[1]
    stop <- which(cols <= stop)
    if (length(stop)) {
        stop <- stop[length(stop)]
        substr(x, start, stop)
    }
    else ""
}
