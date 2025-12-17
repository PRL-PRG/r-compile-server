fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2337725366;
    st dumpMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2337725366(f, signature, file, where, def) {
  (reg f:*, reg signature:*, reg file:*, reg where:*, reg def:*) -+> V { var f:*, var signature:*, reg signature_isMissing:L, reg signature_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var file:*, reg file_isMissing:L, reg file_orDefault:*, reg defaultDumpName:cls, reg f1:*, reg f2:V, reg p1:p(V +), reg signature1:*, reg signature2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r6:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), var def:*, reg def_isMissing:L, reg def_orDefault:*, reg getMethod:cls, reg f3:*, reg f4:V, reg p6:p(V +), reg signature3:*, reg signature4:V, reg p7:p(V +), reg where1:*, reg where2:V, reg p8:p(V +), reg r13:V, reg p9:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg def1:*, reg def2:V, reg is_function:cls, reg r17:V, reg r18:V, reg c:L, reg getMethod1:cls, reg f5:*, reg f6:V, reg p10:p(V +), reg character1:cls, reg r20:V, reg p11:p(V +), reg where3:*, reg where4:V, reg p12:p(V +), reg r23:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg file1:*, reg file2:V, reg c1:L, reg c2:L, reg file3:*, reg file4:V, reg r27:V, reg r28:V, reg c3:L, reg file5:cls, reg file6:*, reg file7:V, reg p13:p(V +), reg r30:V, reg r31:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r33:V, reg r34:V, reg file8:*, reg file9:V, reg inherits:cls, reg r35:V, reg c4:L, reg isOpen:cls, reg file10:*, reg file11:V, reg p14:p(V +), reg r37:V, reg r38:V, reg c5:L, reg open:cls, reg file12:*, reg file13:V, reg p15:p(V +), reg r40:V, reg r41:V, reg stop:cls, reg r42:V, reg isSTDOUT:*, reg isSTDOUT1:V, reg r43:V, reg c6:L, reg sink:cls, reg file14:*, reg file15:V, reg p16:p(V +), reg r45:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r46:V, reg r47:V, reg on_exit:cls, reg r48:V, reg cat:cls, reg f7:*, reg f8:V, reg p17:p(V +), reg deparse:cls, reg signature5:*, reg signature6:V, reg p18:p(V +), reg r52:V, reg p19:p(V +), reg r54:V, reg dput:cls, reg __:cls, reg r55:V, reg p20:p(V +), reg r57:V, reg cat1:cls, reg r58:V, reg isSTDOUT2:*, reg isSTDOUT3:V, reg r59:V, reg c7:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r60:V, reg on_exit1:cls, reg r62:V, reg sink1:cls, reg r63:V, reg closeit:*, reg closeit1:V, reg c8:L, reg close:cls, reg file16:*, reg file17:V, reg p21:p(V +), reg r65:V, reg r66:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r68:V, reg r69:V, reg file18:*, reg file19:V, reg invisible:cls, reg r70:V |
    mkenv;
    st f = f;
    signature_isMissing = missing.0(signature);
    if signature_isMissing then L0() else L1(signature);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(signature_orDefault):
    st signature = signature_orDefault;
    file_isMissing = missing.0(file);
    if file_isMissing then L2() else L3(file);
  L2():
    p3 = prom<V +>{
      defaultDumpName = ldf defaultDumpName;
      p1 = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      p2 = prom<V +>{
        signature1 = ld signature;
        signature2 = force? signature1;
        checkMissing(signature2);
        return signature2;
      };
      r4 = dyn defaultDumpName(p1, p2);
      return r4;
    };
    goto L3(p3);
  L3(file_orDefault):
    st file = file_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L4() else L5(where);
  L4():
    p5 = prom<V +>{
      topenv = ldf topenv;
      p4 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r6 = dyn parent_frame();
        return r6;
      };
      r8 = dyn topenv(p4);
      return r8;
    };
    goto L5(p5);
  L5(where_orDefault):
    st where = where_orDefault;
    def_isMissing = missing.0(def);
    if def_isMissing then L6() else L7(def);
  L6():
    p9 = prom<V +>{
      getMethod = ldf getMethod;
      p6 = prom<V +>{
        f3 = ld f;
        f4 = force? f3;
        checkMissing(f4);
        return f4;
      };
      p7 = prom<V +>{
        signature3 = ld signature;
        signature4 = force? signature3;
        checkMissing(signature4);
        return signature4;
      };
      p8 = prom<V +>{
        where1 = ld where;
        where2 = force? where1;
        checkMissing(where2);
        return where2;
      };
      r13 = dyn getMethod[, , where, optional](p6, p7, p8, TRUE);
      return r13;
    };
    goto L7(p9);
  L7(def_orDefault):
    st def = def_orDefault;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L8(r16):
    r18 = `!`(r16);
    c = `as.logical`(r18);
    if c then L33() else L9();
  L29():
    def1 = ld def;
    check L31() else D0();
  L30():
    r15 = dyn base(<sym def>);
    goto L8(r15);
  D0():
    deopt 2 [def1];
  L9():
    goto L10();
  L10():
    st closeit = TRUE;
    st isSTDOUT = FALSE;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L31():
    def2 = force? def1;
    checkMissing(def2);
    is_function = ldf `is.function` in base;
    r17 = dyn is_function(def2);
    check L32() else D1();
  L33():
    getMethod1 = ldf getMethod;
    check L34() else D2();
  D1():
    deopt 5 [r17];
  D2():
    deopt 8 [];
  L11(r26):
    c2 = `as.logical`(r26);
    if c2 then L40() else L12();
  L32():
    goto L8(r17);
  L34():
    p10 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p11 = prom<V +>{
      character1 = ldf character;
      r20 = dyn character1();
      return r20;
    };
    p12 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r23 = dyn getMethod1[, , where, optional](p10, p11, p12, TRUE);
    check L35() else D3();
  L37():
    file1 = ld file;
    check L39() else D4();
  L38():
    r25 = dyn base1(<sym file>);
    goto L11(r25);
  D3():
    deopt 15 [r23];
  D4():
    deopt 26 [file1];
  L12():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L47() else L48();
  L15():
    isSTDOUT = ld isSTDOUT;
    check L61() else D16();
  L35():
    st def = r23;
    goto L10();
  L39():
    file2 = force? file1;
    checkMissing(file2);
    c1 = `is.character`(file2);
    goto L11(c1);
  L40():
    file3 = ld file;
    check L41() else D5();
  D5():
    deopt 29 [file3];
  D16():
    deopt 68 [isSTDOUT];
  L16(r34):
    c4 = `as.logical`(r34);
    if c4 then L51() else L17();
  L41():
    file4 = force? file3;
    checkMissing(file4);
    r27 = `==`(file4, "");
    st isSTDOUT = r27;
    r28 = `!`(r27);
    c3 = `as.logical`(r28);
    if c3 then L42() else L13();
  L47():
    file8 = ld file;
    check L49() else D8();
  L48():
    r33 = dyn base2(<sym file>, "connection");
    goto L16(r33);
  L61():
    isSTDOUT1 = force? isSTDOUT;
    checkMissing(isSTDOUT1);
    r43 = `!`(isSTDOUT1);
    c6 = `as.logical`(r43);
    if c6 then L62() else L20();
  D8():
    deopt 45 [file8];
  L13():
    goto L14(NULL);
  L14(r31):
    goto L15();
  L17():
    stop = ldf stop;
    check L59() else D14();
  L20():
    goto L22();
  L22():
    cat = ldf cat;
    check L68() else D19();
  L42():
    file5 = ldf file;
    check L43() else D6();
  L49():
    file9 = force? file8;
    checkMissing(file9);
    inherits = ldf inherits in base;
    r35 = dyn inherits(file9, "connection", FALSE);
    check L50() else D9();
  L51():
    isOpen = ldf isOpen;
    check L52() else D10();
  L62():
    sink = ldf sink;
    check L63() else D17();
  D6():
    deopt 36 [];
  D9():
    deopt 50 [r35];
  D10():
    deopt 52 [];
  D14():
    deopt 65 [];
  D17():
    deopt 72 [];
  D19():
    deopt 81 [];
  L43():
    p13 = prom<V +>{
      file6 = ld file;
      file7 = force? file6;
      checkMissing(file7);
      return file7;
    };
    r30 = dyn file5(p13, "w");
    check L44() else D7();
  L50():
    goto L16(r35);
  L52():
    p14 = prom<V +>{
      file10 = ld file;
      file11 = force? file10;
      checkMissing(file11);
      return file11;
    };
    r37 = dyn isOpen(p14);
    check L53() else D11();
  L59():
    r42 = dyn stop("'file' must be a character string or a connection");
    check L60() else D15();
  L63():
    p16 = prom<V +>{
      file14 = ld file;
      file15 = force? file14;
      checkMissing(file15);
      return file15;
    };
    r45 = dyn sink(p16);
    check L64() else D18();
  L68():
    p17 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    p19 = prom<V +>{
      deparse = ldf deparse;
      p18 = prom<V +>{
        signature5 = ld signature;
        signature6 = force? signature5;
        checkMissing(signature6);
        return signature6;
      };
      r52 = dyn deparse(p18);
      return r52;
    };
    r54 = dyn cat[, , , , , sep]("setMethod(\"", p17, "\", ", p19, ",\n", "");
    check L69() else D20();
  D7():
    deopt 39 [r30];
  D11():
    deopt 54 [r37];
  D15():
    deopt 67 [r42];
  D18():
    deopt 74 [r45];
  D20():
    deopt 89 [r54];
  L44():
    st file = r30;
    goto L14(r30);
  L53():
    r38 = `!`(r37);
    c5 = `as.logical`(r38);
    if c5 then L54() else L18();
  L60():
    goto L15();
  L64():
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L65() else L66();
  L69():
    dput = ldf dput;
    check L70() else D21();
  D21():
    deopt 91 [];
  L18():
    st closeit = FALSE;
    goto L19(FALSE);
  L19(r41):
    goto L15();
  L21(r47):
    goto L22();
  L54():
    open = ldf open;
    check L55() else D12();
  L65():
    on_exit = ldf `on.exit` in base;
    r48 = dyn on_exit(<lang {
      sink();
      if(closeit, close(file))
    }>);
    goto L21(r48);
  L66():
    r46 = dyn base3(<lang {
      sink();
      if(closeit, close(file))
    }>);
    goto L21(r46);
  L70():
    p20 = prom<V +>{
      __ = ldf `@` in base;
      r55 = dyn __(<sym def>, <sym .Data>);
      return r55;
    };
    r57 = dyn dput(p20);
    check L71() else D22();
  D12():
    deopt 57 [];
  D22():
    deopt 93 [r57];
  L55():
    p15 = prom<V +>{
      file12 = ld file;
      file13 = force? file12;
      checkMissing(file13);
      return file13;
    };
    r40 = dyn open(p15, "w");
    check L56() else D13();
  L71():
    cat1 = ldf cat;
    check L72() else D23();
  D13():
    deopt 60 [r40];
  D23():
    deopt 95 [];
  L56():
    goto L19(r40);
  L72():
    r58 = dyn cat1[, sep](")\n", "");
    check L73() else D24();
  D24():
    deopt 99 [r58];
  L73():
    isSTDOUT2 = ld isSTDOUT;
    check L74() else D25();
  D25():
    deopt 100 [isSTDOUT2];
  L74():
    isSTDOUT3 = force? isSTDOUT2;
    checkMissing(isSTDOUT3);
    r59 = `!`(isSTDOUT3);
    c7 = `as.logical`(r59);
    if c7 then L75() else L23();
  L23():
    goto L27();
  L27():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L86() else L87();
  L75():
    sym4 = ldf `on.exit`;
    base4 = ldf `on.exit` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L76() else L77();
  L24():
    sink1 = ldf sink;
    check L78() else D26();
  L28(r69):
    popenv;
    return r69;
  L76():
    on_exit1 = ldf `on.exit` in base;
    r62 = dyn on_exit1();
    goto L24();
  L77():
    r60 = dyn base4();
    goto L24();
  L86():
    file18 = ld file;
    check L88() else D31();
  L87():
    r68 = dyn base5(<sym file>);
    goto L28(r68);
  D26():
    deopt 107 [];
  D31():
    deopt 121 [file18];
  L78():
    r63 = dyn sink1();
    check L79() else D27();
  L88():
    file19 = force? file18;
    checkMissing(file19);
    invisible = ldf invisible in base;
    r70 = dyn invisible(file19);
    check L89() else D32();
  D27():
    deopt 108 [r63];
  D32():
    deopt 124 [r70];
  L79():
    closeit = ld closeit;
    check L80() else D28();
  L89():
    goto L28(r70);
  D28():
    deopt 109 [closeit];
  L80():
    closeit1 = force? closeit;
    checkMissing(closeit1);
    c8 = `as.logical`(closeit1);
    if c8 then L81() else L25();
  L25():
    goto L26(NULL);
  L26(r66):
    goto L27();
  L81():
    close = ldf close;
    check L82() else D29();
  D29():
    deopt 112 [];
  L82():
    p21 = prom<V +>{
      file16 = ld file;
      file17 = force? file16;
      checkMissing(file17);
      return file17;
    };
    r65 = dyn close(p21);
    check L83() else D30();
  D30():
    deopt 114 [r65];
  L83():
    goto L26(r65);
  }
}