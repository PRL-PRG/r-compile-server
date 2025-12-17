fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3955846966;
    st `.buildOneVignette` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3955846966(file, pkgdir, quiet, `have.makefile`, name, enc, ser_engine) {
  (reg file:*, reg pkgdir:*, reg quiet:*, reg have_makefile:*, reg name:*, reg enc:*, reg ser_engine:*) -+> V { var file:*, var pkgdir:*, var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, var `have.makefile`:*, reg have_makefile_isMissing:L, reg have_makefile_orDefault:*, var name:*, var enc:*, var ser_engine:*, reg options:cls, reg r:V, reg readRDS:cls, reg ser_engine1:*, reg ser_engine2:V, reg p:p(V +), reg r2:V, reg loadVignetteBuilder:cls, reg pkgdir1:*, reg pkgdir2:V, reg p1:p(V +), reg r4:V, reg getwd:cls, reg r5:V, reg character:cls, reg r6:V, reg message:cls, reg gettextf:cls, reg sQuote:cls, reg file1:*, reg file2:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg engine:*, reg engine1:V, reg c:L, reg engine3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg tryCatch:cls, reg engine4:*, reg engine5:V, reg c1:L, reg engine7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg dx4:cls, reg file3:*, reg file4:V, reg p6:p(V +), reg quiet1:*, reg quiet2:V, reg p7:p(V +), reg enc1:*, reg enc2:V, reg p8:p(V +), reg setwd:cls, reg startdir:*, reg startdir1:V, reg p9:p(V +), reg find_vignette_product:cls, reg name1:*, reg name2:V, reg p10:p(V +), reg engine8:*, reg engine9:V, reg p11:p(V +), reg r24:V, reg have_makefile1:*, reg have_makefile2:V, reg r25:V, reg c2:L, reg c4:V, reg vignette_is_tex:cls, reg output:*, reg output1:V, reg p12:p(V +), reg r27:V, reg c5:L, reg c6:V, reg c8:L, reg texi2pdf:cls, reg output2:*, reg output3:V, reg p13:p(V +), reg quiet3:*, reg quiet4:V, reg p14:p(V +), reg find_vignette_product1:cls, reg name3:*, reg name4:V, reg p15:p(V +), reg engine10:*, reg engine11:V, reg p16:p(V +), reg r33:V, reg p17:p(V +), reg r35:cls, reg p18:p(V +), reg r37:V, reg OK:*, reg OK1:V, reg c9:L, reg message1:cls, reg gettextf1:cls, reg sQuote1:cls, reg file5:*, reg file6:V, reg p19:p(V +), reg r39:V, reg p20:p(V +), reg r41:V, reg p21:p(V +), reg r43:V, reg message2:cls, reg gettextf2:cls, reg sQuote2:cls, reg file7:*, reg file8:V, reg p22:p(V +), reg r46:V, reg p23:p(V +), reg r48:V, reg p24:p(V +), reg r50:V, reg q:cls, reg r51:V, reg message3:cls, reg output4:*, reg output5:V, reg p25:p(V +), reg r53:V, reg sym:cls, reg base:cls, reg guard:L, reg r54:V, reg r55:V, reg output6:*, reg output7:V, reg invisible:cls, reg r56:V |
    mkenv;
    st file = file;
    st pkgdir = pkgdir;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L0(TRUE) else L0(quiet);
  L0(quiet_orDefault):
    st quiet = quiet_orDefault;
    have_makefile_isMissing = missing.0(have_makefile);
    if have_makefile_isMissing then L1(FALSE) else L1(have_makefile);
  L1(have_makefile_orDefault):
    st `have.makefile` = have_makefile_orDefault;
    st name = name;
    st enc = enc;
    st ser_engine = ser_engine;
    options = ldf options;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    r = dyn options[warn](1.0);
    check L6() else D1();
  D1():
    deopt 4 [r];
  L6():
    st op = r;
    readRDS = ldf readRDS;
    check L7() else D2();
  D2():
    deopt 7 [];
  L7():
    p = prom<V +>{
      ser_engine1 = ld ser_engine;
      ser_engine2 = force? ser_engine1;
      checkMissing(ser_engine2);
      return ser_engine2;
    };
    r2 = dyn readRDS(p);
    check L8() else D3();
  D3():
    deopt 9 [r2];
  L8():
    st engine = r2;
    loadVignetteBuilder = ldf loadVignetteBuilder;
    check L9() else D4();
  D4():
    deopt 12 [];
  L9():
    p1 = prom<V +>{
      pkgdir1 = ld pkgdir;
      pkgdir2 = force? pkgdir1;
      checkMissing(pkgdir2);
      return pkgdir2;
    };
    r4 = dyn loadVignetteBuilder(p1);
    check L10() else D5();
  D5():
    deopt 14 [r4];
  L10():
    st OK = TRUE;
    getwd = ldf getwd;
    check L11() else D6();
  D6():
    deopt 19 [];
  L11():
    r5 = dyn getwd();
    check L12() else D7();
  D7():
    deopt 20 [r5];
  L12():
    st startdir = r5;
    character = ldf character;
    check L13() else D8();
  D8():
    deopt 23 [];
  L13():
    r6 = dyn character();
    check L14() else D9();
  D9():
    deopt 24 [r6];
  L14():
    st output = r6;
    message = ldf message;
    check L15() else D10();
  D10():
    deopt 27 [];
  L15():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        sQuote = ldf sQuote;
        p2 = prom<V +>{
          file1 = ld file;
          file2 = force? file1;
          checkMissing(file2);
          return file2;
        };
        r8 = dyn sQuote(p2);
        return r8;
      };
      p4 = prom<V +>{
        engine = ld engine;
        engine1 = force? engine;
        checkMissing(engine1);
        c = `is.object`(engine1);
        if c then L1() else L2(engine1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", engine1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(engine3):
        r10 = `$`(engine3, <sym name>);
        goto L0(r10);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r12 = dyn gettextf("--- re-building %s using %s", p3, p4);
      return r12;
    };
    r14 = dyn message(p5);
    check L16() else D11();
  D11():
    deopt 29 [r14];
  L16():
    tryCatch = ldf tryCatch;
    check L17() else D12();
  D12():
    deopt 31 [];
  L17():
    p17 = prom<V +>{
      engine4 = ld engine;
      engine5 = force? engine4;
      checkMissing(engine5);
      c1 = `is.object`(engine5);
      if c1 then L3() else L4(engine5);
    L2(dx3):
      checkFun.0(dx3);
      dx4 = dx3 as cls;
      p6 = prom<V +>{
        file3 = ld file;
        file4 = force? file3;
        checkMissing(file4);
        return file4;
      };
      p7 = prom<V +>{
        quiet1 = ld quiet;
        quiet2 = force? quiet1;
        checkMissing(quiet2);
        return quiet2;
      };
      p8 = prom<V +>{
        enc1 = ld enc;
        enc2 = force? enc1;
        checkMissing(enc2);
        return enc2;
      };
      dyn dx4[, quiet, encoding](p6, p7, p8);
      setwd = ldf setwd;
      p9 = prom<V +>{
        startdir = ld startdir;
        startdir1 = force? startdir;
        checkMissing(startdir1);
        return startdir1;
      };
      dyn setwd(p9);
      find_vignette_product = ldf find_vignette_product;
      p10 = prom<V +>{
        name1 = ld name;
        name2 = force? name1;
        checkMissing(name2);
        return name2;
      };
      p11 = prom<V +>{
        engine8 = ld engine;
        engine9 = force? engine8;
        checkMissing(engine9);
        return engine9;
      };
      r24 = dyn find_vignette_product[, by, engine](p10, "weave", p11);
      st output = r24;
      have_makefile1 = ld `have.makefile`;
      have_makefile2 = force? have_makefile1;
      checkMissing(have_makefile2);
      r25 = `!`(have_makefile2);
      c2 = `as.logical`(r25);
      if c2 then L6() else L0(c2);
    L3():
      dr2 = tryDispatchBuiltin.1("$", engine5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L5() else L4(dr2);
    L4(engine7):
      r15 = `$`(engine7, <sym weave>);
      goto L2(r15);
    L0(c4):
      c8 = `as.logical`(c4);
      if c8 then L8() else L1();
    L5():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L2(dx2);
    L6():
      vignette_is_tex = ldf vignette_is_tex;
      p12 = prom<V +>{
        output = ld output;
        output1 = force? output;
        checkMissing(output1);
        return output1;
      };
      r27 = dyn vignette_is_tex(p12);
      c5 = `as.logical`(r27);
      c6 = `&&`(c2, c5);
      goto L0(c6);
    L1():
      invisible.0();
      return NULL;
    L8():
      texi2pdf = ldf texi2pdf;
      p13 = prom<V +>{
        output2 = ld output;
        output3 = force? output2;
        checkMissing(output3);
        return output3;
      };
      p14 = prom<V +>{
        quiet3 = ld quiet;
        quiet4 = force? quiet3;
        checkMissing(quiet4);
        return quiet4;
      };
      dyn texi2pdf[file, clean, quiet](p13, FALSE, p14);
      find_vignette_product1 = ldf find_vignette_product;
      p15 = prom<V +>{
        name3 = ld name;
        name4 = force? name3;
        checkMissing(name4);
        return name4;
      };
      p16 = prom<V +>{
        engine10 = ld engine;
        engine11 = force? engine10;
        checkMissing(engine11);
        return engine11;
      };
      r33 = dyn find_vignette_product1[, by, engine](p15, "texi2pdf", p16);
      st output = r33;
      invisible.0();
      return r33;
    };
    p18 = prom<V +>{
      r35 = clos inner3708401697;
      return r35;
    };
    r37 = dyn tryCatch[, error](p17, p18);
    check L18() else D13();
  D13():
    deopt 35 [r37];
  L18():
    OK = ld OK;
    check L19() else D14();
  D14():
    deopt 36 [OK];
  L19():
    OK1 = force? OK;
    checkMissing(OK1);
    c9 = `as.logical`(OK1);
    if c9 then L20() else L2();
  L2():
    message2 = ldf message;
    check L24() else D17();
  L3():
    message3 = ldf message;
    check L28() else D21();
  L20():
    message1 = ldf message;
    check L21() else D15();
  D15():
    deopt 39 [];
  D17():
    deopt 43 [];
  D21():
    deopt 53 [];
  L21():
    p21 = prom<V +>{
      gettextf1 = ldf gettextf;
      p20 = prom<V +>{
        sQuote1 = ldf sQuote;
        p19 = prom<V +>{
          file5 = ld file;
          file6 = force? file5;
          checkMissing(file6);
          return file6;
        };
        r39 = dyn sQuote1(p19);
        return r39;
      };
      r41 = dyn gettextf1("--- finished re-building %s\n", p20);
      return r41;
    };
    r43 = dyn message1(p21);
    check L22() else D16();
  L24():
    p24 = prom<V +>{
      gettextf2 = ldf gettextf;
      p23 = prom<V +>{
        sQuote2 = ldf sQuote;
        p22 = prom<V +>{
          file7 = ld file;
          file8 = force? file7;
          checkMissing(file8);
          return file8;
        };
        r46 = dyn sQuote2(p22);
        return r46;
      };
      r48 = dyn gettextf2("--- failed re-building %s\n", p23);
      return r48;
    };
    r50 = dyn message2(p24);
    check L25() else D18();
  L28():
    p25 = prom<V +>{
      output4 = ld output;
      output5 = force? output4;
      checkMissing(output5);
      return output5;
    };
    r53 = dyn message3("+-+", p25);
    check L29() else D22();
  D16():
    deopt 41 [r43];
  D18():
    deopt 45 [r50];
  D22():
    deopt 56 [r53];
  L22():
    goto L3();
  L25():
    q = ldf q;
    check L26() else D19();
  L29():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  D19():
    deopt 47 [];
  L4(r55):
    popenv;
    return r55;
  L26():
    r51 = dyn q[, status]("no", 9);
    check L27() else D20();
  L30():
    output6 = ld output;
    check L32() else D23();
  L31():
    r54 = dyn base(<sym output>);
    goto L4(r54);
  D20():
    deopt 51 [r51];
  D23():
    deopt 59 [output6];
  L27():
    goto L3();
  L32():
    output7 = force? output6;
    checkMissing(output7);
    invisible = ldf invisible in base;
    r56 = dyn invisible(output7);
    check L33() else D24();
  D24():
    deopt 62 [r56];
  L33():
    goto L4(r56);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg message:cls, reg gettextf:cls, reg file:*, reg file1:V, reg p:p(V +), reg conditionMessage:cls, reg e1:*, reg e2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V |
    mkenv;
    st e = e;
    sst OK = FALSE;
    message = ldf message;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        file = ld file;
        file1 = force? file;
        checkMissing(file1);
        return file1;
      };
      p2 = prom<V +>{
        conditionMessage = ldf conditionMessage;
        p1 = prom<V +>{
          e1 = ld e;
          e2 = force? e1;
          checkMissing(e2);
          return e2;
        };
        r2 = dyn conditionMessage(p1);
        return r2;
      };
      r4 = dyn gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s", p, p2);
      return r4;
    };
    r6 = dyn message(p3);
    check L1() else D1();
  D1():
    deopt 6 [r6];
  L1():
    popenv;
    return r6;
  }
}