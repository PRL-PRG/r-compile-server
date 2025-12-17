fun main() {
  () -+> V { reg r:cls, reg rm:cls, reg tmp:*, reg tmp1:V, reg p:p(V +), reg r2:V |
    mkenv;
    r = clos inner3863518824;
    st remove = r;
    st tmp = <int 1, 2, 3, 4>;
    rm = ldf rm;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    p = prom<V +>{
      tmp = ld tmp;
      tmp1 = force? tmp;
      checkMissing(tmp1);
      return tmp1;
    };
    r2 = dyn rm(p);
    check L1() else D1();
  D1():
    deopt 9 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner3863518824(`...`, list, pos, envir, inherits) {
  (reg ddd:dots, reg list:*, reg pos:*, reg envir:*, reg inherits:*) -+> V { var `...`:dots?, var list:*, reg list_isMissing:L, reg list_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, reg p1:p(V +), var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg pos1:*, reg pos2:V, reg as_environment:cls, reg r5:V, reg p2:p(V +), var inherits:*, reg inherits_isMissing:L, reg inherits_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg ___length:cls, reg r9:V, reg c:L, reg __:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg vapply:cls, reg dots:*, reg dots1:V, reg p3:p(V +), reg r14:cls, reg p4:p(V +), reg r16:V, reg all:cls, reg r17:V, reg r18:V, reg c1:L, reg stop:cls, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg _Primitive:cls, reg r23:V, reg r24:cls, reg list1:*, reg list2:V, reg p5:p(V +), reg vapply1:cls, reg dots2:*, reg dots3:V, reg p6:p(V +), reg as_character:*, reg as_character1:V, reg p7:p(V +), reg r28:V, reg p8:p(V +), reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg list3:*, reg list4:V, reg envir1:*, reg envir2:V, reg inherits1:*, reg inherits2:V, reg remove:cls, reg r34:V |
    mkenv;
    st `...` = ddd;
    list_isMissing = missing.0(list);
    if list_isMissing then L0() else L1(list);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(list_orDefault):
    st list = list_orDefault;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L2() else L3(pos);
  L2():
    p1 = prom<V +>{
      return -1.0;
    };
    goto L3(p1);
  L3(pos_orDefault):
    st pos = pos_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L4() else L5(envir);
  L4():
    p2 = prom<V +>{
      sym = ldf `as.environment`;
      base = ldf `as.environment` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      pos1 = ld pos;
      pos2 = force? pos1;
      checkMissing(pos2);
      as_environment = ldf `as.environment` in base;
      r5 = dyn as_environment(pos2);
      goto L0(r5);
    L2():
      r3 = dyn base(<sym pos>);
      goto L0(r3);
    };
    goto L5(p2);
  L5(envir_orDefault):
    st envir = envir_orDefault;
    inherits_isMissing = missing.0(inherits);
    if inherits_isMissing then L6(FALSE) else L6(inherits);
  L6(inherits_orDefault):
    st inherits = inherits_orDefault;
    sym1 = ldf `...length`;
    base1 = ldf `...length` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L7(r8):
    c = `as.logical`(r8);
    if c then L18() else L8();
  L15():
    ___length = ldf `...length` in base;
    r9 = dyn ___length();
    check L17() else D0();
  L16():
    r7 = dyn base1();
    goto L7(r7);
  D0():
    deopt 3 [r9];
  L8():
    goto L13();
  L13():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L33() else L34();
  L17():
    goto L7(r9);
  L18():
    __ = ldf `$` in base;
    r10 = dyn __(<lang match.call(expand.dots=FALSE)>, <sym ...>);
    st dots = r10;
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L9(r12):
    r18 = `!`(r12);
    c1 = `as.logical`(r18);
    if c1 then L24() else L10();
  L14(r33):
    popenv;
    return r33;
  L19():
    vapply = ldf vapply;
    check L21() else D1();
  L20():
    r11 = dyn base2(<lang vapply(dots, function((x=), `||`(is.symbol(x), is.character(x)), NULL), NA_LGL, USE.NAMES=FALSE)>);
    goto L9(r11);
  L33():
    list3 = ld list;
    check L35() else D8();
  L34():
    r32 = dyn base4(<lang remove(list, envir, inherits)>);
    goto L14(r32);
  D1():
    deopt 10 [];
  D8():
    deopt 40 [list3];
  L10():
    goto L11();
  L11():
    sym3 = ldf `.Primitive`;
    base3 = ldf `.Primitive` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L21():
    p3 = prom<V +>{
      dots = ld dots;
      dots1 = force? dots;
      checkMissing(dots1);
      return dots1;
    };
    p4 = prom<V +>{
      r14 = clos inner2501545716;
      return r14;
    };
    r16 = dyn vapply[, , , `USE.NAMES`](p3, p4, NA_LGL, FALSE);
    check L22() else D2();
  L24():
    stop = ldf stop;
    check L25() else D4();
  L35():
    list4 = force? list3;
    checkMissing(list4);
    envir1 = ld envir;
    check L36() else D9();
  D2():
    deopt 16 [r16];
  D4():
    deopt 21 [];
  D9():
    deopt 42 [envir1];
  L12(r22):
    checkFun.0(r22);
    r24 = r22 as cls;
    p5 = prom<V +>{
      list1 = ld list;
      list2 = force? list1;
      checkMissing(list2);
      return list2;
    };
    p8 = prom<V +>{
      vapply1 = ldf vapply;
      p6 = prom<V +>{
        dots2 = ld dots;
        dots3 = force? dots2;
        checkMissing(dots3);
        return dots3;
      };
      p7 = prom<V +>{
        as_character = ld `as.character`;
        as_character1 = force? as_character;
        checkMissing(as_character1);
        return as_character1;
      };
      r28 = dyn vapply1(p6, p7, "");
      return r28;
    };
    r30 = dyn r24(p5, p8);
    check L31() else D7();
  L22():
    all = ldf all in base;
    r17 = dyn all(r16);
    check L23() else D3();
  L25():
    r19 = dyn stop("... must contain names or character strings");
    check L26() else D5();
  L28():
    _Primitive = ldf `.Primitive` in base;
    r23 = dyn _Primitive("c");
    check L30() else D6();
  L29():
    r21 = dyn base3("c");
    goto L12(r21);
  L36():
    envir2 = force? envir1;
    checkMissing(envir2);
    inherits1 = ld inherits;
    check L37() else D10();
  D3():
    deopt 18 [r17];
  D5():
    deopt 23 [r19];
  D6():
    deopt 30 [r23];
  D7():
    deopt 34 [r30];
  D10():
    deopt 44 [inherits1];
  L23():
    goto L9(r17);
  L26():
    goto L11();
  L30():
    goto L12(r23);
  L31():
    st list = r30;
    goto L13();
  L37():
    inherits2 = force? inherits1;
    checkMissing(inherits2);
    remove = ldf remove in base;
    r34 = dyn remove(list4, envir2, inherits2);
    check L38() else D11();
  D11():
    deopt 47 [r34];
  L38():
    goto L14(r34);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg x3:*, reg x4:V, reg c7:L, reg c8:L, reg c9:V |
    mkenv;
    st x = x;
    sym = ldf `is.symbol`;
    base = ldf `is.symbol` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L1(c1) else L6();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1(c2):
    popenv;
    return c2;
  L5():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.symbol`(x2);
    goto L0(c);
  L6():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L2(c6, r3):
    c8 = `as.logical`(r3);
    c9 = `||`(c6, c8);
    goto L1(c9);
  L7():
    x3 = ld x;
    check L9() else D1();
  L8():
    r2 = dyn base1(<sym x>);
    goto L2(c1, r2);
  D1():
    deopt 5 [c1, x3];
  L9():
    x4 = force? x3;
    checkMissing(x4);
    c7 = `is.character`(x4);
    goto L2(c1, c7);
  }
}