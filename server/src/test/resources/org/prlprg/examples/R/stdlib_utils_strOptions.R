#? stdlib
`strOptions` <- function (strict.width = "no", digits.d = 3L, vec.len = 4L, list.len = 99L, 
    deparse.lines = NULL, drop.deparse.attr = TRUE, formatNum = function(x, 
        ...) format(x, trim = TRUE, drop0trailing = TRUE, ...)) 
list(strict.width = strict.width, digits.d = digits.d, vec.len = vec.len, 
    list.len = list.len, deparse.lines = deparse.lines, drop.deparse.attr = drop.deparse.attr, 
    formatNum = match.fun(formatNum))
