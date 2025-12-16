#? stdlib
`screeplot.default` <- function (x, npcs = min(10, length(x$sdev)), type = c("barplot", 
    "lines"), main = deparse1(substitute(x)), ...) 
{
    main
    type <- match.arg(type)
    pcs <- x$sdev^2
    xp <- seq_len(npcs)
    dev.hold()
    on.exit(dev.flush())
    if (type == "barplot") 
        barplot(pcs[xp], names.arg = names(pcs[xp]), main = main, 
            ylab = "Variances", ...)
    else {
        plot(xp, pcs[xp], type = "b", axes = FALSE, main = main, 
            xlab = "", ylab = "Variances", ...)
        axis(2)
        axis(1, at = xp, labels = names(pcs[xp]))
    }
    invisible()
}
