fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.First.sys` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg getOption:cls, reg r:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg i7:I, reg r2:V, reg require:cls, reg pkg:*, reg pkg1:V, reg p:p(V +), reg r4:V, reg res:*, reg res1:V, reg r5:V, reg c1:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg pkg2:*, reg pkg3:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V, reg i10:I |
    mkenv;
    getOption = ldf getOption;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    r = dyn getOption("defaultPackages");
    check L6() else D1();
  D1():
    deopt 3 [r];
  L6():
    s = toForSeq(r);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L7() else L4();
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st pkg = x;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L7():
    invisible.0();
    popenv;
    return i2;
  L1(i7, r2):
    st res = r2;
    res = ld res;
    check L12() else D4();
  L8():
    require = ldf require;
    check L10() else D2();
  L9():
    r1 = dyn base[, quietly, `warn.conflicts`, `character.only`](<sym pkg>, TRUE, FALSE, TRUE);
    goto L1(i2, r1);
  D2():
    deopt 6 [i2];
  D4():
    deopt 16 [i7, res];
  L10():
    p = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    r4 = dyn require[, quietly, `warn.conflicts`, `character.only`](p, TRUE, FALSE, TRUE);
    check L11() else D3();
  L12():
    res1 = force? res;
    checkMissing(res1);
    r5 = `!`(res1);
    c1 = `as.logical`(r5);
    if c1 then L13() else L2();
  D3():
    deopt 14 [i2, r4];
  L2():
    goto L3(i7);
  L3(i10):
    goto L0(i10);
  L11():
    goto L1(i2, r4);
  L13():
    warning = ldf warning;
    check L14() else D5();
  D5():
    deopt 20 [i7];
  L14():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        sQuote = ldf sQuote;
        p1 = prom<V +>{
          pkg2 = ld pkg;
          pkg3 = force? pkg2;
          checkMissing(pkg3);
          return pkg3;
        };
        r7 = dyn sQuote(p1);
        return r7;
      };
      r9 = dyn gettextf("package %s in options(\"defaultPackages\") was not found", p2);
      return r9;
    };
    r11 = dyn warning[, `call.`, domain](p3, FALSE, NA_LGL);
    check L15() else D6();
  D6():
    deopt 26 [i7, r11];
  L15():
    goto L3(i7);
  }
}