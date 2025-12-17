fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg summary:cls, reg aov:cls, reg __:cls, reg r5:V, reg p1:p(V +), reg warpbreaks:*, reg warpbreaks1:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg TukeyHSD:cls, reg fm1:*, reg fm2:V, reg p4:p(V +), reg r12:V, reg plot:cls, reg TukeyHSD1:cls, reg fm3:*, reg fm4:V, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg r16:V |
    mkenv;
    r = clos inner1221877819;
    st TukeyHSD = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    summary = ldf summary;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p3 = prom<V +>{
      aov = ldf aov;
      p1 = prom<V +>{
        __ = ldf `~` in base;
        r5 = dyn __(<sym breaks>, <lang `+`(wool, tension)>);
        return r5;
      };
      p2 = prom<V +>{
        warpbreaks = ld warpbreaks;
        warpbreaks1 = force? warpbreaks;
        checkMissing(warpbreaks1);
        return warpbreaks1;
      };
      r8 = dyn aov[, data](p1, p2);
      st fm1 = r8;
      invisible.0();
      return r8;
    };
    r10 = dyn summary(p3);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r10];
  L4():
    goto L0();
  L6():
    TukeyHSD = ldf TukeyHSD;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    p4 = prom<V +>{
      fm1 = ld fm1;
      fm2 = force? fm1;
      checkMissing(fm2);
      return fm2;
    };
    r12 = dyn TukeyHSD[, , ordered](p4, "tension", TRUE);
    check L8() else D5();
  D5():
    deopt 18 [r12];
  L8():
    plot = ldf plot;
    check L9() else D6();
  D6():
    deopt 20 [];
  L9():
    p6 = prom<V +>{
      TukeyHSD1 = ldf TukeyHSD;
      p5 = prom<V +>{
        fm3 = ld fm1;
        fm4 = force? fm3;
        checkMissing(fm4);
        return fm4;
      };
      r14 = dyn TukeyHSD1(p5, "tension");
      return r14;
    };
    r16 = dyn plot(p6);
    check L10() else D7();
  D7():
    deopt 22 [r16];
  L10():
    popenv;
    return r16;
  }
}
fun inner1221877819(x, which, ordered, `conf.level`, `...`) {
  (reg x:*, reg which:*, reg ordered:*, reg conf_level:*, reg ddd:dots) -+> V { var x:*, var which:*, var ordered:*, reg ordered_isMissing:L, reg ordered_orDefault:*, var `conf.level`:*, reg conf_level_isMissing:L, reg conf_level_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st which = which;
    ordered_isMissing = missing.0(ordered);
    if ordered_isMissing then L0(FALSE) else L0(ordered);
  L0(ordered_orDefault):
    st ordered = ordered_orDefault;
    conf_level_isMissing = missing.0(conf_level);
    if conf_level_isMissing then L1(0.95) else L1(conf_level);
  L1(conf_level_orDefault):
    st `conf.level` = conf_level_orDefault;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("TukeyHSD");
    goto L2(r2);
  L4():
    r = dyn base("TukeyHSD");
    goto L2(r);
  }
}