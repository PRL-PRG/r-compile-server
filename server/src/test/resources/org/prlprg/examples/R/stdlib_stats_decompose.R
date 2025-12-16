#? stdlib
`decompose` <- function (x, type = c("additive", "multiplicative"), filter = NULL) 
{
    type <- match.arg(type)
    l <- length(x)
    f <- frequency(x)
    if (f <= 1 || length(na.omit(x)) < 2 * f) 
        stop("time series has no or less than 2 periods")
    if (is.null(filter)) 
        filter <- if (!f%%2) 
            c(0.5, rep_len(1, f - 1), 0.5)/f
        else rep_len(1, f)/f
    trend <- filter(x, filter)
    season <- if (type == "additive") 
        x - trend
    else x/trend
    periods <- l%/%f
    index <- seq.int(1L, l, by = f) - 1L
    figure <- numeric(f)
    for (i in 1L:f) figure[i] <- mean(season[index + i], na.rm = TRUE)
    figure <- if (type == "additive") 
        figure - mean(figure)
    else figure/mean(figure)
    seasonal <- ts(rep(figure, periods + 1)[seq_len(l)], start = start(x), 
        frequency = f)
    structure(list(x = x, seasonal = seasonal, trend = trend, 
        random = if (type == "additive") x - seasonal - trend else x/seasonal/trend, 
        figure = figure, type = type), class = "decomposed.ts")
}

# Examples
require(graphics)

m <- decompose(co2)
m$figure
plot(m)

## example taken from Kendall/Stuart
x <- c(-50, 175, 149, 214, 247, 237, 225, 329, 729, 809,
       530, 489, 540, 457, 195, 176, 337, 239, 128, 102, 232, 429, 3,
       98, 43, -141, -77, -13, 125, 361, -45, 184)
x <- ts(x, start = c(1951, 1), end = c(1958, 4), frequency = 4)
m <- decompose(x)
## seasonal figure: 6.25, 8.62, -8.84, -6.03
round(decompose(x)$figure / 10, 2)

