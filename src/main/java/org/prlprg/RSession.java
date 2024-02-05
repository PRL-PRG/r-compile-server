package org.prlprg;

import org.prlprg.sexp.BaseEnvSXP;
import org.prlprg.sexp.GlobalEnvSXP;

public class RSession {
    private final BaseEnvSXP baseEnv;
    private final GlobalEnvSXP globalEnv;

    public RSession() {
        this.baseEnv = new BaseEnvSXP();
        this.globalEnv = new GlobalEnvSXP(baseEnv);
    }

    public BaseEnvSXP baseEnv() {
        return baseEnv;
    }

    public GlobalEnvSXP globalEnv() {
        return globalEnv;
    }
}
