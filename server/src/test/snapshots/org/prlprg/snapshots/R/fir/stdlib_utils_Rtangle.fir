fun main() {
  () -+> V { reg r:cls, reg system_file:cls, reg nmRnw:*, reg nmRnw1:V, reg p:p(V +), reg r2:V, reg Stangle:cls, reg exfile:*, reg exfile1:V, reg p1:p(V +), reg r4:V, reg sub:cls, reg nmRnw2:*, reg nmRnw3:V, reg p2:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg interactive:cls, reg r9:V, reg c:L, reg file_show:cls, reg r10:V, reg file_rename:cls, reg r12:V, reg r13:cls, reg Stangle1:cls, reg exfile2:*, reg exfile3:V, reg p3:p(V +), reg my_Ann:*, reg my_Ann1:V, reg p4:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg interactive1:cls, reg r19:V, reg c1:L, reg file_show1:cls, reg r20:V, reg file_rename1:cls, reg r22:V, reg Stangle2:cls, reg exfile4:*, reg exfile5:V, reg p5:p(V +), reg my_Ann2:*, reg my_Ann3:V, reg p6:p(V +), reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg interactive2:cls, reg r28:V, reg c2:L, reg file_show2:cls, reg r29:V, reg file_rename2:cls, reg r31:V |
    mkenv;
    r = clos inner2708337952;
    st Rtangle = r;
    st nmRnw = "example-1.Rnw";
    system_file = ldf `system.file`;
    check L9() else D0();
  D0():
    deopt 7 [];
  L9():
    p = prom<V +>{
      nmRnw = ld nmRnw;
      nmRnw1 = force? nmRnw;
      checkMissing(nmRnw1);
      return nmRnw1;
    };
    r2 = dyn system_file[, , package]("Sweave", p, "utils");
    check L10() else D1();
  D1():
    deopt 12 [r2];
  L10():
    st exfile = r2;
    Stangle = ldf Stangle;
    check L11() else D2();
  D2():
    deopt 15 [];
  L11():
    p1 = prom<V +>{
      exfile = ld exfile;
      exfile1 = force? exfile;
      checkMissing(exfile1);
      return exfile1;
    };
    r4 = dyn Stangle(p1);
    check L12() else D3();
  D3():
    deopt 17 [r4];
  L12():
    sub = ldf sub;
    check L13() else D4();
  D4():
    deopt 19 [];
  L13():
    p2 = prom<V +>{
      nmRnw2 = ld nmRnw;
      nmRnw3 = force? nmRnw2;
      checkMissing(nmRnw3);
      return nmRnw3;
    };
    r6 = dyn sub("Rnw$", "R", p2);
    check L14() else D5();
  D5():
    deopt 23 [r6];
  L14():
    st nmR = r6;
    sym = ldf interactive;
    base = ldf interactive in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r8):
    c = `as.logical`(r8);
    if c then L18() else L1();
  L15():
    interactive = ldf interactive in base;
    r9 = dyn interactive();
    check L17() else D6();
  L16():
    r7 = dyn base();
    goto L0(r7);
  D6():
    deopt 28 [r9];
  L1():
    goto L2();
  L2():
    file_rename = ldf `file.rename`;
    check L22() else D9();
  L17():
    goto L0(r9);
  L18():
    file_show = ldf `file.show`;
    check L19() else D7();
  D7():
    deopt 30 [];
  D9():
    deopt 36 [];
  L19():
    r10 = dyn file_show("example-1.R");
    check L20() else D8();
  L22():
    r12 = dyn file_rename("example-1.R", "example-1_def.R");
    check L23() else D10();
  D8():
    deopt 32 [r10];
  D10():
    deopt 39 [r12];
  L20():
    goto L2();
  L23():
    r13 = clos inner971306288;
    st `my.Ann` = r13;
    Stangle1 = ldf Stangle;
    check L24() else D11();
  D11():
    deopt 44 [];
  L24():
    p3 = prom<V +>{
      exfile2 = ld exfile;
      exfile3 = force? exfile2;
      checkMissing(exfile3);
      return exfile3;
    };
    p4 = prom<V +>{
      my_Ann = ld `my.Ann`;
      my_Ann1 = force? my_Ann;
      checkMissing(my_Ann1);
      return my_Ann1;
    };
    r16 = dyn Stangle1[, annotate](p3, p4);
    check L25() else D12();
  D12():
    deopt 48 [r16];
  L25():
    sym1 = ldf interactive;
    base1 = ldf interactive in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L3(r18):
    c1 = `as.logical`(r18);
    if c1 then L29() else L4();
  L26():
    interactive1 = ldf interactive in base;
    r19 = dyn interactive1();
    check L28() else D13();
  L27():
    r17 = dyn base1();
    goto L3(r17);
  D13():
    deopt 52 [r19];
  L4():
    goto L5();
  L5():
    file_rename1 = ldf `file.rename`;
    check L33() else D16();
  L28():
    goto L3(r19);
  L29():
    file_show1 = ldf `file.show`;
    check L30() else D14();
  D14():
    deopt 54 [];
  D16():
    deopt 60 [];
  L30():
    r20 = dyn file_show1("example-1.R");
    check L31() else D15();
  L33():
    r22 = dyn file_rename1("example-1.R", "example-1_myA.R");
    check L34() else D17();
  D15():
    deopt 56 [r20];
  D17():
    deopt 63 [r22];
  L31():
    goto L5();
  L34():
    Stangle2 = ldf Stangle;
    check L35() else D18();
  D18():
    deopt 65 [];
  L35():
    p5 = prom<V +>{
      exfile4 = ld exfile;
      exfile5 = force? exfile4;
      checkMissing(exfile5);
      return exfile5;
    };
    p6 = prom<V +>{
      my_Ann2 = ld `my.Ann`;
      my_Ann3 = force? my_Ann2;
      checkMissing(my_Ann3);
      return my_Ann3;
    };
    r25 = dyn Stangle2[, annotate, `drop.evalFALSE`](p5, p6, TRUE);
    check L36() else D19();
  D19():
    deopt 71 [r25];
  L36():
    sym2 = ldf interactive;
    base2 = ldf interactive in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L6(r27):
    c2 = `as.logical`(r27);
    if c2 then L40() else L7();
  L37():
    interactive2 = ldf interactive in base;
    r28 = dyn interactive2();
    check L39() else D20();
  L38():
    r26 = dyn base2();
    goto L6(r26);
  D20():
    deopt 75 [r28];
  L7():
    goto L8();
  L8():
    file_rename2 = ldf `file.rename`;
    check L44() else D23();
  L39():
    goto L6(r28);
  L40():
    file_show2 = ldf `file.show`;
    check L41() else D21();
  D21():
    deopt 77 [];
  D23():
    deopt 83 [];
  L41():
    r29 = dyn file_show2("example-1.R");
    check L42() else D22();
  L44():
    r31 = dyn file_rename2("example-1.R", "example-1_myA-noF.R");
    check L45() else D24();
  D22():
    deopt 79 [r29];
  D24():
    deopt 86 [r31];
  L42():
    goto L8();
  L45():
    popenv;
    return r31;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg RtangleSetup:*, reg RtangleSetup1:V, reg RtangleRuncode:*, reg RtangleRuncode1:V, reg RtangleWritedoc:*, reg RtangleWritedoc1:V, reg RtangleFinish:*, reg RtangleFinish1:V, reg RweaveLatexOptions:*, reg RweaveLatexOptions1:V, reg list:cls, reg r2:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    RtangleSetup = ld RtangleSetup;
    check L3() else D0();
  L2():
    r = dyn base[setup, runcode, writedoc, finish, checkopts](<sym RtangleSetup>, <sym RtangleRuncode>, <sym RtangleWritedoc>, <sym RtangleFinish>, <sym RweaveLatexOptions>);
    goto L0(r);
  D0():
    deopt 2 [RtangleSetup];
  L3():
    RtangleSetup1 = force? RtangleSetup;
    checkMissing(RtangleSetup1);
    RtangleRuncode = ld RtangleRuncode;
    check L4() else D1();
  D1():
    deopt 5 [RtangleRuncode];
  L4():
    RtangleRuncode1 = force? RtangleRuncode;
    checkMissing(RtangleRuncode1);
    RtangleWritedoc = ld RtangleWritedoc;
    check L5() else D2();
  D2():
    deopt 8 [RtangleWritedoc];
  L5():
    RtangleWritedoc1 = force? RtangleWritedoc;
    checkMissing(RtangleWritedoc1);
    RtangleFinish = ld RtangleFinish;
    check L6() else D3();
  D3():
    deopt 11 [RtangleFinish];
  L6():
    RtangleFinish1 = force? RtangleFinish;
    checkMissing(RtangleFinish1);
    RweaveLatexOptions = ld RweaveLatexOptions;
    check L7() else D4();
  D4():
    deopt 14 [RweaveLatexOptions];
  L7():
    RweaveLatexOptions1 = force? RweaveLatexOptions;
    checkMissing(RweaveLatexOptions1);
    list = ldf list in base;
    r2 = dyn list(RtangleSetup1, RtangleRuncode1, RtangleWritedoc1, RtangleFinish1, RweaveLatexOptions1);
    check L8() else D5();
  D5():
    deopt 18 [r2];
  L8():
    goto L0(r2);
  }
}
fun inner971306288(options, chunk, output) {
  (reg options:*, reg chunk:*, reg output:*) -+> V { var options:*, var chunk:*, var output:*, reg cat:cls, reg options1:*, reg options2:V, reg c:L, reg options4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg options5:*, reg options6:V, reg c1:L, reg options8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg c2:V, reg r5:V, reg c3:L, reg ol:*, reg ol1:V, reg _RtangleCodeLabel:cls, reg chunk1:*, reg chunk2:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg options9:*, reg options10:V, reg c4:L, reg options12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r9:V, reg r10:V, reg c5:L, reg p3:p(V +), reg output1:*, reg output2:V, reg p4:p(V +), reg r13:V |
    mkenv;
    st options = options;
    st chunk = chunk;
    st output = output;
    cat = ldf cat;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      options1 = ld options;
      options2 = force? options1;
      checkMissing(options2);
      c = `is.object`(options2);
      if c then L1() else L2(options2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", options2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(options4):
      r = `$`(options4, <sym chunknr>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      sym = ldf `is.null`;
      base = ldf `is.null` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r3):
      r5 = `!`(r3);
      c3 = `as.logical`(r5);
      if c3 then L8() else L1();
    L2():
      options5 = ld options;
      options6 = force? options5;
      checkMissing(options6);
      c1 = `is.object`(options6);
      if c1 then L5() else L6(options6);
    L3():
      r2 = dyn base(<lang `<-`(ol, `$`(options, label))>);
      goto L0(r2);
    L1():
      _RtangleCodeLabel = ldf `.RtangleCodeLabel`;
      p1 = prom<V +>{
        chunk1 = ld chunk;
        chunk2 = force? chunk1;
        checkMissing(chunk2);
        return chunk2;
      };
      r7 = dyn _RtangleCodeLabel(p1);
      return r7;
    L4(dx3):
      st ol = dx3;
      c2 = `==`(dx3, NULL);
      goto L0(c2);
    L5():
      dr2 = tryDispatchBuiltin.1("$", options6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(options8):
      r4 = `$`(options8, <sym label>);
      goto L4(r4);
    L8():
      ol = ld ol;
      ol1 = force? ol;
      checkMissing(ol1);
      return ol1;
    L7():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L4(dx2);
    };
    p3 = prom<V +>{
      options9 = ld options;
      options10 = force? options9;
      checkMissing(options10);
      c4 = `is.object`(options10);
      if c4 then L2() else L3(options10);
    L1(dx5):
      r10 = `!`(dx5);
      c5 = `as.logical`(r10);
      if c5 then L5() else L0();
    L2():
      dr4 = tryDispatchBuiltin.1("$", options10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(options12):
      r9 = `$`(options12, <sym eval>);
      goto L1(r9);
    L0():
      invisible.0();
      return NULL;
    L4():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    L5():
      return " (eval = FALSE)";
    };
    p4 = prom<V +>{
      output1 = ld output;
      output2 = force? output1;
      checkMissing(output2);
      return output2;
    };
    r13 = dyn cat[, , , , , , file, sep]("### chunk #", p, ": ", p2, p3, "\n", p4, "");
    check L1() else D1();
  D1():
    deopt 12 [r13];
  L1():
    popenv;
    return r13;
  }
}