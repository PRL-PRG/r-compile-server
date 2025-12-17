fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner480698839;
    st RweaveLatexFinish = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner480698839(object, error) {
  (reg object:*, reg error:*) -+> V { var object:*, var error:*, reg error_isMissing:L, reg error_orDefault:*, reg summary:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg r2:V, reg c1:L, reg r4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg object5:*, reg object6:V, reg c2:L, reg object8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r6:V, reg r7:V, reg c3:L, reg c5:V, reg error1:*, reg error2:V, reg r8:V, reg c6:L, reg c7:V, reg c9:L, reg file_exists:cls, reg outputname:*, reg outputname1:V, reg p1:p(V +), reg r10:V, reg r11:V, reg c10:L, reg stop:cls, reg gettextf:cls, reg outputname2:*, reg outputname3:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V, reg cat:cls, reg sprintf:cls, reg sQuote:cls, reg outputname4:*, reg outputname5:V, reg p4:p(V +), reg r18:V, reg p5:p(V +), reg r20:V, reg p6:p(V +), reg r22:V, reg close:cls, reg object9:*, reg object10:V, reg c11:L, reg object12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r24:V, reg p7:p(V +), reg r26:V, reg sym:cls, reg base:cls, reg guard:L, reg r27:V, reg r28:V, reg object13:*, reg object14:V, reg c12:L, reg object16:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r29:V, reg length:cls, reg r30:V, reg c13:L, reg object17:*, reg object18:V, reg c14:L, reg object20:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r31:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c15:L, reg x:V, reg close1:cls, reg con:*, reg con1:V, reg p8:p(V +), reg r33:V, reg object21:*, reg object22:V, reg c16:L, reg object24:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r34:V, reg c17:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r35:V, reg r36:V, reg object25:*, reg object26:V, reg c18:L, reg object28:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r37:V, reg object29:*, reg object30:V, reg c19:L, reg object32:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r38:V, reg c20:L, reg dx19:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg object33:*, reg object34:V, reg c21:L, reg dx23:V, reg object36:V, reg dr20:V, reg dc10:L, reg dx25:V, reg dx26:V, reg dx27:V, reg r39:V, reg __:cls, reg r40:V, reg list:cls, reg r41:V, reg l1:*, reg class__:cls, reg r42:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r43:V, reg r44:V, reg concordance:*, reg concordance1:V, reg c22:L, reg concordance3:V, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg r45:V, reg c23:V, reg r46:V, reg c24:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r47:V, reg r48:V, reg concordance4:*, reg concordance5:V, reg outputname6:*, reg outputname7:V, reg as_character:cls, reg r49:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r50:V, reg r51:V, reg concordance6:*, reg concordance7:V, reg r52:I, reg s1:V, reg l2:I, reg i6:I, reg i7:I, reg i8:I, reg c25:L, reg x1:V, reg paste0:cls, reg paste1:cls, reg strwrap:cls, reg concordance8:*, reg concordance9:V, reg c26:L, reg concordance11:V, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg i11:*, reg i12:V, reg __1:cls, reg r53:V, reg p9:p(V +), reg r55:V, reg p10:p(V +), reg r57:V, reg p11:p(V +), reg r59:V, reg cat1:cls, reg special:*, reg special1:V, reg p12:p(V +), reg object37:*, reg object38:V, reg c27:L, reg object40:V, reg dr26:V, reg dc13:L, reg dx32:V, reg dx33:V, reg r61:V, reg p13:p(V +), reg i13:*, reg i14:V, reg r63:V, reg p14:p(V +), reg r65:V, reg i15:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r66:V, reg r67:V, reg outputname8:*, reg outputname9:V, reg invisible:cls, reg r68:V |
    mkenv;
    st object = object;
    error_isMissing = missing.0(error);
    if error_isMissing then L0(FALSE) else L0(error);
  L0(error_orDefault):
    st error = error_orDefault;
    summary = ldf summary;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      c = `is.object`(object2);
      if c then L1() else L2(object2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", object2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(object4):
      r = `$`(object4, <sym output>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn summary(p);
    check L24() else D1();
  D1():
    deopt 3 [r2];
  L24():
    c1 = `is.object`(r2);
    if c1 then L26() else L27(r2);
  L25(dx3):
    st outputname = dx3;
    object5 = ld object;
    check L29() else D2();
  L26():
    dr2 = tryDispatchBuiltin.1("$", r2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(dr2);
  L27(r4):
    r5 = `$`(r4, <sym description>);
    goto L25(r5);
  D2():
    deopt 6 [object5];
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L25(dx2);
  L29():
    object6 = force? object5;
    checkMissing(object6);
    c2 = `is.object`(object6);
    if c2 then L31() else L32(object6);
  L30(dx5):
    r7 = `!`(dx5);
    c3 = `as.logical`(r7);
    if c3 then L34() else L1(c3);
  L31():
    dr4 = tryDispatchBuiltin.1("$", object6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L33() else L32(dr4);
  L32(object8):
    r6 = `$`(object8, <sym quiet>);
    goto L30(r6);
  L1(c5):
    c9 = `as.logical`(c5);
    if c9 then L37() else L2();
  L33():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L30(dx4);
  L34():
    error1 = ld error;
    check L35() else D3();
  D3():
    deopt 10 [c3, error1];
  L2():
    goto L5();
  L5():
    close = ldf close;
    check L47() else D10();
  L35():
    error2 = force? error1;
    checkMissing(error2);
    r8 = `!`(error2);
    c6 = `as.logical`(r8);
    c7 = `&&`(c3, c6);
    goto L1(c7);
  L37():
    file_exists = ldf `file.exists`;
    check L38() else D4();
  D4():
    deopt 15 [];
  D10():
    deopt 36 [];
  L38():
    p1 = prom<V +>{
      outputname = ld outputname;
      outputname1 = force? outputname;
      checkMissing(outputname1);
      return outputname1;
    };
    r10 = dyn file_exists(p1);
    check L39() else D5();
  L47():
    p7 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c11 = `is.object`(object10);
      if c11 then L1() else L2(object10);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", object10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(object12):
      r24 = `$`(object12, <sym output>);
      goto L0(r24);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r26 = dyn close(p7);
    check L48() else D11();
  D5():
    deopt 17 [r10];
  D11():
    deopt 38 [r26];
  L39():
    r11 = `!`(r10);
    c10 = `as.logical`(r11);
    if c10 then L40() else L3();
  L48():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L49() else L50();
  L3():
    goto L4();
  L4():
    cat = ldf cat;
    check L44() else D8();
  L6(r28):
    c13 = `as.logical`(r28);
    if c13 then L57() else L7();
  L40():
    stop = ldf stop;
    check L41() else D6();
  L49():
    object13 = ld object;
    check L51() else D12();
  L50():
    r27 = dyn base(<lang `$`(object, chunkout)>);
    goto L6(r27);
  D6():
    deopt 20 [];
  D8():
    deopt 26 [];
  D12():
    deopt 41 [object13];
  L7():
    goto L10();
  L10():
    object21 = ld object;
    check L67() else D17();
  L41():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        outputname2 = ld outputname;
        outputname3 = force? outputname2;
        checkMissing(outputname3);
        return outputname3;
      };
      r13 = dyn gettextf("the output file '%s' has disappeared", p2);
      return r13;
    };
    r15 = dyn stop(p3);
    check L42() else D7();
  L44():
    p6 = prom<V +>{
      sprintf = ldf sprintf;
      p5 = prom<V +>{
        sQuote = ldf sQuote;
        p4 = prom<V +>{
          outputname4 = ld outputname;
          outputname5 = force? outputname4;
          checkMissing(outputname5);
          return outputname5;
        };
        r18 = dyn sQuote(p4);
        return r18;
      };
      r20 = dyn sprintf("You can now run (pdf)latex on %s", p5);
      return r20;
    };
    r22 = dyn cat[, , , sep]("\n", p6, "\n", "");
    check L45() else D9();
  L51():
    object14 = force? object13;
    checkMissing(object14);
    c12 = `is.object`(object14);
    if c12 then L53() else L54(object14);
  L57():
    object17 = ld object;
    check L58() else D14();
  D7():
    deopt 22 [r15];
  D9():
    deopt 32 [r22];
  D14():
    deopt 46 [object17];
  D17():
    deopt 58 [object21];
  L42():
    goto L4();
  L45():
    goto L5();
  L52(dx9):
    length = ldf length in base;
    r30 = dyn length(dx9);
    check L56() else D13();
  L53():
    dr8 = tryDispatchBuiltin.1("$", object14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L55() else L54(dr8);
  L54(object16):
    r29 = `$`(object16, <sym chunkout>);
    goto L52(r29);
  L58():
    object18 = force? object17;
    checkMissing(object18);
    c14 = `is.object`(object18);
    if c14 then L60() else L61(object18);
  L67():
    object22 = force? object21;
    checkMissing(object22);
    c16 = `is.object`(object22);
    if c16 then L69() else L70(object22);
  D13():
    deopt 45 [r30];
  L55():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L52(dx8);
  L56():
    goto L6(r30);
  L59(dx11):
    s = toForSeq(dx11);
    l = length(s);
    i = 0;
    goto L8(i);
  L60():
    dr10 = tryDispatchBuiltin.1("$", object18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L62() else L61(dr10);
  L61(object20):
    r31 = `$`(object20, <sym chunkout>);
    goto L59(r31);
  L68(dx13):
    c17 = `as.logical`(dx13);
    if c17 then L72() else L11();
  L69():
    dr12 = tryDispatchBuiltin.1("$", object22);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L71() else L70(dr12);
  L70(object24):
    r34 = `$`(object24, <sym haveconcordance>);
    goto L68(r34);
  L8(i1):
    i2 = `+`.1(i1, 1);
    c15 = `<`.1(l, i2);
    if c15 then L63() else L9();
  L11():
    goto L21();
  L21():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L119() else L120();
  L62():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L59(dx10);
  L71():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L68(dx12);
  L72():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L73() else L74();
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st con = x;
    close1 = ldf close;
    check L64() else D15();
  L12(r36):
    st concordance = r36;
    l1 = ld concordance;
    class__ = ldf `class<-`;
    check L94() else D22();
  L22(r67):
    popenv;
    return r67;
  L63():
    goto L10();
  L73():
    object25 = ld object;
    check L75() else D18();
  L74():
    r35 = dyn base1[srcLine, srcFile, offset](<lang `$`(object, linesout)>, <lang `[`(`$`(object, srcFilenames), `$`(object, filenumout))>, 0.0);
    goto L12(r35);
  L119():
    outputname8 = ld outputname;
    check L121() else D33();
  L120():
    r66 = dyn base5(<sym outputname>);
    goto L22(r66);
  D15():
    deopt 50 [i2];
  D18():
    deopt 63 [object25];
  D22():
    deopt 83 ["Rconcordance", l1, "Rconcordance"];
  D33():
    deopt 131 [outputname8];
  L64():
    p8 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r33 = dyn close1(p8);
    check L65() else D16();
  L75():
    object26 = force? object25;
    checkMissing(object26);
    c18 = `is.object`(object26);
    if c18 then L77() else L78(object26);
  L94():
    r42 = dyn class__(l1, NULL, "Rconcordance");
    check L95() else D23();
  L121():
    outputname9 = force? outputname8;
    checkMissing(outputname9);
    invisible = ldf invisible in base;
    r68 = dyn invisible(outputname9);
    check L122() else D34();
  D16():
    deopt 52 [i2, r33];
  D23():
    deopt 85 ["Rconcordance", r42];
  D34():
    deopt 134 [r68];
  L65():
    goto L8(i2);
  L76(dx15):
    object29 = ld object;
    check L80() else D19();
  L77():
    dr14 = tryDispatchBuiltin.1("$", object26);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L79() else L78(dr14);
  L78(object28):
    r37 = `$`(object28, <sym linesout>);
    goto L76(r37);
  L95():
    st concordance = r42;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L96() else L97();
  L122():
    goto L22(r68);
  D19():
    deopt 67 [object29];
  L14(r44):
    r46 = `!`(r44);
    c24 = `as.logical`(r46);
    if c24 then L103() else L15();
  L79():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L76(dx14);
  L80():
    object30 = force? object29;
    checkMissing(object30);
    c19 = `is.object`(object30);
    if c19 then L82() else L83(object30);
  L96():
    concordance = ld concordance;
    check L98() else D24();
  L97():
    r43 = dyn base2(<lang `$`(concordance, srcFile)>);
    goto L14(r43);
  D24():
    deopt 88 [concordance];
  L15():
    goto L20(NULL);
  L20(i15):
    goto L21();
  L81(dx17):
    c20 = `is.object`(dx17);
    if c20 then L85() else L86(dx17);
  L82():
    dr16 = tryDispatchBuiltin.1("$", object30);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L84() else L83(dr16);
  L83(object32):
    r38 = `$`(object32, <sym srcFilenames>);
    goto L81(r38);
  L98():
    concordance1 = force? concordance;
    checkMissing(concordance1);
    c22 = `is.object`(concordance1);
    if c22 then L100() else L101(concordance1);
  L103():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L104() else L105();
  L13(dx21):
    list = ldf list in base;
    r41 = dyn list(dx15, dx21, 0.0);
    check L93() else D21();
  L16(r48):
    st concordance = r48;
    sym4 = ldf seq_along;
    base4 = ldf seq_along in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L109() else L110();
  L84():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L81(dx16);
  L85():
    dr18 = tryDispatchBuiltin.1("[", dx17);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L87() else L86(dr18);
  L86(dx19):
    object33 = ld object;
    check L88() else D20();
  L99(dx29):
    c23 = `==`(dx29, NULL);
    goto L14(c23);
  L100():
    dr22 = tryDispatchBuiltin.1("$", concordance1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L102() else L101(dr22);
  L101(concordance3):
    r45 = `$`(concordance3, <sym srcFile>);
    goto L99(r45);
  L104():
    concordance4 = ld concordance;
    check L106() else D25();
  L105():
    r47 = dyn base3[, targetfile](<sym concordance>, <sym outputname>);
    goto L16(r47);
  D20():
    deopt 70 [dx19, object33];
  D21():
    deopt 78 [r41];
  D25():
    deopt 95 [concordance4];
  L17(r51):
    s1 = toForSeq(r51);
    l2 = length(s1);
    i6 = 0;
    goto L18(i6);
  L87():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L13(dx20);
  L88():
    object34 = force? object33;
    checkMissing(object34);
    c21 = `is.object`(object34);
    if c21 then L90() else L91(dx19, object34);
  L93():
    goto L12(r41);
  L102():
    dx28 = getTryDispatchBuiltinValue(dr22);
    goto L99(dx28);
  L106():
    concordance5 = force? concordance4;
    checkMissing(concordance5);
    outputname6 = ld outputname;
    check L107() else D26();
  L109():
    concordance6 = ld concordance;
    check L111() else D28();
  L110():
    r50 = dyn base4(<sym concordance>);
    goto L17(r50);
  D26():
    deopt 97 [outputname6];
  D28():
    deopt 104 [concordance6];
  L18(i7):
    i8 = `+`.1(i7, 1);
    c25 = `<`.1(l2, i8);
    if c25 then L112() else L19();
  L89(dx26, dx27):
    __ = ldf `[` in base;
    r40 = dyn __(dx26, dx27);
    goto L13(r40);
  L90():
    dr20 = tryDispatchBuiltin.1("$", object34);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L92() else L91(dx19, dr20);
  L91(dx23, object36):
    r39 = `$`(object36, <sym filenumout>);
    goto L89(dx23, r39);
  L107():
    outputname7 = force? outputname6;
    checkMissing(outputname7);
    as_character = ldf `as.character` in base;
    r49 = dyn as_character(concordance5, outputname7);
    check L108() else D27();
  L111():
    concordance7 = force? concordance6;
    checkMissing(concordance7);
    r52 = seq_along(concordance7);
    goto L17(r52);
  D27():
    deopt 101 [r49];
  L19():
    x1 = `[[`(s1, i8, NULL, TRUE);
    st i = x1;
    paste0 = ldf paste0;
    check L113() else D29();
  L92():
    dx25 = getTryDispatchBuiltinValue(dr20);
    goto L89(dx19, dx25);
  L108():
    goto L16(r49);
  L112():
    goto L20(i8);
  D29():
    deopt 108 [i8];
  L113():
    p11 = prom<V +>{
      paste1 = ldf paste;
      p10 = prom<V +>{
        strwrap = ldf strwrap;
        p9 = prom<V +>{
          concordance8 = ld concordance;
          concordance9 = force? concordance8;
          checkMissing(concordance9);
          c26 = `is.object`(concordance9);
          if c26 then L1() else L2(concordance9);
        L0(dx31):
          return dx31;
        L1():
          dr24 = tryDispatchBuiltin.1("[", concordance9);
          dc12 = getTryDispatchBuiltinDispatched(dr24);
          if dc12 then L3() else L2(dr24);
        L2(concordance11):
          i11 = ld i;
          i12 = force? i11;
          __1 = ldf `[` in base;
          r53 = dyn __1(concordance11, i12);
          goto L0(r53);
        L3():
          dx30 = getTryDispatchBuiltinValue(dr24);
          goto L0(dx30);
        };
        r55 = dyn strwrap(p9);
        return r55;
      };
      r57 = dyn paste1[, collapse](p10, " %\n");
      return r57;
    };
    r59 = dyn paste0("\\Sconcordance{", p11, "}\n");
    check L114() else D30();
  D30():
    deopt 112 [i8, r59];
  L114():
    st special = r59;
    cat1 = ldf cat;
    check L115() else D31();
  D31():
    deopt 115 [i8];
  L115():
    p12 = prom<V +>{
      special = ld special;
      special1 = force? special;
      checkMissing(special1);
      return special1;
    };
    p13 = prom<V +>{
      object37 = ld object;
      object38 = force? object37;
      checkMissing(object38);
      c27 = `is.object`(object38);
      if c27 then L1() else L2(object38);
    L0(dx33):
      return dx33;
    L1():
      dr26 = tryDispatchBuiltin.1("$", object38);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(object40):
      r61 = `$`(object40, <sym concordfile>);
      goto L0(r61);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx32);
    };
    p14 = prom<V +>{
      i13 = ld i;
      i14 = force? i13;
      checkMissing(i14);
      r63 = `>`(i14, 1);
      visible.0();
      return r63;
    };
    r65 = dyn cat1[, file, append](p12, p13, p14);
    check L116() else D32();
  D32():
    deopt 121 [i8, r65];
  L116():
    goto L18(i8);
  }
}