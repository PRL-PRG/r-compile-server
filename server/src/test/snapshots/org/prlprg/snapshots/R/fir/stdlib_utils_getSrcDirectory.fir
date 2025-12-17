fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner780175310;
    st getSrcDirectory = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner780175310(x, unique) {
  (reg x:*, reg unique:*) -+> V { var x:*, var unique:*, reg unique_isMissing:L, reg unique_orDefault:*, reg dirname:cls, reg getSrcFilename:cls, reg x1:*, reg x2:V, reg p:p(V +), reg unique1:*, reg unique2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg unique3:*, reg unique4:V, reg c:L, reg unique5:cls, reg result:*, reg result1:V, reg p3:p(V +), reg r6:V, reg result2:*, reg result3:V |
    mkenv;
    st x = x;
    unique_isMissing = missing.0(unique);
    if unique_isMissing then L0(TRUE) else L0(unique);
  L0(unique_orDefault):
    st unique = unique_orDefault;
    dirname = ldf dirname;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p2 = prom<V +>{
      getSrcFilename = ldf getSrcFilename;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p1 = prom<V +>{
        unique1 = ld unique;
        unique2 = force? unique1;
        checkMissing(unique2);
        return unique2;
      };
      r2 = dyn getSrcFilename[, `full.names`, unique](p, TRUE, p1);
      return r2;
    };
    r4 = dyn dirname(p2);
    check L3() else D1();
  D1():
    deopt 3 [r4];
  L3():
    st result = r4;
    unique3 = ld unique;
    check L4() else D2();
  D2():
    deopt 5 [unique3];
  L4():
    unique4 = force? unique3;
    checkMissing(unique4);
    c = `as.logical`(unique4);
    if c then L5() else L1();
  L1():
    result2 = ld result;
    check L9() else D5();
  L5():
    unique5 = ldf unique;
    check L6() else D3();
  D3():
    deopt 8 [];
  D5():
    deopt 11 [result2];
  L6():
    p3 = prom<V +>{
      result = ld result;
      result1 = force? result;
      checkMissing(result1);
      return result1;
    };
    r6 = dyn unique5(p3);
    check L7() else D4();
  L9():
    result3 = force? result2;
    checkMissing(result3);
    popenv;
    return result3;
  D4():
    deopt 10 [r6];
  L7():
    popenv;
    return r6;
  }
}