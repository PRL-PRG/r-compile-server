source('random.r')

execute <- function () {
    ballCount <- 100
    bounces   <- 0
    balls     = vector("list", length = ballCount)
    resetSeed()

    for (i in 1:ballCount) {
        balls[[i]] = c(nextRandom() %% 500, nextRandom() %% 500, 
                             (nextRandom() %% 300) - 150, (nextRandom() %% 300) - 150)
                      names(balls[[i]]) = c("x", "y", "xVel", "yVel")        
    }
    
    ball <- function(ball) {
        results <- bounce(ball)
        if (results[[2]]) bounces <<- bounces + 1
        return (results[[1]])
    }

    for (i in 1:50) balls <- lapply(balls, ball)
    return (bounces)
}

verifyResult <- function(result, iterations) {
    return (result == 1331);
}

bounce <- function(ball) {
    xLimit  <- 500
    yLimit  <- 500
    bounced <- FALSE

    ball['x'] <- ball['x'] + ball['xVel'];
    ball['y'] <- ball['y'] + ball['yVel'];
    
    if (ball['x'] > xLimit) {
        ball['x'] <- xLimit 
        ball['xVel'] <- 0 - abs(ball['xVel']) 
        bounced <- TRUE
    } 
    if (ball['x'] < 0) {
        ball['x'] <- 0
        ball['xVel'] <- abs(ball['xVel'])
        bounced <- TRUE
    }
    if (ball['y'] > yLimit) {
        ball['y'] <- yLimit
        ball['yVel'] <- 0 - abs(ball['yVel'])
        bounced <- TRUE
    }
    if (ball['y'] < 0) {
        ball['y'] <- 0 
        ball['yVel'] <- abs(ball['yVel'])
        bounced <- TRUE
    }
    return (list(ball, bounced))
}
