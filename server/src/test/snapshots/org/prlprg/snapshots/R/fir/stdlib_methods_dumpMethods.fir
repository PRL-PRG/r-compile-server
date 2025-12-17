fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3311282450;
    st dumpMethods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3311282450(f, file, signature, methods, where) {
  (reg f:*, reg file:*, reg signature:*, reg methods:*, reg where:*) -+> V { var f:*, var file:*, reg file_isMissing:L, reg file_orDefault:*, var signature:*, reg signature_isMissing:L, reg signature_orDefault:*, var methods:*, reg methods_isMissing:L, reg methods_orDefault:*, reg findMethods:cls, reg f1:*, reg f2:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg signature1:*, reg signature2:V, reg length:cls, reg r10:V, reg r11:V, reg c:L, reg warning:cls, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg file1:*, reg file2:V, reg c1:L, reg c2:L, reg file3:*, reg file4:V, reg r16:V, reg r17:V, reg c3:L, reg file5:cls, reg file6:*, reg file7:V, reg p5:p(V +), reg r19:V, reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg file8:*, reg file9:V, reg inherits:cls, reg r24:V, reg c4:L, reg isOpen:cls, reg file10:*, reg file11:V, reg p6:p(V +), reg r26:V, reg r27:V, reg c5:L, reg open:cls, reg file12:*, reg file13:V, reg p7:p(V +), reg r29:V, reg r30:V, reg stop:cls, reg r31:V, reg isSTDOUT:*, reg isSTDOUT1:V, reg r32:V, reg c6:L, reg sink:cls, reg file14:*, reg file15:V, reg p8:p(V +), reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg on_exit:cls, reg r37:V, reg __:cls, reg r39:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg r41:V, reg methods1:*, reg methods2:V, reg r42:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c7:L, reg x:V, reg dumpMethod:cls, reg f3:*, reg f4:V, reg p9:p(V +), reg sigs:*, reg sigs1:V, reg c8:L, reg sigs3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __1:cls, reg r44:V, reg p10:p(V +), reg methods3:*, reg methods4:V, reg c9:L, reg methods6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i7:*, reg i8:V, reg __2:cls, reg r46:V, reg p11:p(V +), reg r48:V |
    mkenv;
    st f = f;
    file_isMissing = missing.0(file);
    if file_isMissing then L0("") else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    signature_isMissing = missing.0(signature);
    if signature_isMissing then L1(NULL) else L1(signature);
  L1(signature_orDefault):
    st signature = signature_orDefault;
    methods_isMissing = missing.0(methods);
    if methods_isMissing then L2() else L3(methods);
  L2():
    p2 = prom<V +>{
      findMethods = ldf findMethods;
      p = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      p1 = prom<V +>{
        where1 = ld where;
        where2 = force? where1;
        checkMissing(where2);
        return where2;
      };
      r2 = dyn findMethods[, where](p, p1);
      return r2;
    };
    goto L3(p2);
  L3(methods_orDefault):
    st methods = methods_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L4() else L5(where);
  L4():
    p4 = prom<V +>{
      topenv = ldf topenv;
      p3 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r4 = dyn parent_frame();
        return r4;
      };
      r6 = dyn topenv(p3);
      return r6;
    };
    goto L5(p4);
  L5(where_orDefault):
    st where = where_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L6(r9):
    r11 = `>`(r9, 0.0);
    c = `as.logical`(r11);
    if c then L28() else L7();
  L24():
    signature1 = ld signature;
    check L26() else D0();
  L25():
    r8 = dyn base(<sym signature>);
    goto L6(r8);
  D0():
    deopt 2 [signature1];
  L7():
    goto L8();
  L8():
    st closeit = TRUE;
    st isSTDOUT = FALSE;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L26():
    signature2 = force? signature1;
    checkMissing(signature2);
    length = ldf length in base;
    r10 = dyn length(signature2);
    check L27() else D1();
  L28():
    warning = ldf warning;
    check L29() else D2();
  D1():
    deopt 5 [r10];
  D2():
    deopt 9 [];
  L9(r15):
    c2 = `as.logical`(r15);
    if c2 then L35() else L10();
  L27():
    goto L6(r10);
  L29():
    r12 = dyn warning("argument 'signature' is not meaningful with the current implementation and is ignored \n(extract a subset of the methods list instead)");
    check L30() else D3();
  L32():
    file1 = ld file;
    check L34() else D4();
  L33():
    r14 = dyn base1(<sym file>);
    goto L9(r14);
  D3():
    deopt 11 [r12];
  D4():
    deopt 21 [file1];
  L10():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L13():
    isSTDOUT = ld isSTDOUT;
    check L56() else D16();
  L30():
    goto L8();
  L34():
    file2 = force? file1;
    checkMissing(file2);
    c1 = `is.character`(file2);
    goto L9(c1);
  L35():
    file3 = ld file;
    check L36() else D5();
  D5():
    deopt 24 [file3];
  D16():
    deopt 63 [isSTDOUT];
  L14(r23):
    c4 = `as.logical`(r23);
    if c4 then L46() else L15();
  L36():
    file4 = force? file3;
    checkMissing(file4);
    r16 = `==`(file4, "");
    st isSTDOUT = r16;
    r17 = `!`(r16);
    c3 = `as.logical`(r17);
    if c3 then L37() else L11();
  L42():
    file8 = ld file;
    check L44() else D8();
  L43():
    r22 = dyn base2(<sym file>, "connection");
    goto L14(r22);
  L56():
    isSTDOUT1 = force? isSTDOUT;
    checkMissing(isSTDOUT1);
    r32 = `!`(isSTDOUT1);
    c6 = `as.logical`(r32);
    if c6 then L57() else L18();
  D8():
    deopt 40 [file8];
  L11():
    goto L12(NULL);
  L12(r20):
    goto L13();
  L15():
    stop = ldf stop;
    check L54() else D14();
  L18():
    goto L20();
  L20():
    __ = ldf `@` in base;
    r39 = dyn __(<sym methods>, <sym signatures>);
    st sigs = r39;
    sym4 = ldf seq_along;
    base4 = ldf seq_along in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  L37():
    file5 = ldf file;
    check L38() else D6();
  L44():
    file9 = force? file8;
    checkMissing(file9);
    inherits = ldf inherits in base;
    r24 = dyn inherits(file9, "connection", FALSE);
    check L45() else D9();
  L46():
    isOpen = ldf isOpen;
    check L47() else D10();
  L57():
    sink = ldf sink;
    check L58() else D17();
  D6():
    deopt 31 [];
  D9():
    deopt 45 [r24];
  D10():
    deopt 47 [];
  D14():
    deopt 60 [];
  D17():
    deopt 67 [];
  L21(r41):
    s = toForSeq(r41);
    l = length(s);
    i = 0;
    goto L22(i);
  L38():
    p5 = prom<V +>{
      file6 = ld file;
      file7 = force? file6;
      checkMissing(file7);
      return file7;
    };
    r19 = dyn file5(p5, "w");
    check L39() else D7();
  L45():
    goto L14(r24);
  L47():
    p6 = prom<V +>{
      file10 = ld file;
      file11 = force? file10;
      checkMissing(file11);
      return file11;
    };
    r26 = dyn isOpen(p6);
    check L48() else D11();
  L54():
    r31 = dyn stop("'file' must be a character string or a connection");
    check L55() else D15();
  L58():
    p8 = prom<V +>{
      file14 = ld file;
      file15 = force? file14;
      checkMissing(file15);
      return file15;
    };
    r34 = dyn sink(p8);
    check L59() else D18();
  L63():
    methods1 = ld methods;
    check L65() else D19();
  L64():
    r40 = dyn base4(<sym methods>);
    goto L21(r40);
  D7():
    deopt 34 [r19];
  D11():
    deopt 49 [r26];
  D15():
    deopt 62 [r31];
  D18():
    deopt 69 [r34];
  D19():
    deopt 79 [methods1];
  L22(i1):
    i2 = `+`.1(i1, 1);
    c7 = `<`.1(l, i2);
    if c7 then L66() else L23();
  L39():
    st file = r19;
    goto L12(r19);
  L48():
    r27 = `!`(r26);
    c5 = `as.logical`(r27);
    if c5 then L49() else L16();
  L55():
    goto L13();
  L59():
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L60() else L61();
  L65():
    methods2 = force? methods1;
    checkMissing(methods2);
    r42 = seq_along(methods2);
    goto L21(r42);
  L16():
    st closeit = FALSE;
    goto L17(FALSE);
  L17(r30):
    goto L13();
  L19(r36):
    goto L20();
  L23():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    dumpMethod = ldf dumpMethod;
    check L67() else D20();
  L49():
    open = ldf open;
    check L50() else D12();
  L60():
    on_exit = ldf `on.exit` in base;
    r37 = dyn on_exit(<lang {
      sink();
      if(closeit, close(file))
    }>);
    goto L19(r37);
  L61():
    r35 = dyn base3(<lang {
      sink();
      if(closeit, close(file))
    }>);
    goto L19(r35);
  L66():
    invisible.0();
    popenv;
    return i2;
  D12():
    deopt 52 [];
  D20():
    deopt 83 [i2];
  L50():
    p7 = prom<V +>{
      file12 = ld file;
      file13 = force? file12;
      checkMissing(file13);
      return file13;
    };
    r29 = dyn open(p7, "w");
    check L51() else D13();
  L67():
    p9 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p10 = prom<V +>{
      sigs = ld sigs;
      sigs1 = force? sigs;
      checkMissing(sigs1);
      c8 = `is.object`(sigs1);
      if c8 then L1() else L2(sigs1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", sigs1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(sigs3):
      i5 = ld i;
      i6 = force? i5;
      __1 = ldf `[[` in base;
      r44 = dyn __1(sigs3, i6);
      goto L0(r44);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p11 = prom<V +>{
      methods3 = ld methods;
      methods4 = force? methods3;
      checkMissing(methods4);
      c9 = `is.object`(methods4);
      if c9 then L1() else L2(methods4);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", methods4);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(methods6):
      i7 = ld i;
      i8 = force? i7;
      __2 = ldf `[[` in base;
      r46 = dyn __2(methods6, i8);
      goto L0(r46);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r48 = dyn dumpMethod[, , file, def](p9, p10, "", p11);
    check L68() else D21();
  D13():
    deopt 55 [r29];
  D21():
    deopt 90 [i2, r48];
  L51():
    goto L17(r29);
  L68():
    goto L22(i2);
  }
}