fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3748310628;
    st str_parse = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3748310628(ch, default, logical, otherwise, n) {
  (reg ch:*, reg default:*, reg logical:*, reg otherwise:*, reg n:*) -+> V { var ch:*, var default:*, reg default_isMissing:L, reg default_orDefault:*, var logical:*, reg logical_isMissing:L, reg logical_orDefault:*, var otherwise:*, reg otherwise_isMissing:L, reg otherwise_orDefault:*, reg default1:*, reg default2:V, reg p:p(V +), var n:*, reg n_isMissing:L, reg n_orDefault:*, reg logical1:*, reg logical2:V, reg c:L, reg str_parse_logic:cls, reg ch1:*, reg ch2:V, reg p1:p(V +), reg default3:*, reg default4:V, reg p2:p(V +), reg otherwise1:*, reg otherwise2:V, reg p3:p(V +), reg n1:*, reg n2:V, reg p4:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg ch3:*, reg ch4:V, reg is_na:cls, reg r8:V, reg c1:L, reg default5:*, reg default6:V, reg ch5:*, reg ch6:V |
    mkenv;
    st ch = ch;
    default_isMissing = missing.0(default);
    if default_isMissing then L0(TRUE) else L0(default);
  L0(default_orDefault):
    st default = default_orDefault;
    logical_isMissing = missing.0(logical);
    if logical_isMissing then L1(TRUE) else L1(logical);
  L1(logical_orDefault):
    st logical = logical_orDefault;
    otherwise_isMissing = missing.0(otherwise);
    if otherwise_isMissing then L2() else L3(otherwise);
  L2():
    p = prom<V +>{
      default1 = ld default;
      default2 = force? default1;
      checkMissing(default2);
      return default2;
    };
    goto L3(p);
  L3(otherwise_orDefault):
    st otherwise = otherwise_orDefault;
    n_isMissing = missing.0(n);
    if n_isMissing then L4(2) else L4(n);
  L4(n_orDefault):
    st n = n_orDefault;
    logical1 = ld logical;
    check L8() else D0();
  D0():
    deopt 0 [logical1];
  L8():
    logical2 = force? logical1;
    checkMissing(logical2);
    c = `as.logical`(logical2);
    if c then L9() else L5();
  L5():
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L9():
    str_parse_logic = ldf str_parse_logic;
    check L10() else D1();
  D1():
    deopt 3 [];
  L6(r7):
    c1 = `as.logical`(r7);
    if c1 then L17() else L7();
  L10():
    p1 = prom<V +>{
      ch1 = ld ch;
      ch2 = force? ch1;
      checkMissing(ch2);
      return ch2;
    };
    p2 = prom<V +>{
      default3 = ld default;
      default4 = force? default3;
      checkMissing(default4);
      return default4;
    };
    p3 = prom<V +>{
      otherwise1 = ld otherwise;
      otherwise2 = force? otherwise1;
      checkMissing(otherwise2);
      return otherwise2;
    };
    p4 = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    r5 = dyn str_parse_logic[, default, otherwise, n](p1, p2, p3, p4);
    check L11() else D2();
  L13():
    ch3 = ld ch;
    check L15() else D3();
  L14():
    r6 = dyn base(<sym ch>);
    goto L6(r6);
  D2():
    deopt 11 [r5];
  D3():
    deopt 14 [ch3];
  L7():
    ch5 = ld ch;
    check L20() else D6();
  L11():
    popenv;
    return r5;
  L15():
    ch4 = force? ch3;
    checkMissing(ch4);
    is_na = ldf `is.na` in base;
    r8 = dyn is_na(ch4);
    check L16() else D4();
  L17():
    default5 = ld default;
    check L18() else D5();
  D4():
    deopt 17 [r8];
  D5():
    deopt 18 [default5];
  D6():
    deopt 20 [ch5];
  L16():
    goto L6(r8);
  L18():
    default6 = force? default5;
    checkMissing(default6);
    popenv;
    return default6;
  L20():
    ch6 = force? ch5;
    checkMissing(ch6);
    popenv;
    return ch6;
  }
}