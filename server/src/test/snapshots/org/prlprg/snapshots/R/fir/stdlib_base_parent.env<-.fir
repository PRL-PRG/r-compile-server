fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner424378768;
    st `parent.env<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner424378768(env, value) {
  (reg env:*, reg value:*) -+> V { var env:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg value1:*, reg value2:V, reg parent_env__:cls, reg r2:V |
    mkenv;
    st env = env;
    st value = value;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    env1 = ld env;
    check L3() else D0();
  L2():
    r = dyn base(<lang `parent.env<-`(env, value)>);
    goto L0(r);
  D0():
    deopt 2 [env1];
  L3():
    env2 = force? env1;
    checkMissing(env2);
    value1 = ld value;
    check L4() else D1();
  D1():
    deopt 4 [value1];
  L4():
    value2 = force? value1;
    checkMissing(value2);
    parent_env__ = ldf `parent.env<-` in base;
    r2 = dyn parent_env__(env2, value2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}