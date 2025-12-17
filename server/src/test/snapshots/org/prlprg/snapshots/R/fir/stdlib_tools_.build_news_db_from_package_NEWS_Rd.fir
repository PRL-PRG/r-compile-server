fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner270641308;
    st `.build_news_db_from_package_NEWS_Rd` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner270641308(file) {
  (reg file:*) -+> V { var file:*, reg initialRdMacros:cls, reg r:V, reg prepare_Rd:cls, reg parse_Rd:cls, reg file1:*, reg file2:V, reg p:p(V +), reg macros:*, reg macros1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg _extract_news_from_Rd:cls, reg x:*, reg x1:V, reg p3:p(V +), reg r7:V, reg sprintf:cls, reg _standard_regexps:cls, reg r8:V, reg c:L, reg r10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r11:V, reg p4:p(V +), reg r13:V, reg sprintf1:cls, reg paste0:cls, reg rEnd:*, reg rEnd1:V, reg p5:p(V +), reg r15:V, reg p6:p(V +), reg reDt:*, reg reDt1:V, reg p7:p(V +), reg r18:V, reg sprintf2:cls, reg paste1:cls, reg rEnd2:*, reg rEnd3:V, reg p8:p(V +), reg r20:V, reg p9:p(V +), reg reDt2:*, reg reDt3:V, reg p10:p(V +), reg r23:V, reg db:*, reg db1:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r24:V, reg grepl:cls, reg re_v:*, reg re_v1:V, reg p11:p(V +), reg nms:*, reg nms1:V, reg p12:p(V +), reg r27:V, reg sym:cls, reg base:cls, reg guard:L, reg r28:V, reg r29:V, reg ind:*, reg ind1:V, reg all:cls, reg r30:V, reg r31:V, reg c2:L, reg warning:cls, reg gettextf:cls, reg paste2:cls, reg unique:cls, reg nms2:*, reg nms3:V, reg c3:L, reg nms5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind2:*, reg ind3:V, reg r32:V, reg __1:cls, reg r33:V, reg p13:p(V +), reg r35:V, reg p14:p(V +), reg r37:V, reg p15:p(V +), reg r39:V, reg p16:p(V +), reg r41:V, reg _make_news_db:cls, reg cbind:cls, reg ifelse:cls, reg ind4:*, reg ind5:V, reg p17:p(V +), reg sub:cls, reg re_v2:*, reg re_v3:V, reg p18:p(V +), reg nms6:*, reg nms7:V, reg p19:p(V +), reg r46:V, reg p20:p(V +), reg r48:V, reg p21:p(V +), reg ifelse1:cls, reg grepl1:cls, reg re_d1:*, reg re_d2:V, reg p22:p(V +), reg nms8:*, reg nms9:V, reg p23:p(V +), reg r52:V, reg p24:p(V +), reg sub1:cls, reg re_d3:*, reg re_d4:V, reg p25:p(V +), reg nms10:*, reg nms11:V, reg p26:p(V +), reg r56:V, reg p27:p(V +), reg ifelse2:cls, reg grepl2:cls, reg re_d5:*, reg re_d6:V, reg p28:p(V +), reg nms12:*, reg nms13:V, reg p29:p(V +), reg r60:V, reg p30:p(V +), reg sub2:cls, reg re_d7:*, reg re_d8:V, reg p31:p(V +), reg nms14:*, reg nms15:V, reg p32:p(V +), reg r64:V, reg p33:p(V +), reg r66:V, reg p34:p(V +), reg r68:V, reg p35:p(V +), reg db4:*, reg db5:V, reg c4:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r70:V, reg p36:p(V +), reg sub3:cls, reg db8:*, reg db9:V, reg c5:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r72:V, reg p37:p(V +), reg r74:V, reg p38:p(V +), reg db12:*, reg db13:V, reg c6:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r76:V, reg p39:p(V +), reg r78:V, reg p40:p(V +), reg r80:V |
    mkenv;
    st file = file;
    initialRdMacros = ldf initialRdMacros;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    r = dyn initialRdMacros();
    check L5() else D1();
  D1():
    deopt 2 [r];
  L5():
    st macros = r;
    prepare_Rd = ldf prepare_Rd;
    check L6() else D2();
  D2():
    deopt 5 [];
  L6():
    p2 = prom<V +>{
      parse_Rd = ldf parse_Rd;
      p = prom<V +>{
        file1 = ld file;
        file2 = force? file1;
        checkMissing(file2);
        return file2;
      };
      p1 = prom<V +>{
        macros = ld macros;
        macros1 = force? macros;
        checkMissing(macros1);
        return macros1;
      };
      r3 = dyn parse_Rd[, macros, encoding](p, p1, "UTF-8");
      return r3;
    };
    r5 = dyn prepare_Rd[, stages](p2, "install");
    check L7() else D3();
  D3():
    deopt 9 [r5];
  L7():
    st x = r5;
    _extract_news_from_Rd = ldf `.extract_news_from_Rd`;
    check L8() else D4();
  D4():
    deopt 12 [];
  L8():
    p3 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r7 = dyn _extract_news_from_Rd(p3);
    check L9() else D5();
  D5():
    deopt 14 [r7];
  L9():
    st db = r7;
    sprintf = ldf sprintf;
    check L10() else D6();
  D6():
    deopt 17 [];
  L10():
    p4 = prom<V +>{
      _standard_regexps = ldf `.standard_regexps`;
      r8 = dyn _standard_regexps();
      c = `is.object`(r8);
      if c then L1() else L2(r8);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", r8);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r10):
      r11 = `$`(r10, <sym valid_package_version>);
      goto L0(r11);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r13 = dyn sprintf(".*version[[:space:]]+(%s).*$", p4);
    check L11() else D7();
  D7():
    deopt 20 [r13];
  L11():
    st re_v = r13;
    st reDt = "[[:digit:]]{4}-[[:digit:]]{2}-[[:digit:]]{2}";
    st rEnd = "[[:punct:][:space:]]*$";
    sprintf1 = ldf sprintf;
    check L12() else D8();
  D8():
    deopt 29 [];
  L12():
    p6 = prom<V +>{
      paste0 = ldf paste0;
      p5 = prom<V +>{
        rEnd = ld rEnd;
        rEnd1 = force? rEnd;
        checkMissing(rEnd1);
        return rEnd1;
      };
      r15 = dyn paste0("^.*(%s)", p5);
      return r15;
    };
    p7 = prom<V +>{
      reDt = ld reDt;
      reDt1 = force? reDt;
      checkMissing(reDt1);
      return reDt1;
    };
    r18 = dyn sprintf1(p6, p7);
    check L13() else D9();
  D9():
    deopt 32 [r18];
  L13():
    st re_d1 = r18;
    sprintf2 = ldf sprintf;
    check L14() else D10();
  D10():
    deopt 35 [];
  L14():
    p9 = prom<V +>{
      paste1 = ldf paste0;
      p8 = prom<V +>{
        rEnd2 = ld rEnd;
        rEnd3 = force? rEnd2;
        checkMissing(rEnd3);
        return rEnd3;
      };
      r20 = dyn paste1("^.*\\((%s)[[:punct:]] .*\\)", p8);
      return r20;
    };
    p10 = prom<V +>{
      reDt2 = ld reDt;
      reDt3 = force? reDt2;
      checkMissing(reDt3);
      return reDt3;
    };
    r23 = dyn sprintf2(p9, p10);
    check L15() else D11();
  D11():
    deopt 38 [r23];
  L15():
    st re_d2 = r23;
    db = ld db;
    check L16() else D12();
  D12():
    deopt 40 [db];
  L16():
    db1 = force? db;
    checkMissing(db1);
    c1 = `is.object`(db1);
    if c1 then L17() else L18();
  L0(dx3):
    st nms = dx3;
    grepl = ldf grepl;
    check L20() else D13();
  L17():
    dr2 = tryDispatchBuiltin.1("[", db1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L19() else L18();
  L18():
    __ = ldf `[` in base;
    r24 = dyn __(db1, <missing>, 1);
    goto L0(r24);
  D13():
    deopt 48 [];
  L19():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx2);
  L20():
    p11 = prom<V +>{
      re_v = ld re_v;
      re_v1 = force? re_v;
      checkMissing(re_v1);
      return re_v1;
    };
    p12 = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    r27 = dyn grepl[, , `ignore.case`](p11, p12, TRUE);
    check L21() else D14();
  D14():
    deopt 53 [r27];
  L21():
    st ind = r27;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L1(r29):
    r31 = `!`(r29);
    c2 = `as.logical`(r31);
    if c2 then L26() else L2();
  L22():
    ind = ld ind;
    check L24() else D15();
  L23():
    r28 = dyn base(<sym ind>);
    goto L1(r28);
  D15():
    deopt 57 [ind];
  L2():
    goto L3();
  L3():
    _make_news_db = ldf `.make_news_db`;
    check L30() else D19();
  L24():
    ind1 = force? ind;
    checkMissing(ind1);
    all = ldf all in base;
    r30 = dyn all(ind1);
    check L25() else D16();
  L26():
    warning = ldf warning;
    check L27() else D17();
  D16():
    deopt 60 [r30];
  D17():
    deopt 63 [];
  D19():
    deopt 73 [];
  L25():
    goto L1(r30);
  L27():
    p16 = prom<V +>{
      gettextf = ldf gettextf;
      p15 = prom<V +>{
        paste2 = ldf paste0;
        p14 = prom<V +>{
          unique = ldf unique;
          p13 = prom<V +>{
            nms2 = ld nms;
            nms3 = force? nms2;
            checkMissing(nms3);
            c3 = `is.object`(nms3);
            if c3 then L1() else L2(nms3);
          L0(dx5):
            return dx5;
          L1():
            dr4 = tryDispatchBuiltin.1("[", nms3);
            dc2 = getTryDispatchBuiltinDispatched(dr4);
            if dc2 then L3() else L2(dr4);
          L2(nms5):
            ind2 = ld ind;
            ind3 = force? ind2;
            checkMissing(ind3);
            r32 = `!`(ind3);
            __1 = ldf `[` in base;
            r33 = dyn __1(nms5, r32);
            goto L0(r33);
          L3():
            dx4 = getTryDispatchBuiltinValue(dr4);
            goto L0(dx4);
          };
          r35 = dyn unique(p13);
          return r35;
        };
        r37 = dyn paste2[, , collapse]("  ", p14, "\n");
        return r37;
      };
      r39 = dyn gettextf("Cannot extract version info from the following section titles:\n%s", p15);
      return r39;
    };
    r41 = dyn warning[, domain, `call.`](p16, NA_LGL, FALSE);
    check L28() else D18();
  L30():
    p40 = prom<V +>{
      cbind = ldf cbind;
      p21 = prom<V +>{
        ifelse = ldf ifelse;
        p17 = prom<V +>{
          ind4 = ld ind;
          ind5 = force? ind4;
          checkMissing(ind5);
          return ind5;
        };
        p20 = prom<V +>{
          sub = ldf sub;
          p18 = prom<V +>{
            re_v2 = ld re_v;
            re_v3 = force? re_v2;
            checkMissing(re_v3);
            return re_v3;
          };
          p19 = prom<V +>{
            nms6 = ld nms;
            nms7 = force? nms6;
            checkMissing(nms7);
            return nms7;
          };
          r46 = dyn sub[, , , `ignore.case`](p18, "\\1", p19, TRUE);
          return r46;
        };
        r48 = dyn ifelse(p17, p20, NA_STR);
        return r48;
      };
      p35 = prom<V +>{
        ifelse1 = ldf ifelse;
        p24 = prom<V +>{
          grepl1 = ldf grepl;
          p22 = prom<V +>{
            re_d1 = ld re_d1;
            re_d2 = force? re_d1;
            checkMissing(re_d2);
            return re_d2;
          };
          p23 = prom<V +>{
            nms8 = ld nms;
            nms9 = force? nms8;
            checkMissing(nms9);
            return nms9;
          };
          r52 = dyn grepl1[, , perl](p22, p23, TRUE);
          return r52;
        };
        p27 = prom<V +>{
          sub1 = ldf sub;
          p25 = prom<V +>{
            re_d3 = ld re_d1;
            re_d4 = force? re_d3;
            checkMissing(re_d4);
            return re_d4;
          };
          p26 = prom<V +>{
            nms10 = ld nms;
            nms11 = force? nms10;
            checkMissing(nms11);
            return nms11;
          };
          r56 = dyn sub1[, , , perl](p25, "\\1", p26, TRUE);
          return r56;
        };
        p34 = prom<V +>{
          ifelse2 = ldf ifelse;
          p30 = prom<V +>{
            grepl2 = ldf grepl;
            p28 = prom<V +>{
              re_d5 = ld re_d2;
              re_d6 = force? re_d5;
              checkMissing(re_d6);
              return re_d6;
            };
            p29 = prom<V +>{
              nms12 = ld nms;
              nms13 = force? nms12;
              checkMissing(nms13);
              return nms13;
            };
            r60 = dyn grepl2[, , perl](p28, p29, TRUE);
            return r60;
          };
          p33 = prom<V +>{
            sub2 = ldf sub;
            p31 = prom<V +>{
              re_d7 = ld re_d2;
              re_d8 = force? re_d7;
              checkMissing(re_d8);
              return re_d8;
            };
            p32 = prom<V +>{
              nms14 = ld nms;
              nms15 = force? nms14;
              checkMissing(nms15);
              return nms15;
            };
            r64 = dyn sub2[, , , perl](p31, "\\1", p32, TRUE);
            return r64;
          };
          r66 = dyn ifelse2(p30, p33, NA_STR);
          return r66;
        };
        r68 = dyn ifelse1(p24, p27, p34);
        return r68;
      };
      p36 = prom<V +>{
        db4 = ld db;
        db5 = force? db4;
        checkMissing(db5);
        c4 = `is.object`(db5);
        if c4 then L1() else L2();
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[", db5);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2();
      L2():
        __2 = ldf `[` in base;
        r70 = dyn __2(db5, <missing>, 2);
        goto L0(r70);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p38 = prom<V +>{
        sub3 = ldf sub;
        p37 = prom<V +>{
          db8 = ld db;
          db9 = force? db8;
          checkMissing(db9);
          c5 = `is.object`(db9);
          if c5 then L1() else L2();
        L0(dx9):
          return dx9;
        L1():
          dr8 = tryDispatchBuiltin.1("[", db9);
          dc4 = getTryDispatchBuiltinDispatched(dr8);
          if dc4 then L3() else L2();
        L2():
          __3 = ldf `[` in base;
          r72 = dyn __3(db9, <missing>, 3);
          goto L0(r72);
        L3():
          dx8 = getTryDispatchBuiltinValue(dr8);
          goto L0(dx8);
        };
        r74 = dyn sub3("\n*$", "", p37);
        return r74;
      };
      p39 = prom<V +>{
        db12 = ld db;
        db13 = force? db12;
        checkMissing(db13);
        c6 = `is.object`(db13);
        if c6 then L1() else L2();
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("[", db13);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2();
      L2():
        __4 = ldf `[` in base;
        r76 = dyn __4(db13, <missing>, 4);
        goto L0(r76);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      r78 = dyn cbind[, , , Text, HTML](p21, p35, p36, p38, p39);
      return r78;
    };
    r80 = dyn _make_news_db(p40, NULL, "news_db_from_Rd");
    check L31() else D20();
  D18():
    deopt 69 [r41];
  D20():
    deopt 77 [r80];
  L28():
    goto L3();
  L31():
    popenv;
    return r80;
  }
}