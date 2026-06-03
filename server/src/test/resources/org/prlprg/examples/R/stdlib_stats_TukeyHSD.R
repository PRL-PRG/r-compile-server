#? stdlib
`TukeyHSD` <- function (x, which, ordered = FALSE, conf.level = 0.95, ...) 
UseMethod("TukeyHSD")

# Examples
require(graphics)

summary(fm1 <- aov(breaks ~ wool + tension, data = warpbreaks))
TukeyHSD(fm1, "tension", ordered = TRUE)
plot(TukeyHSD(fm1, "tension"))

