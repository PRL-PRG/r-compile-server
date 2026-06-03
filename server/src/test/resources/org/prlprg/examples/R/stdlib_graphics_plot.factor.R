#? stdlib
`plot.factor` <- function (x, y, legend.text = NULL, ...) 
{
    if (missing(y) || is.factor(y)) {
        dargs <- list(...)
        axisnames <- dargs$axes %||% if (!is.null(dargs$xaxt)) 
            dargs$xaxt != "n"
        else TRUE
    }
    if (missing(y)) {
        barplot(table(x), axisnames = axisnames, ...)
    }
    else if (is.factor(y)) {
        if (is.null(legend.text)) 
            spineplot(x, y, ...)
        else {
            args <- c(list(x = x, y = y), list(...))
            args$yaxlabels <- legend.text
            do.call("spineplot", args)
        }
    }
    else if (is.numeric(y)) 
        boxplot(y ~ x, ...)
    else NextMethod("plot")
}

# Examples
require(grDevices)


plot(weight ~ group, data = PlantGrowth)           # numeric vector ~ factor
plot(cut(weight, 2) ~ group, data = PlantGrowth)   # factor ~ factor
## passing "..." to spineplot() eventually:
plot(cut(weight, 3) ~ group, data = PlantGrowth,
     col = hcl(c(0, 120, 240), 50, 70))

plot(PlantGrowth$group, axes = FALSE, main = "no axes")  # extremely silly

