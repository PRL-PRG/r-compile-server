fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2201624909;
    st CRAN_package_reverse_dependencies_and_views = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2201624909(packages) {
  (reg packages:*) -+> V { var packages:*, reg getOption:cls, reg r:V, reg __:cls, reg r1:V, reg r2:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg list:cls, reg r5:V, reg p:p(V +), reg repos:*, reg repos1:V, reg p1:p(V +), reg r8:V, reg read_CRAN_object:cls, reg CRAN_baseurl_for_src_area:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p3:p(V +), reg mapply:cls, reg cbind:*, reg cbind1:V, reg p4:p(V +), reg lapply:cls, reg v:*, reg v1:V, reg p5:p(V +), reg r15:cls, reg p6:p(V +), reg r17:V, reg p7:p(V +), reg vapply:cls, reg v2:*, reg v3:V, reg p8:p(V +), reg __1:*, reg __2:V, reg p9:p(V +), reg r21:V, reg p10:p(V +), reg r23:V, reg p11:p(V +), reg r25:V, reg split:cls, reg v4:*, reg v5:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __3:cls, reg r26:V, reg p12:p(V +), reg v8:*, reg v9:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __4:cls, reg r28:V, reg p13:p(V +), reg r30:V, reg package_dependencies:cls, reg packages1:*, reg packages2:V, reg p14:p(V +), reg a:*, reg a1:V, reg p15:p(V +), reg r33:V, reg package_dependencies1:cls, reg packages3:*, reg packages4:V, reg p16:p(V +), reg a2:*, reg a3:V, reg p17:p(V +), reg r36:V, reg package_dependencies2:cls, reg packages5:*, reg packages6:V, reg p18:p(V +), reg a4:*, reg a5:V, reg p19:p(V +), reg r39:V, reg unique:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r40:V, reg r41:V, reg unlist:cls, reg r42:*, reg r43:V, reg p20:p(V +), reg r45:V, reg unlist1:cls, reg rr:*, reg rr1:V, reg p21:p(V +), reg r47:V, reg unlist2:cls, reg rrs:*, reg rrs1:V, reg p22:p(V +), reg r49:V, reg c2:cls, reg r50:V, reg p23:p(V +), reg r52:V, reg expansions:*, reg expansions1:V, reg l:*, reg names__:cls, reg r53:V, reg _in_:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r54:V, reg r55:V, reg repos2:*, reg repos3:V, reg names:cls, reg r56:V, reg p24:p(V +), reg r58:V, reg c3:L, reg startsWith:cls, reg a6:*, reg a7:V, reg c4:L, reg a9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r59:V, reg a12:V, reg r60:V, reg expansions2:*, reg expansions3:V, reg a13:*, reg a14:V, reg c5:L, reg a17:V, reg dr6:V, reg dc3:L, reg dx6:V, reg a20:V, reg dx7:V, reg __5:cls, reg r61:V, reg match:cls, reg r62:V, reg __6:cls, reg r63:V, reg p25:p(V +), reg repos4:*, reg repos5:V, reg c6:L, reg repos7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __7:cls, reg r65:V, reg p26:p(V +), reg r67:V, reg r68:V, reg paste0:cls, reg expansions4:*, reg expansions5:V, reg c7:L, reg expansions7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ind:*, reg ind1:V, reg __8:cls, reg r69:V, reg p27:p(V +), reg r71:V, reg l1:*, reg c8:L, reg r73:V, reg l3:*, reg dr12:V, reg dc6:L, reg dx12:V, reg r75:V, reg dx13:V, reg ind2:*, reg ind3:V, reg ___:cls, reg r76:V, reg CRAN_Rd_xref_reverse_dependencies:cls, reg packages7:*, reg packages8:V, reg p28:p(V +), reg r79:V, reg r80:cls, reg lapply1:cls, reg packages9:*, reg packages10:V, reg p29:p(V +), reg r82:cls, reg p30:p(V +), reg r84:V, reg as_data_frame:cls, reg do_call1:cls, reg rbind2:*, reg rbind3:V, reg p31:p(V +), reg y:*, reg y1:V, reg p32:p(V +), reg r87:V, reg p33:p(V +), reg r89:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r90:V, reg r91:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r92:V, reg r93:V, reg y2:*, reg y3:V, reg class:cls, reg r94:V, reg c9:cls, reg r95:V, reg l4:*, reg class__:cls, reg r96:V, reg y4:*, reg y5:V |
    mkenv;
    st packages = packages;
    getOption = ldf getOption;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    r = dyn getOption("repos");
    check L6() else D1();
  D1():
    deopt 3 [r];
  L6():
    st repos = r;
    __ = ldf `::`;
    check L7() else D2();
  D2():
    deopt 6 [];
  L7():
    r1 = dyn __("utils", "available.packages");
    check L8() else D3();
  D3():
    deopt 9 [r1];
  L8():
    checkFun.0(r1);
    r2 = r1 as cls;
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      list = ldf list in base;
      r5 = dyn list();
      goto L0(r5);
    L2():
      r3 = dyn base();
      goto L0(r3);
    };
    p1 = prom<V +>{
      repos = ld repos;
      repos1 = force? repos;
      checkMissing(repos1);
      return repos1;
    };
    r8 = dyn r2[filters, repos](p, p1);
    check L9() else D4();
  D4():
    deopt 15 [r8];
  L9():
    st a = r8;
    read_CRAN_object = ldf read_CRAN_object;
    check L10() else D5();
  D5():
    deopt 18 [];
  L10():
    p2 = prom<V +>{
      CRAN_baseurl_for_src_area = ldf CRAN_baseurl_for_src_area;
      r9 = dyn CRAN_baseurl_for_src_area();
      return r9;
    };
    r11 = dyn read_CRAN_object(p2, "src/contrib/Views.rds");
    check L11() else D6();
  D6():
    deopt 21 [r11];
  L11():
    st v = r11;
    do_call = ldf `do.call`;
    check L12() else D7();
  D7():
    deopt 24 [];
  L12():
    p3 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p11 = prom<V +>{
      mapply = ldf mapply;
      p4 = prom<V +>{
        cbind = ld cbind;
        cbind1 = force? cbind;
        checkMissing(cbind1);
        return cbind1;
      };
      p7 = prom<V +>{
        lapply = ldf lapply;
        p5 = prom<V +>{
          v = ld v;
          v1 = force? v;
          checkMissing(v1);
          return v1;
        };
        p6 = prom<V +>{
          r15 = clos inner3708401697;
          return r15;
        };
        r17 = dyn lapply(p5, p6);
        return r17;
      };
      p10 = prom<V +>{
        vapply = ldf vapply;
        p8 = prom<V +>{
          v2 = ld v;
          v3 = force? v2;
          checkMissing(v3);
          return v3;
        };
        p9 = prom<V +>{
          __1 = ld `[[`;
          __2 = force? __1;
          checkMissing(__2);
          return __2;
        };
        r21 = dyn vapply[, , , `FUN.VALUE`](p8, p9, "name", "");
        return r21;
      };
      r23 = dyn mapply[, Package, View](p4, p7, p10);
      return r23;
    };
    r25 = dyn do_call(p3, p11);
    check L13() else D8();
  D8():
    deopt 27 [r25];
  L13():
    st v = r25;
    split = ldf split;
    check L14() else D9();
  D9():
    deopt 30 [];
  L14():
    p12 = prom<V +>{
      v4 = ld v;
      v5 = force? v4;
      checkMissing(v5);
      c = `is.object`(v5);
      if c then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", v5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r26 = dyn __3(v5, <missing>, 2);
      goto L0(r26);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p13 = prom<V +>{
      v8 = ld v;
      v9 = force? v8;
      checkMissing(v9);
      c1 = `is.object`(v9);
      if c1 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", v9);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __4 = ldf `[` in base;
      r28 = dyn __4(v9, <missing>, 1);
      goto L0(r28);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r30 = dyn split(p12, p13);
    check L15() else D10();
  D10():
    deopt 33 [r30];
  L15():
    st v = r30;
    package_dependencies = ldf package_dependencies;
    check L16() else D11();
  D11():
    deopt 36 [];
  L16():
    p14 = prom<V +>{
      packages1 = ld packages;
      packages2 = force? packages1;
      checkMissing(packages2);
      return packages2;
    };
    p15 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    r33 = dyn package_dependencies[, , reverse](p14, p15, TRUE);
    check L17() else D12();
  D12():
    deopt 41 [r33];
  L17():
    st r = r33;
    package_dependencies1 = ldf package_dependencies;
    check L18() else D13();
  D13():
    deopt 44 [];
  L18():
    p16 = prom<V +>{
      packages3 = ld packages;
      packages4 = force? packages3;
      checkMissing(packages4);
      return packages4;
    };
    p17 = prom<V +>{
      a2 = ld a;
      a3 = force? a2;
      checkMissing(a3);
      return a3;
    };
    r36 = dyn package_dependencies1[, , reverse, recursive](p16, p17, TRUE, TRUE);
    check L19() else D14();
  D14():
    deopt 51 [r36];
  L19():
    st rr = r36;
    package_dependencies2 = ldf package_dependencies;
    check L20() else D15();
  D15():
    deopt 54 [];
  L20():
    p18 = prom<V +>{
      packages5 = ld packages;
      packages6 = force? packages5;
      checkMissing(packages6);
      return packages6;
    };
    p19 = prom<V +>{
      a4 = ld a;
      a5 = force? a4;
      checkMissing(a5);
      return a5;
    };
    r39 = dyn package_dependencies2[, , , reverse, recursive](p18, p19, "Suggests", TRUE, "strong");
    check L21() else D16();
  D16():
    deopt 62 [r39];
  L21():
    st rrs = r39;
    unique = ldf unique;
    check L22() else D17();
  D17():
    deopt 65 [];
  L22():
    p23 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      unlist = ldf unlist;
      p20 = prom<V +>{
        r42 = ld r;
        r43 = force? r42;
        checkMissing(r43);
        return r43;
      };
      r45 = dyn unlist[, `use.names`](p20, FALSE);
      unlist1 = ldf unlist;
      p21 = prom<V +>{
        rr = ld rr;
        rr1 = force? rr;
        checkMissing(rr1);
        return rr1;
      };
      r47 = dyn unlist1[, `use.names`](p21, FALSE);
      unlist2 = ldf unlist;
      p22 = prom<V +>{
        rrs = ld rrs;
        rrs1 = force? rrs;
        checkMissing(rrs1);
        return rrs1;
      };
      r49 = dyn unlist2[, `use.names`](p22, FALSE);
      c2 = ldf c in base;
      r50 = dyn c2(r45, r47, r49);
      goto L0(r50);
    L2():
      r40 = dyn base1(<lang unlist(r, use.names=FALSE)>, <lang unlist(rr, use.names=FALSE)>, <lang unlist(rrs, use.names=FALSE)>);
      goto L0(r40);
    };
    r52 = dyn unique(p23);
    check L23() else D18();
  D18():
    deopt 67 [r52];
  L23():
    st expansions = r52;
    expansions = ld expansions;
    check L24() else D19();
  D19():
    deopt 69 [expansions];
  L24():
    expansions1 = force? expansions;
    checkMissing(expansions1);
    l = ld expansions;
    names__ = ldf `names<-`;
    check L25() else D20();
  D20():
    deopt 72 [expansions1, l, expansions1];
  L25():
    r53 = dyn names__(l, NULL, expansions1);
    check L26() else D21();
  D21():
    deopt 74 [expansions1, r53];
  L26():
    st expansions = r53;
    _in_ = ldf `%in%`;
    check L27() else D22();
  D22():
    deopt 77 [];
  L27():
    p24 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r55):
      return r55;
    L1():
      repos2 = ld repos;
      repos3 = force? repos2;
      checkMissing(repos3);
      names = ldf names in base;
      r56 = dyn names(repos3);
      goto L0(r56);
    L2():
      r54 = dyn base2(<sym repos>);
      goto L0(r54);
    };
    r58 = dyn _in_("CRAN", p24);
    check L28() else D23();
  D23():
    deopt 80 [r58];
  L28():
    c3 = `as.logical`(r58);
    if c3 then L29() else L0();
  L0():
    goto L2();
  L2():
    CRAN_Rd_xref_reverse_dependencies = ldf CRAN_Rd_xref_reverse_dependencies;
    check L39() else D29();
  L29():
    startsWith = ldf startsWith;
    check L30() else D24();
  D24():
    deopt 82 [];
  D29():
    deopt 101 [];
  L30():
    p25 = prom<V +>{
      a6 = ld a;
      a7 = force? a6;
      checkMissing(a7);
      c4 = `is.object`(a7);
      if c4 then L3() else L4(a7);
    L0(dx5):
      return dx5;
    L3():
      dr4 = tryDispatchBuiltin.1("[", a7);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L5() else L4(dr4);
    L4(a9):
      sym3 = ldf match;
      base3 = ldf match in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L6() else L7();
    L1(a12, r60):
      __6 = ldf `[` in base;
      r63 = dyn __6(a12, r60, "Repository");
      goto L0(r63);
    L5():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    L6():
      expansions2 = ld expansions;
      expansions3 = force? expansions2;
      checkMissing(expansions3);
      a13 = ld a;
      a14 = force? a13;
      checkMissing(a14);
      c5 = `is.object`(a14);
      if c5 then L8() else L9(a9);
    L7():
      r59 = dyn base3(<sym expansions>, <lang `[`(a, , "Package")>);
      goto L1(a9, r59);
    L2(a20, dx7):
      match = ldf match in base;
      r62 = dyn match(expansions3, dx7, NA_INT, NULL);
      goto L1(a20, r62);
    L8():
      dr6 = tryDispatchBuiltin.1("[", a14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L10() else L9(a9);
    L9(a17):
      __5 = ldf `[` in base;
      r61 = dyn __5(a14, <missing>, "Package");
      goto L2(a17, r61);
    L10():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L2(a9, dx6);
    };
    p26 = prom<V +>{
      repos4 = ld repos;
      repos5 = force? repos4;
      checkMissing(repos5);
      c6 = `is.object`(repos5);
      if c6 then L1() else L2(repos5);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", repos5);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(repos7):
      __7 = ldf `[` in base;
      r65 = dyn __7(repos7, "CRAN");
      goto L0(r65);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r67 = dyn startsWith(p25, p26);
    check L31() else D25();
  L39():
    p28 = prom<V +>{
      packages7 = ld packages;
      packages8 = force? packages7;
      checkMissing(packages8);
      return packages8;
    };
    r79 = dyn CRAN_Rd_xref_reverse_dependencies(p28);
    check L40() else D30();
  D25():
    deopt 85 [r67];
  D30():
    deopt 103 [r79];
  L31():
    r68 = `!`(r67);
    st ind = r68;
    paste0 = ldf paste0;
    check L32() else D26();
  L40():
    st rxrefs = r79;
    r80 = clos inner2501545716;
    st fmt = r80;
    lapply1 = ldf lapply;
    check L41() else D31();
  D26():
    deopt 89 [];
  D31():
    deopt 109 [];
  L32():
    p27 = prom<V +>{
      expansions4 = ld expansions;
      expansions5 = force? expansions4;
      checkMissing(expansions5);
      c7 = `is.object`(expansions5);
      if c7 then L1() else L2(expansions5);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", expansions5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(expansions7):
      ind = ld ind;
      ind1 = force? ind;
      __8 = ldf `[` in base;
      r69 = dyn __8(expansions7, ind1);
      goto L0(r69);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r71 = dyn paste0(p27, "*");
    check L33() else D27();
  L41():
    p29 = prom<V +>{
      packages9 = ld packages;
      packages10 = force? packages9;
      checkMissing(packages10);
      return packages10;
    };
    p30 = prom<V +>{
      r82 = clos inner3913899244;
      return r82;
    };
    r84 = dyn lapply1(p29, p30);
    check L42() else D32();
  D27():
    deopt 92 [r71];
  D32():
    deopt 112 [r84];
  L33():
    l1 = ld expansions;
    c8 = `is.object`(l1);
    if c8 then L34() else L35(r71, l1);
  L42():
    st y = r84;
    as_data_frame = ldf `as.data.frame`;
    check L43() else D33();
  D33():
    deopt 115 [];
  L1(r75, dx13):
    st expansions = dx13;
    goto L2();
  L34():
    dr12 = tryDispatchBuiltin.0("[<-", l1, r71);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L36() else L35(r71, dr12);
  L35(r73, l3):
    ind2 = ld ind;
    check L37() else D28();
  L43():
    p33 = prom<V +>{
      do_call1 = ldf `do.call`;
      p31 = prom<V +>{
        rbind2 = ld rbind;
        rbind3 = force? rbind2;
        checkMissing(rbind3);
        return rbind3;
      };
      p32 = prom<V +>{
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        return y1;
      };
      r87 = dyn do_call1(p31, p32);
      return r87;
    };
    r89 = dyn as_data_frame[, stringsAsFactors](p33, FALSE);
    check L44() else D34();
  D28():
    deopt 94 [r73, l3, r71, ind2];
  D34():
    deopt 119 [r89];
  L36():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L1(r71, dx12);
  L37():
    ind3 = force? ind2;
    ___ = ldf `[<-` in base;
    r76 = dyn ___(l3, r71, ind3);
    goto L1(r73, r76);
  L44():
    st y = r89;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L3(r91):
    l4 = ld y;
    class__ = ldf `class<-`;
    check L52() else D38();
  L45():
    sym5 = ldf class;
    base5 = ldf class in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  L46():
    r90 = dyn base4("CRAN_package_reverse_dependencies_and_views", <lang class(y)>);
    goto L3(r90);
  D38():
    deopt 133 [r91, l4, r91];
  L4(r93):
    c9 = ldf c in base;
    r95 = dyn c9("CRAN_package_reverse_dependencies_and_views", r93);
    check L51() else D37();
  L47():
    y2 = ld y;
    check L49() else D35();
  L48():
    r92 = dyn base5(<sym y>);
    goto L4(r92);
  L52():
    r96 = dyn class__(l4, NULL, r91);
    check L53() else D39();
  D35():
    deopt 126 [y2];
  D37():
    deopt 131 [r95];
  D39():
    deopt 135 [r91, r96];
  L49():
    y3 = force? y2;
    checkMissing(y3);
    class = ldf class in base;
    r94 = dyn class(y3);
    check L50() else D36();
  L51():
    goto L3(r95);
  L53():
    st y = r96;
    y4 = ld y;
    check L54() else D40();
  D36():
    deopt 129 [r94];
  D40():
    deopt 137 [y4];
  L50():
    goto L4(r94);
  L54():
    y5 = force? y4;
    checkMissing(y5);
    popenv;
    return y5;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r1:V |
    mkenv;
    st e = e;
    e1 = ld e;
    check L0() else D0();
  D0():
    deopt 0 [e1];
  L0():
    e2 = force? e1;
    checkMissing(e2);
    c = `is.object`(e2);
    if c then L2() else L3(e2);
  L1(dx1):
    c1 = `is.object`(dx1);
    if c1 then L6() else L7(dx1);
  L2():
    dr = tryDispatchBuiltin.1("$", e2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(e4):
    r = `$`(e4, <sym packagelist>);
    goto L1(r);
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L5(dx5):
    popenv;
    return dx5;
  L6():
    dr2 = tryDispatchBuiltin.1("$", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L8() else L7(dr2);
  L7(dx3):
    r1 = `$`(dx3, <sym name>);
    goto L5(r1);
  L8():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx4);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg c:L, reg paste:cls, reg sort:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    popenv;
    return NA_STR;
  L4():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L5() else D1();
  L6():
    paste = ldf paste;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L5():
    goto L0(r2);
  L7():
    p1 = prom<V +>{
      sort = ldf sort;
      p = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r4 = dyn sort(p);
      return r4;
    };
    r6 = dyn paste[, collapse](p1, " ");
    check L8() else D3();
  D3():
    deopt 11 [r6];
  L8():
    popenv;
    return r6;
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg p1:*, reg p2:V, reg fmt:cls, reg expansions:*, reg expansions1:V, reg c:L, reg expansions3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:*, reg r3:V, reg c1:L, reg expansions5:V, reg r5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg expansions7:V, reg dx3:V, reg p3:*, reg p4:V, reg __:cls, reg r6:V, reg __1:cls, reg r7:V, reg p5:p(V +), reg r9:V, reg fmt1:cls, reg expansions8:*, reg expansions9:V, reg c2:L, reg expansions11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg setdiff:cls, reg rr:*, reg rr1:V, reg c3:L, reg rr3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg p6:*, reg p7:V, reg __2:cls, reg r10:V, reg p8:p(V +), reg r12:*, reg r13:V, reg c4:L, reg r15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg p9:*, reg p10:V, reg __3:cls, reg r16:V, reg p11:p(V +), reg r18:V, reg __4:cls, reg r19:V, reg p12:p(V +), reg r21:V, reg fmt2:cls, reg expansions12:*, reg expansions13:V, reg c5:L, reg expansions15:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg setdiff1:cls, reg rrs:*, reg rrs1:V, reg c6:L, reg rrs3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg p13:*, reg p14:V, reg __5:cls, reg r22:V, reg p15:p(V +), reg rr4:*, reg rr5:V, reg c7:L, reg rr7:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg p16:*, reg p17:V, reg __6:cls, reg r24:V, reg p18:p(V +), reg r26:V, reg __7:cls, reg r27:V, reg p19:p(V +), reg r29:V, reg fmt3:cls, reg rxrefs:*, reg rxrefs1:V, reg c8:L, reg rxrefs3:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg p20:*, reg p21:V, reg __8:cls, reg r30:V, reg p22:p(V +), reg r32:V, reg fmt4:cls, reg v:*, reg v1:V, reg c9:L, reg v3:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg p23:*, reg p24:V, reg __9:cls, reg r33:V, reg p25:p(V +), reg r35:V, reg c10:cls, reg r36:V |
    mkenv;
    st p = p;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    p1 = ld p;
    check L3() else D0();
  L2():
    r = dyn base[Package, `Reverse depends`, `Additional recursive reverse depends`, `Additional recursive reverse depends of suggests`, `Reverse Rd xref depends`, Views](<sym p>, <lang fmt(`[`(expansions, `[[`(r, p)))>, <lang fmt(`[`(expansions, setdiff(`[[`(rr, p), `[[`(r, p))))>, <lang fmt(`[`(expansions, setdiff(`[[`(rrs, p), `[[`(rr, p))))>, <lang fmt(`[[`(rxrefs, p))>, <lang fmt(`[[`(v, p))>);
    goto L0(r);
  D0():
    deopt 2 [p1];
  L3():
    p2 = force? p1;
    checkMissing(p2);
    fmt = ldf fmt;
    check L4() else D1();
  D1():
    deopt 6 [];
  L4():
    p5 = prom<V +>{
      expansions = ld expansions;
      expansions1 = force? expansions;
      checkMissing(expansions1);
      c = `is.object`(expansions1);
      if c then L2() else L3(expansions1);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", expansions1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(expansions3):
      r2 = ld r;
      r3 = force? r2;
      checkMissing(r3);
      c1 = `is.object`(r3);
      if c1 then L5() else L6(expansions3, r3);
    L1(expansions7, dx3):
      __1 = ldf `[` in base;
      r7 = dyn __1(expansions7, dx3);
      goto L0(r7);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[[", r3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(expansions3, dr2);
    L6(expansions5, r5):
      p3 = ld p;
      p4 = force? p3;
      __ = ldf `[[` in base;
      r6 = dyn __(r5, p4);
      goto L1(expansions5, r6);
    L7():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(expansions3, dx2);
    };
    r9 = dyn fmt(p5);
    check L5() else D2();
  D2():
    deopt 8 [r9];
  L5():
    fmt1 = ldf fmt;
    check L6() else D3();
  D3():
    deopt 11 [];
  L6():
    p12 = prom<V +>{
      expansions8 = ld expansions;
      expansions9 = force? expansions8;
      checkMissing(expansions9);
      c2 = `is.object`(expansions9);
      if c2 then L1() else L2(expansions9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", expansions9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(expansions11):
      setdiff = ldf setdiff;
      p8 = prom<V +>{
        rr = ld rr;
        rr1 = force? rr;
        checkMissing(rr1);
        c3 = `is.object`(rr1);
        if c3 then L1() else L2(rr1);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[[", rr1);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(rr3):
        p6 = ld p;
        p7 = force? p6;
        __2 = ldf `[[` in base;
        r10 = dyn __2(rr3, p7);
        goto L0(r10);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p11 = prom<V +>{
        r12 = ld r;
        r13 = force? r12;
        checkMissing(r13);
        c4 = `is.object`(r13);
        if c4 then L1() else L2(r13);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("[[", r13);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(r15):
        p9 = ld p;
        p10 = force? p9;
        __3 = ldf `[[` in base;
        r16 = dyn __3(r15, p10);
        goto L0(r16);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r18 = dyn setdiff(p8, p11);
      __4 = ldf `[` in base;
      r19 = dyn __4(expansions11, r18);
      goto L0(r19);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r21 = dyn fmt1(p12);
    check L7() else D4();
  D4():
    deopt 13 [r21];
  L7():
    fmt2 = ldf fmt;
    check L8() else D5();
  D5():
    deopt 16 [];
  L8():
    p19 = prom<V +>{
      expansions12 = ld expansions;
      expansions13 = force? expansions12;
      checkMissing(expansions13);
      c5 = `is.object`(expansions13);
      if c5 then L1() else L2(expansions13);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", expansions13);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(expansions15):
      setdiff1 = ldf setdiff;
      p15 = prom<V +>{
        rrs = ld rrs;
        rrs1 = force? rrs;
        checkMissing(rrs1);
        c6 = `is.object`(rrs1);
        if c6 then L1() else L2(rrs1);
      L0(dx13):
        return dx13;
      L1():
        dr12 = tryDispatchBuiltin.1("[[", rrs1);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(rrs3):
        p13 = ld p;
        p14 = force? p13;
        __5 = ldf `[[` in base;
        r22 = dyn __5(rrs3, p14);
        goto L0(r22);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx12);
      };
      p18 = prom<V +>{
        rr4 = ld rr;
        rr5 = force? rr4;
        checkMissing(rr5);
        c7 = `is.object`(rr5);
        if c7 then L1() else L2(rr5);
      L0(dx15):
        return dx15;
      L1():
        dr14 = tryDispatchBuiltin.1("[[", rr5);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(rr7):
        p16 = ld p;
        p17 = force? p16;
        __6 = ldf `[[` in base;
        r24 = dyn __6(rr7, p17);
        goto L0(r24);
      L3():
        dx14 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx14);
      };
      r26 = dyn setdiff1(p15, p18);
      __7 = ldf `[` in base;
      r27 = dyn __7(expansions15, r26);
      goto L0(r27);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r29 = dyn fmt2(p19);
    check L9() else D6();
  D6():
    deopt 18 [r29];
  L9():
    fmt3 = ldf fmt;
    check L10() else D7();
  D7():
    deopt 21 [];
  L10():
    p22 = prom<V +>{
      rxrefs = ld rxrefs;
      rxrefs1 = force? rxrefs;
      checkMissing(rxrefs1);
      c8 = `is.object`(rxrefs1);
      if c8 then L1() else L2(rxrefs1);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", rxrefs1);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(rxrefs3):
      p20 = ld p;
      p21 = force? p20;
      __8 = ldf `[[` in base;
      r30 = dyn __8(rxrefs3, p21);
      goto L0(r30);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r32 = dyn fmt3(p22);
    check L11() else D8();
  D8():
    deopt 23 [r32];
  L11():
    fmt4 = ldf fmt;
    check L12() else D9();
  D9():
    deopt 26 [];
  L12():
    p25 = prom<V +>{
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      c9 = `is.object`(v1);
      if c9 then L1() else L2(v1);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[[", v1);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(v3):
      p23 = ld p;
      p24 = force? p23;
      __9 = ldf `[[` in base;
      r33 = dyn __9(v3, p24);
      goto L0(r33);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r35 = dyn fmt4(p25);
    check L13() else D10();
  D10():
    deopt 28 [r35];
  L13():
    c10 = ldf c in base;
    r36 = dyn c10(p2, r9, r21, r29, r32, r35);
    check L14() else D11();
  D11():
    deopt 31 [r36];
  L14():
    goto L0(r36);
  }
}