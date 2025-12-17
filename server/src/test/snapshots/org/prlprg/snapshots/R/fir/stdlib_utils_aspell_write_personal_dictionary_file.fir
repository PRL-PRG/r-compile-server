fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1827207478;
    st aspell_write_personal_dictionary_file = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1827207478(x, out, language, program) {
  (reg x:*, reg out:*, reg language:*, reg program:*) -+> V { var x:*, var out:*, var language:*, reg language_isMissing:L, reg language_orDefault:*, var program:*, reg program_isMissing:L, reg program_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg c:L, reg sort:cls, reg unique:cls, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg aspell_find_program:cls, reg program1:*, reg program2:V, reg p2:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg program3:*, reg program4:V, reg is_na:cls, reg r13:V, reg c2:L, reg stop:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg program5:*, reg program6:V, reg names:cls, reg r18:V, reg r19:V, reg c3:L, reg sprintf:cls, reg language1:*, reg language2:V, reg p3:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg x7:*, reg x8:V, reg length:cls, reg r23:V, reg p4:p(V +), reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg x9:*, reg x10:V, reg enc2utf8:cls, reg r28:V, reg writeLines:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg header:*, reg header1:V, reg x11:*, reg x12:V, reg c4:cls, reg r32:V, reg p5:p(V +), reg out1:*, reg out2:V, reg p6:p(V +), reg r35:V |
    mkenv;
    st x = x;
    st out = out;
    language_isMissing = missing.0(language);
    if language_isMissing then L0("en") else L0(language);
  L0(language_orDefault):
    st language = language_orDefault;
    program_isMissing = missing.0(program);
    if program_isMissing then L1(NULL) else L1(program);
  L1(program_orDefault):
    st program = program_orDefault;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L2(r1):
    c = `as.logical`(r1);
    if c then L16() else L3();
  L12():
    x1 = ld x;
    check L14() else D0();
  L13():
    r = dyn base(<sym x>, "aspell");
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3():
    goto L4();
  L4():
    aspell_find_program = ldf aspell_find_program;
    check L20() else D4();
  L14():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "aspell", FALSE);
    check L15() else D1();
  L16():
    sort = ldf sort;
    check L17() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 16 [];
  L15():
    goto L2(r2);
  L17():
    p1 = prom<V +>{
      unique = ldf unique;
      p = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        c1 = `is.object`(x4);
        if c1 then L1() else L2(x4);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", x4);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(x6):
        r3 = `$`(x6, <sym Original>);
        goto L0(r3);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r5 = dyn unique(p);
      return r5;
    };
    r7 = dyn sort(p1);
    check L18() else D3();
  L20():
    p2 = prom<V +>{
      program1 = ld program;
      program2 = force? program1;
      checkMissing(program2);
      return program2;
    };
    r10 = dyn aspell_find_program(p2);
    check L21() else D5();
  D3():
    deopt 11 [r7];
  D5():
    deopt 18 [r10];
  L18():
    st x = r7;
    goto L4();
  L21():
    st program = r10;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L5(r12):
    c2 = `as.logical`(r12);
    if c2 then L26() else L6();
  L22():
    program3 = ld program;
    check L24() else D6();
  L23():
    r11 = dyn base1(<sym program>);
    goto L5(r11);
  D6():
    deopt 22 [program3];
  L6():
    goto L7();
  L7():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L24():
    program4 = force? program3;
    checkMissing(program4);
    is_na = ldf `is.na` in base;
    r13 = dyn is_na(program4);
    check L25() else D7();
  L26():
    stop = ldf stop;
    check L27() else D8();
  D7():
    deopt 25 [r13];
  D8():
    deopt 27 [];
  L8(r17):
    r19 = `==`(r17, "aspell");
    c3 = `as.logical`(r19);
    if c3 then L34() else L9();
  L25():
    goto L5(r13);
  L27():
    r14 = dyn stop("No suitable spell check program found.");
    check L28() else D9();
  L30():
    program5 = ld program;
    check L32() else D10();
  L31():
    r16 = dyn base2(<sym program>);
    goto L8(r16);
  D9():
    deopt 29 [r14];
  D10():
    deopt 34 [program5];
  L9():
    st header = NULL;
    goto L11();
  L11():
    writeLines = ldf writeLines;
    check L42() else D16();
  L28():
    goto L7();
  L32():
    program6 = force? program5;
    checkMissing(program6);
    names = ldf names in base;
    r18 = dyn names(program6);
    check L33() else D11();
  L34():
    sprintf = ldf sprintf;
    check L35() else D12();
  D11():
    deopt 37 [r18];
  D12():
    deopt 41 [];
  D16():
    deopt 58 [];
  L33():
    goto L8(r18);
  L35():
    p3 = prom<V +>{
      language1 = ld language;
      language2 = force? language1;
      checkMissing(language2);
      return language2;
    };
    p4 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      length = ldf length in base;
      r23 = dyn length(x8);
      goto L0(r23);
    L2():
      r21 = dyn base3(<sym x>);
      goto L0(r21);
    };
    r25 = dyn sprintf("personal_ws-1.1 %s %d UTF-8", p3, p4);
    check L36() else D13();
  L42():
    p5 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      header = ld header;
      header1 = force? header;
      checkMissing(header1);
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      c4 = ldf c in base;
      r32 = dyn c4(header1, x12);
      goto L0(r32);
    L2():
      r30 = dyn base5(<sym header>, <sym x>);
      goto L0(r30);
    };
    p6 = prom<V +>{
      out1 = ld out;
      out2 = force? out1;
      checkMissing(out2);
      return out2;
    };
    r35 = dyn writeLines[, , useBytes](p5, p6, TRUE);
    check L43() else D17();
  D13():
    deopt 45 [r25];
  D17():
    deopt 63 [r35];
  L36():
    st header = r25;
    sym4 = ldf enc2utf8;
    base4 = ldf enc2utf8 in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L43():
    popenv;
    return r35;
  L10(r27):
    st x = r27;
    goto L11();
  L37():
    x9 = ld x;
    check L39() else D14();
  L38():
    r26 = dyn base4(<sym x>);
    goto L10(r26);
  D14():
    deopt 49 [x9];
  L39():
    x10 = force? x9;
    checkMissing(x10);
    enc2utf8 = ldf enc2utf8 in base;
    r28 = dyn enc2utf8(x10);
    check L40() else D15();
  D15():
    deopt 52 [r28];
  L40():
    goto L10(r28);
  }
}