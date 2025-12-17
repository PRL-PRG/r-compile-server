fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2788110048;
    st aspell_update_dictionary = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2788110048(dictionary, add) {
  (reg dictionary:*, reg add:*) -+> V { var dictionary:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg dictionary1:*, reg dictionary2:V, reg c:L, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg dictionary3:*, reg dictionary4:V, reg length:cls, reg r7:V, reg r8:V, reg p2:p(V +), reg r10:V, reg grepl:cls, reg _Platform:*, reg _Platform1:V, reg c1:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r11:V, reg p3:p(V +), reg dictionary5:*, reg dictionary6:V, reg p4:p(V +), reg r14:V, reg r15:V, reg c2:L, reg file_path:cls, reg ___:cls, reg r16:V, reg r17:cls, reg r18:V, reg p5:p(V +), reg dictionary7:*, reg dictionary8:V, reg p6:p(V +), reg r21:V, reg paste0:cls, reg dictionary9:*, reg dictionary10:V, reg p7:p(V +), reg r24:V, reg paste1:cls, reg dictionary11:*, reg dictionary12:V, reg p8:p(V +), reg r26:V, reg unique:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg file_exists:cls, reg txt:*, reg txt1:V, reg p9:p(V +), reg r30:V, reg c3:L, reg readLines:cls, reg txt2:*, reg txt3:V, reg p10:p(V +), reg r32:V, reg r33:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg add1:*, reg add2:V, reg enc2utf8:cls, reg r36:V, reg c4:cls, reg r37:V, reg p11:p(V +), reg r39:V, reg new:*, reg new1:V, reg c5:L, reg new3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg order:cls, reg tolower:cls, reg new4:*, reg new5:V, reg p12:p(V +), reg r41:V, reg p13:p(V +), reg new6:*, reg new7:V, reg p14:p(V +), reg r44:V, reg __:cls, reg r45:V, reg new8:*, reg new9:V, reg c6:L, reg new11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r46:V, reg new14:V, reg r47:V, reg new15:*, reg new16:V, reg nzchar:cls, reg r48:V, reg __1:cls, reg r49:V, reg writeLines:cls, reg new17:*, reg new18:V, reg p15:p(V +), reg txt4:*, reg txt5:V, reg p16:p(V +), reg r52:V, reg saveRDS:cls, reg new19:*, reg new20:V, reg p17:p(V +), reg rds:*, reg rds1:V, reg p18:p(V +), reg r55:V |
    mkenv;
    st dictionary = dictionary;
    add_isMissing = missing.0(add);
    if add_isMissing then L0() else L1(add);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(add_orDefault):
    st add = add_orDefault;
    stopifnot = ldf stopifnot;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p1 = prom<V +>{
      sym = ldf `is.character`;
      base = ldf `is.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      dictionary1 = ld dictionary;
      dictionary2 = force? dictionary1;
      checkMissing(dictionary2);
      c = `is.character`(dictionary2);
      goto L0(c);
    L2():
      r2 = dyn base(<sym dictionary>);
      goto L0(r2);
    };
    p2 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      r8 = `==`(r6, 1);
      return r8;
    L1():
      dictionary3 = ld dictionary;
      dictionary4 = force? dictionary3;
      checkMissing(dictionary4);
      length = ldf length in base;
      r7 = dyn length(dictionary4);
      goto L0(r7);
    L2():
      r5 = dyn base1(<sym dictionary>);
      goto L0(r5);
    };
    r10 = dyn stopifnot(p1, p2);
    check L8() else D1();
  D1():
    deopt 4 [r10];
  L8():
    grepl = ldf grepl;
    check L9() else D2();
  D2():
    deopt 6 [];
  L9():
    p3 = prom<V +>{
      _Platform = ld `.Platform`;
      _Platform1 = force? _Platform;
      checkMissing(_Platform1);
      c1 = `is.object`(_Platform1);
      if c1 then L1() else L2(_Platform1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _Platform1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Platform3):
      r11 = `$`(_Platform3, <sym file.sep>);
      goto L0(r11);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p4 = prom<V +>{
      dictionary5 = ld dictionary;
      dictionary6 = force? dictionary5;
      checkMissing(dictionary6);
      return dictionary6;
    };
    r14 = dyn grepl[, , fixed](p3, p4, TRUE);
    check L10() else D3();
  D3():
    deopt 11 [r14];
  L10():
    r15 = `!`(r14);
    c2 = `as.logical`(r15);
    if c2 then L11() else L2();
  L2():
    goto L3();
  L3():
    paste0 = ldf paste0;
    check L15() else D6();
  L11():
    file_path = ldf `file.path`;
    check L12() else D4();
  D4():
    deopt 14 [];
  D6():
    deopt 24 [];
  L12():
    p5 = prom<V +>{
      ___ = ldf `:::`;
      r16 = dyn ___("tools", ".R_top_srcdir_from_Rd");
      checkFun.0(r16);
      r17 = r16 as cls;
      r18 = dyn r17();
      return r18;
    };
    p6 = prom<V +>{
      dictionary7 = ld dictionary;
      dictionary8 = force? dictionary7;
      checkMissing(dictionary8);
      return dictionary8;
    };
    r21 = dyn file_path(p5, "share", "dictionaries", p6);
    check L13() else D5();
  L15():
    p7 = prom<V +>{
      dictionary9 = ld dictionary;
      dictionary10 = force? dictionary9;
      checkMissing(dictionary10);
      return dictionary10;
    };
    r24 = dyn paste0(p7, ".txt");
    check L16() else D7();
  D5():
    deopt 19 [r21];
  D7():
    deopt 27 [r24];
  L13():
    st dictionary = r21;
    goto L3();
  L16():
    st txt = r24;
    paste1 = ldf paste0;
    check L17() else D8();
  D8():
    deopt 30 [];
  L17():
    p8 = prom<V +>{
      dictionary11 = ld dictionary;
      dictionary12 = force? dictionary11;
      checkMissing(dictionary12);
      return dictionary12;
    };
    r26 = dyn paste1(p8, ".rds");
    check L18() else D9();
  D9():
    deopt 33 [r26];
  L18():
    st rds = r26;
    unique = ldf unique;
    check L19() else D10();
  D10():
    deopt 36 [];
  L19():
    p11 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L0(r28):
      return r28;
    L4():
      file_exists = ldf `file.exists`;
      p9 = prom<V +>{
        txt = ld txt;
        txt1 = force? txt;
        checkMissing(txt1);
        return txt1;
      };
      r30 = dyn file_exists(p9);
      c3 = `as.logical`(r30);
      if c3 then L6() else L1();
    L5():
      r27 = dyn base2(<lang if(file.exists(txt), readLines(txt, encoding="UTF-8"))>, <lang enc2utf8(add)>);
      goto L0(r27);
    L1():
      goto L2(NULL);
    L2(r33):
      sym3 = ldf enc2utf8;
      base3 = ldf enc2utf8 in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L8() else L9();
    L6():
      readLines = ldf readLines;
      p10 = prom<V +>{
        txt2 = ld txt;
        txt3 = force? txt2;
        checkMissing(txt3);
        return txt3;
      };
      r32 = dyn readLines[, encoding](p10, "UTF-8");
      goto L2(r32);
    L3(r35):
      c4 = ldf c in base;
      r37 = dyn c4(r33, r35);
      goto L0(r37);
    L8():
      add1 = ld add;
      add2 = force? add1;
      checkMissing(add2);
      enc2utf8 = ldf enc2utf8 in base;
      r36 = dyn enc2utf8(add2);
      goto L3(r36);
    L9():
      r34 = dyn base3(<sym add>);
      goto L3(r34);
    };
    r39 = dyn unique(p11);
    check L20() else D11();
  D11():
    deopt 38 [r39];
  L20():
    st new = r39;
    new = ld new;
    check L21() else D12();
  D12():
    deopt 40 [new];
  L21():
    new1 = force? new;
    checkMissing(new1);
    c5 = `is.object`(new1);
    if c5 then L22() else L23(new1);
  L4(dx3):
    st new = dx3;
    new8 = ld new;
    check L27() else D15();
  L22():
    dr2 = tryDispatchBuiltin.1("[", new1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(dr2);
  L23(new3):
    order = ldf order;
    check L25() else D13();
  D13():
    deopt 43 [new3];
  D15():
    deopt 49 [new8];
  L24():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L25():
    p13 = prom<V +>{
      tolower = ldf tolower;
      p12 = prom<V +>{
        new4 = ld new;
        new5 = force? new4;
        checkMissing(new5);
        return new5;
      };
      r41 = dyn tolower(p12);
      return r41;
    };
    p14 = prom<V +>{
      new6 = ld new;
      new7 = force? new6;
      checkMissing(new7);
      return new7;
    };
    r44 = dyn order(p13, p14);
    check L26() else D14();
  L27():
    new9 = force? new8;
    checkMissing(new9);
    c6 = `is.object`(new9);
    if c6 then L28() else L29(new9);
  D14():
    deopt 46 [new3, r44];
  L5(dx5):
    st new = dx5;
    writeLines = ldf writeLines;
    check L35() else D18();
  L26():
    __ = ldf `[` in base;
    r45 = dyn __(new3, r44);
    goto L4(r45);
  L28():
    dr4 = tryDispatchBuiltin.1("[", new9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L30() else L29(dr4);
  L29(new11):
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L31() else L32();
  D18():
    deopt 60 [];
  L6(new14, r47):
    __1 = ldf `[` in base;
    r49 = dyn __1(new14, r47);
    goto L5(r49);
  L30():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(dx4);
  L31():
    new15 = ld new;
    check L33() else D16();
  L32():
    r46 = dyn base4(<sym new>);
    goto L6(new11, r46);
  L35():
    p15 = prom<V +>{
      new17 = ld new;
      new18 = force? new17;
      checkMissing(new18);
      return new18;
    };
    p16 = prom<V +>{
      txt4 = ld txt;
      txt5 = force? txt4;
      checkMissing(txt5);
      return txt5;
    };
    r52 = dyn writeLines[, , useBytes](p15, p16, TRUE);
    check L36() else D19();
  D16():
    deopt 53 [new11, new15];
  D19():
    deopt 65 [r52];
  L33():
    new16 = force? new15;
    checkMissing(new16);
    nzchar = ldf nzchar in base;
    r48 = dyn nzchar(new16);
    check L34() else D17();
  L36():
    saveRDS = ldf saveRDS;
    check L37() else D20();
  D17():
    deopt 56 [new11, r48];
  D20():
    deopt 67 [];
  L34():
    goto L6(new11, r48);
  L37():
    p17 = prom<V +>{
      new19 = ld new;
      new20 = force? new19;
      checkMissing(new20);
      return new20;
    };
    p18 = prom<V +>{
      rds = ld rds;
      rds1 = force? rds;
      checkMissing(rds1);
      return rds1;
    };
    r55 = dyn saveRDS(p17, p18);
    check L38() else D21();
  D21():
    deopt 70 [r55];
  L38():
    popenv;
    return r55;
  }
}