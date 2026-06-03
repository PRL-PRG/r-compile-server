#? stdlib
`stat.anova` <- function (table, test = c("Rao", "LRT", "Chisq", "F", "Cp"), 
    scale, df.scale, n) 
{
    test <- match.arg(test)
    dev.col <- match("Deviance", colnames(table))
    if (test == "Rao") 
        dev.col <- match("Rao", colnames(table))
    if (is.na(dev.col)) 
        dev.col <- match("Sum of Sq", colnames(table))
    switch(test, Rao = , LRT = , Chisq = {
        dfs <- table[, "Df"]
        vals <- table[, dev.col]/scale * sign(dfs)
        vals[dfs %in% 0] <- NA
        vals[!is.na(vals) & vals < 0] <- NA
        cbind(table, `Pr(>Chi)` = pchisq(vals, abs(dfs), lower.tail = FALSE))
    }, F = {
        dfs <- table[, "Df"]
        Fvalue <- (table[, dev.col]/dfs)/scale
        Fvalue[dfs %in% 0] <- NA
        Fvalue[!is.na(Fvalue) & Fvalue < 0] <- NA
        cbind(table, F = Fvalue, `Pr(>F)` = pf(Fvalue, abs(dfs), 
            df.scale, lower.tail = FALSE))
    }, Cp = {
        if ("RSS" %in% names(table)) {
            cbind(table, Cp = table[, "RSS"] + 2 * scale * (n - 
                table[, "Res.Df"]))
        } else {
            cbind(table, Cp = table[, "Resid. Dev"] + 2 * scale * 
                (n - table[, "Resid. Df"]))
        }
    })
}

# Examples
##-- Continued from '?glm':
utils::example("glm", echo = FALSE)
print(ag <- anova(glm.D93))
stat.anova(ag$table, test = "Cp",
           scale = sum(resid(glm.D93, "pearson")^2)/4,
           df.scale = 4, n = 9)

