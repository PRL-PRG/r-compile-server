#? stdlib
`port_msg` <- function (iv1) 
{
    switch(as.character(iv1), `3` = "X-convergence (3)", `4` = "relative convergence (4)", 
        `5` = "both X-convergence and relative convergence (5)", 
        `6` = "absolute function convergence (6)", `7` = "singular convergence (7)", 
        `8` = "false convergence (8)", `9` = "function evaluation limit reached without convergence (9)", 
        `10` = "iteration limit reached without convergence (10)", 
        `14` = "storage only has been allocated (14)", `15` = "LIV too small (15)", 
        `16` = "LV too small (16)", `63` = "fn cannot be computed at initial par (63)", 
        `65` = "gr cannot be computed at initial par (65)", `300` = "initial par violates constraints", 
        sprintf("See PORT documentation.  Code (%d)", iv1))
}
