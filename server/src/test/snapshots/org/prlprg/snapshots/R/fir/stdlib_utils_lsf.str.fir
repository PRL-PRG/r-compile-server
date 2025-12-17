fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2928596492;
    st `lsf.str` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2928596492(pos, envir, `...`) {
  (reg pos:*, reg envir:*, reg ddd:dots) -+> V { var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, reg p:p(V +), var envir:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg pos1:*, reg pos2:V, reg as_environment:cls, reg r6:V, reg ls_str:cls, reg pos3:*, reg pos4:V, reg p1:p(V +), reg envir1:*, reg envir2:V, reg p2:p(V +), reg ddd1:dots?, reg r10:V |
    mkenv;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L0() else L1(pos);
  L0():
    p = prom<V +>{
      return -1.0;
    };
    goto L1(p);
  L1(pos_orDefault):
    st pos = pos_orDefault;
    st envir = envir;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L2(r2):
    c = `as.logical`(r2);
    if c then L8() else L3();
  L6():
    missing = ldf missing in base;
    r3 = dyn missing(<sym envir>);
    goto L2(r3);
  L7():
    r1 = dyn base(<sym envir>);
    goto L2(r1);
  L3():
    goto L5();
  L5():
    ls_str = ldf `ls.str`;
    check L14() else D2();
  L8():
    sym1 = ldf `as.environment`;
    base1 = ldf `as.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  D2():
    deopt 13 [];
  L4(r5):
    st envir = r5;
    goto L5();
  L9():
    pos1 = ld pos;
    check L11() else D0();
  L10():
    r4 = dyn base1(<sym pos>);
    goto L4(r4);
  L14():
    p1 = prom<V +>{
      pos3 = ld pos;
      pos4 = force? pos3;
      checkMissing(pos4);
      return pos4;
    };
    p2 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    ddd1 = ld `...`;
    r10 = dyn ls_str[pos, envir, mode, `...`](p1, p2, "function", ddd1);
    check L15() else D3();
  D0():
    deopt 5 [pos1];
  D3():
    deopt 21 [r10];
  L11():
    pos2 = force? pos1;
    checkMissing(pos2);
    as_environment = ldf `as.environment` in base;
    r6 = dyn as_environment(pos2);
    check L12() else D1();
  L15():
    popenv;
    return r10;
  D1():
    deopt 8 [r6];
  L12():
    goto L4(r6);
  }
}