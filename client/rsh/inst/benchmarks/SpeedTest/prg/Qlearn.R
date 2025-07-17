execute <- function(size = 30000L) {
  simulate <- function(init, world, gamma, alpha, epsilon, steps) {
    history = matrix(NA,steps,6)
    colnames(history) = c("t","s","a","r","rs","sn")

    Q = matrix(0,n.states,n.actions)

    s = init()

    for (t in 1:steps) { 
      if (runif(1)<epsilon) {a = sample(n.actions,1)}
      else {a = order(Q[s,])[n.actions]}

      w = world(s,a)
      r = w$r
      sn = w$s

      Q[s,a] = (1-alpha) * Q[s,a] + 
        alpha * (r + gamma * (epsilon*mean(Q[sn,]) + (1-epsilon)*max(Q[sn,])))

      history[t,"t"] = t
      history[t,"s"] = s
      history[t,"a"] = a
      history[t,"r"] = r
      history[t,"sn"] = sn

      s = sn
    }

    history[,"rs"] = history[,"r"]
    for (t in 2:steps){history[t,"rs"] = 0.1*history[t,"rs"] + 0.9*history[t-1,"rs"]}

    list (history=history, Q=Q)
  }

  init2m = function () { 
    marks <<- rep(0,n.states)
    sample(n.states,1)
  }

  world2m = function (s, a) {
    bit = as.numeric(s>n.states/2)
    s = s - bit*n.states/2

    if (runif(1)<0.05)
    { s = sample(n.states/2,1)
    }
    else
    { if (a>3)
      { bit = 1-bit
        a = a-3
      }
      s = s + (a-2)
      if (s<1) s = n.states/2
      if (s>n.states/2) s = 1
    }

    r = marks[s] - 10*as.numeric(s==1)

    marks <<- as.numeric (marks>0 | (runif(n.states)<0.3))
    marks[s] <<- 0

    s = s + bit*n.states/2
  
    list (s=s, r=r)
  }

  gamma = 0.95
  alpha = 0.015
  epsilon = 0.1

  n.states = 10*2
  n.actions = 3*2
  set.seed(1)
  
  result2m = simulate (init2m, world2m, gamma, alpha, epsilon, size)
  return (mean(result2m$history[,"r"])) # Average reward
}