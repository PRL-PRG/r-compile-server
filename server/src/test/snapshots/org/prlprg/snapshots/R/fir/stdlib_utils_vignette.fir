fun main() {
  () -+> V { reg r:cls, reg vignette:cls, reg r1:V, reg vignette1:cls, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg vignette2:cls, reg r5:V, reg c:V, reg r6:V, reg c1:L, reg str:cls, reg v1:*, reg v2:V, reg p:p(V +), reg r8:V, reg vignette3:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg interactive:cls, reg r13:V, reg c2:L, reg vignette4:cls, reg r14:V |
    mkenv;
    r = clos inner2708156508;
    st vignette = r;
    vignette = ldf vignette;
    check L5() else D0();
  D0():
    deopt 4 [];
  L5():
    r1 = dyn vignette[all](FALSE);
    check L6() else D1();
  D1():
    deopt 7 [r1];
  L6():
    vignette1 = ldf vignette;
    check L7() else D2();
  D2():
    deopt 9 [];
  L7():
    r2 = dyn vignette1[all](TRUE);
    check L8() else D3();
  D3():
    deopt 12 [r2];
  L8():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r4):
    r6 = `!`(r4);
    c1 = `as.logical`(r6);
    if c1 then L13() else L1();
  L9():
    vignette2 = ldf vignette;
    check L11() else D4();
  L10():
    r3 = dyn base(<lang `<-`(v1, vignette("grid", package="grid"))>);
    goto L0(r3);
  D4():
    deopt 15 [];
  L1():
    goto L2();
  L2():
    vignette3 = ldf vignette;
    check L17() else D8();
  L11():
    r5 = dyn vignette2[, package]("grid", "grid");
    check L12() else D5();
  L13():
    str = ldf str;
    check L14() else D6();
  D5():
    deopt 19 [r5];
  D6():
    deopt 24 [];
  D8():
    deopt 30 [];
  L12():
    st v1 = r5;
    c = `==`(r5, NULL);
    goto L0(c);
  L14():
    p = prom<V +>{
      v1 = ld v1;
      v2 = force? v1;
      checkMissing(v2);
      return v2;
    };
    r8 = dyn str(p);
    check L15() else D7();
  L17():
    r10 = dyn vignette3[package]("grid");
    check L18() else D9();
  D7():
    deopt 26 [r8];
  D9():
    deopt 33 [r10];
  L15():
    goto L2();
  L18():
    sym1 = ldf interactive;
    base1 = ldf interactive in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L3(r12):
    c2 = `as.logical`(r12);
    if c2 then L22() else L4();
  L19():
    interactive = ldf interactive in base;
    r13 = dyn interactive();
    check L21() else D10();
  L20():
    r11 = dyn base1();
    goto L3(r11);
  D10():
    deopt 37 [r13];
  L4():
    invisible.0();
    popenv;
    return NULL;
  L21():
    goto L3(r13);
  L22():
    vignette4 = ldf vignette;
    check L23() else D11();
  D11():
    deopt 39 [];
  L23():
    r14 = dyn vignette4[, package]("rotated", "grid");
    check L24() else D12();
  D12():
    deopt 43 [r14];
  L24():
    popenv;
    return r14;
  }
}
fun inner2708156508(topic, package, `lib.loc`, all) {
  (reg topic:*, reg package:*, reg lib_loc:*, reg all:*) -+> V { var topic:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var all:*, reg all_isMissing:L, reg all_orDefault:*, reg __:cls, reg r:V, reg r1:cls, reg package1:*, reg package2:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg all1:*, reg all2:V, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg missing:cls, reg r8:V, reg r9:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg substitute:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg stopic:*, reg stopic1:V, reg is_call:cls, reg r15:V, reg c1:L, reg c3:V, reg deparse1:cls, reg stopic2:*, reg stopic3:V, reg c4:L, reg stopic5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r16:V, reg p3:p(V +), reg r18:V, reg r19:V, reg c5:L, reg c6:V, reg c8:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg stopic6:*, reg stopic7:V, reg c9:L, reg stopic9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __2:cls, reg r22:V, reg as_character:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg stopic10:*, reg stopic11:V, reg c10:L, reg stopic13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __3:cls, reg r26:V, reg as_character1:cls, reg r27:V, reg topic1:*, reg topic2:V, reg c11:L, reg topic4:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __4:cls, reg r29:V, reg vinfo:*, reg vinfo1:V, reg c12:L, reg vinfo3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg vinfo4:*, reg vinfo5:V, reg c13:L, reg vinfo8:V, reg dr10:V, reg dc5:L, reg dx10:V, reg vinfo11:V, reg dx11:V, reg __5:cls, reg r30:V, reg topic5:*, reg topic6:V, reg r31:V, reg __6:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg vinfo12:*, reg vinfo13:V, reg length:cls, reg r35:V, reg c14:L, reg which:cls, reg file_test:cls, reg file_path:cls, reg vinfo14:*, reg vinfo15:V, reg c15:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __7:cls, reg r36:V, reg p4:p(V +), reg vinfo18:*, reg vinfo19:V, reg c16:L, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __8:cls, reg r38:V, reg p5:p(V +), reg r40:V, reg p6:p(V +), reg r42:V, reg p7:p(V +), reg r44:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg pos:*, reg pos1:V, reg length1:cls, reg r47:V, reg r48:V, reg c17:L, reg as_list:cls, reg vinfo22:*, reg vinfo23:V, reg c18:L, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __9:cls, reg r49:V, reg p8:p(V +), reg r51:V, reg l:*, reg c19:L, reg r53:S, reg l2:*, reg dr18:V, reg dc9:L, reg dx18:V, reg r55:S, reg dx19:V, reg r56:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r58:V, reg r59:V, reg pos2:*, reg pos3:V, reg length2:cls, reg r60:V, reg r61:V, reg c20:L, reg pos4:*, reg pos5:V, reg c21:L, reg pos7:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __10:cls, reg r62:V, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg topic7:*, reg topic8:V, reg p9:p(V +), reg r64:V, reg p10:p(V +), reg sQuote1:cls, reg file_path1:cls, reg vinfo26:*, reg vinfo27:V, reg c22:L, reg vinfo29:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg pos8:*, reg pos9:V, reg __11:cls, reg r66:V, reg p11:p(V +), reg r68:V, reg p12:p(V +), reg r70:V, reg p13:p(V +), reg r72:V, reg p14:p(V +), reg r74:V, reg as_list1:cls, reg vinfo30:*, reg vinfo31:V, reg c23:L, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg pos10:*, reg pos11:V, reg __12:cls, reg r76:V, reg p15:p(V +), reg r78:V, reg file_test1:cls, reg file_path2:cls, reg z:*, reg z1:V, reg c24:L, reg z3:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg r79:V, reg p16:p(V +), reg z4:*, reg z5:V, reg c25:L, reg z7:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg r81:V, reg p17:p(V +), reg r83:V, reg p18:p(V +), reg r85:V, reg r86:V, reg c26:L, reg l3:*, reg c27:L, reg r88:S, reg l5:*, reg dr30:V, reg dc15:L, reg dx30:V, reg r90:S, reg dx31:V, reg r91:V, reg l6:*, reg class__:cls, reg r93:V, reg z8:*, reg z9:V, reg warning1:cls, reg gettextf1:cls, reg sQuote2:cls, reg topic9:*, reg topic10:V, reg p19:p(V +), reg r95:V, reg p20:p(V +), reg r97:V, reg p21:p(V +), reg r99:V, reg nrow:cls, reg vinfo34:*, reg vinfo35:V, reg p22:p(V +), reg r101:V, reg c28:L, reg paste:cls, reg vinfo36:*, reg vinfo37:V, reg c29:L, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg __13:cls, reg r102:V, reg p23:p(V +), reg paste1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r104:V, reg r105:V, reg nrow1:cls, reg vinfo40:*, reg vinfo41:V, reg p24:p(V +), reg r107:V, reg rep_int:cls, reg r108:V, reg p25:p(V +), reg ifelse:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r110:V, reg r111:V, reg vinfo42:*, reg vinfo43:V, reg c30:L, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg __14:cls, reg r112:V, reg nzchar:cls, reg r113:V, reg p26:p(V +), reg paste2:cls, reg __15:cls, reg r115:V, reg r116:cls, reg vinfo46:*, reg vinfo47:V, reg c31:L, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg __16:cls, reg r117:V, reg p27:p(V +), reg r119:V, reg p28:p(V +), reg r121:V, reg p29:p(V +), reg r123:V, reg p30:p(V +), reg r125:V, reg p31:p(V +), reg r127:V, reg r128:V, reg character:cls, reg r129:V, reg cbind:cls, reg basename:cls, reg vinfo50:*, reg vinfo51:V, reg c32:L, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg __17:cls, reg r130:V, reg p32:p(V +), reg r132:V, reg p33:p(V +), reg dirname:cls, reg vinfo54:*, reg vinfo55:V, reg c33:L, reg dr40:V, reg dc20:L, reg dx40:V, reg dx41:V, reg __18:cls, reg r134:V, reg p34:p(V +), reg r136:V, reg p35:p(V +), reg vinfo58:*, reg vinfo59:V, reg c34:L, reg dr42:V, reg dc21:L, reg dx42:V, reg dx43:V, reg __19:cls, reg r138:V, reg p36:p(V +), reg title:*, reg title1:V, reg p37:p(V +), reg r141:V, reg all3:*, reg all4:V, reg c35:L, reg r142:V, reg paste3:cls, reg sQuote3:cls, reg r143:V, reg p38:p(V +), reg r145:V, reg structure:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r146:V, reg r147:V, reg db:*, reg db1:V, reg footer:*, reg footer1:V, reg list:cls, reg r148:V, reg p39:p(V +), reg r150:V |
    mkenv;
    st topic = topic;
    package_isMissing = missing.0(package);
    if package_isMissing then L0(NULL) else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L1(NULL) else L1(lib_loc);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    all_isMissing = missing.0(all);
    if all_isMissing then L2(TRUE) else L2(all);
  L2(all_orDefault):
    st all = all_orDefault;
    __ = ldf `::`;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    r = dyn __("tools", "getVignetteInfo");
    check L33() else D1();
  D1():
    deopt 4 [r];
  L33():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    p2 = prom<V +>{
      all1 = ld all;
      all2 = force? all1;
      checkMissing(all2);
      return all2;
    };
    r5 = dyn r1(p, p1, p2);
    check L34() else D2();
  D2():
    deopt 9 [r5];
  L34():
    st vinfo = r5;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L3(r7):
    r9 = `!`(r7);
    c = `as.logical`(r9);
    if c then L37() else L4();
  L35():
    missing = ldf missing in base;
    r8 = dyn missing(<sym topic>);
    goto L3(r8);
  L36():
    r6 = dyn base(<sym topic>);
    goto L3(r6);
  L4():
    nrow = ldf nrow;
    check L125() else D37();
  L37():
    sym1 = ldf substitute;
    base1 = ldf substitute in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  D37():
    deopt 162 [];
  L5(r11):
    st stopic = r11;
    sym2 = ldf `is.call`;
    base2 = ldf `is.call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L38():
    substitute = ldf substitute in base;
    r12 = dyn substitute(<sym topic>);
    goto L5(r12);
  L39():
    r10 = dyn base1(<sym topic>);
    goto L5(r10);
  L125():
    p22 = prom<V +>{
      vinfo34 = ld vinfo;
      vinfo35 = force? vinfo34;
      checkMissing(vinfo35);
      return vinfo35;
    };
    r101 = dyn nrow(p22);
    check L126() else D38();
  D38():
    deopt 164 [r101];
  L6(r14):
    c1 = `as.logical`(r14);
    if c1 then L44() else L7(c1);
  L40():
    stopic = ld stopic;
    check L42() else D3();
  L41():
    r13 = dyn base2(<sym stopic>);
    goto L6(r13);
  L126():
    c28 = `as.logical`(r101);
    if c28 then L127() else L28();
  D3():
    deopt 21 [stopic];
  L7(c3):
    c8 = `as.logical`(c3);
    if c8 then L48() else L8();
  L28():
    character = ldf character;
    check L131() else D41();
  L29(r128):
    st title = r128;
    cbind = ldf cbind;
    check L133() else D43();
  L42():
    stopic1 = force? stopic;
    checkMissing(stopic1);
    is_call = ldf `is.call` in base;
    r15 = dyn is_call(stopic1);
    check L43() else D4();
  L44():
    deparse1 = ldf deparse1;
    check L45() else D5();
  L127():
    paste = ldf paste;
    check L128() else D39();
  D4():
    deopt 24 [r15];
  D5():
    deopt 26 [c1];
  D39():
    deopt 166 [];
  D41():
    deopt 171 [];
  D43():
    deopt 175 [];
  L8():
    topic1 = ld topic;
    check L64() else D11();
  L13():
    vinfo = ld vinfo;
    check L68() else D12();
  L43():
    goto L6(r15);
  L45():
    p3 = prom<V +>{
      stopic2 = ld stopic;
      stopic3 = force? stopic2;
      checkMissing(stopic3);
      c4 = `is.object`(stopic3);
      if c4 then L1() else L2(stopic3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", stopic3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(stopic5):
      __1 = ldf `[[` in base;
      r16 = dyn __1(stopic5, 1);
      goto L0(r16);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r18 = dyn deparse1(p3);
    check L46() else D6();
  L48():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L128():
    p23 = prom<V +>{
      vinfo36 = ld vinfo;
      vinfo37 = force? vinfo36;
      checkMissing(vinfo37);
      c29 = `is.object`(vinfo37);
      if c29 then L1() else L2();
    L0(dx33):
      return dx33;
    L1():
      dr32 = tryDispatchBuiltin.1("[", vinfo37);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2();
    L2():
      __13 = ldf `[` in base;
      r102 = dyn __13(vinfo37, <missing>, "Title");
      goto L0(r102);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx32);
    };
    p31 = prom<V +>{
      paste1 = ldf paste0;
      p25 = prom<V +>{
        sym8 = ldf `rep.int`;
        base8 = ldf `rep.int` in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r105):
        return r105;
      L1():
        nrow1 = ldf nrow;
        p24 = prom<V +>{
          vinfo40 = ld vinfo;
          vinfo41 = force? vinfo40;
          checkMissing(vinfo41);
          return vinfo41;
        };
        r107 = dyn nrow1(p24);
        rep_int = ldf `rep.int` in base;
        r108 = dyn rep_int("(source", r107);
        goto L0(r108);
      L2():
        r104 = dyn base8("(source", <lang nrow(vinfo)>);
        goto L0(r104);
      };
      p30 = prom<V +>{
        ifelse = ldf ifelse;
        p26 = prom<V +>{
          sym9 = ldf nzchar;
          base9 = ldf nzchar in base;
          guard9 = `==`.4(sym9, base9);
          if guard9 then L2() else L3();
        L0(r111):
          return r111;
        L2():
          vinfo42 = ld vinfo;
          vinfo43 = force? vinfo42;
          checkMissing(vinfo43);
          c30 = `is.object`(vinfo43);
          if c30 then L4() else L5();
        L3():
          r110 = dyn base9(<lang `[`(vinfo, , "PDF")>);
          goto L0(r110);
        L1(dx35):
          nzchar = ldf nzchar in base;
          r113 = dyn nzchar(dx35);
          goto L0(r113);
        L4():
          dr34 = tryDispatchBuiltin.1("[", vinfo43);
          dc17 = getTryDispatchBuiltinDispatched(dr34);
          if dc17 then L6() else L5();
        L5():
          __14 = ldf `[` in base;
          r112 = dyn __14(vinfo43, <missing>, "PDF");
          goto L1(r112);
        L6():
          dx34 = getTryDispatchBuiltinValue(dr34);
          goto L1(dx34);
        };
        p29 = prom<V +>{
          paste2 = ldf paste0;
          p28 = prom<V +>{
            __15 = ldf `::`;
            r115 = dyn __15("tools", "file_ext");
            checkFun.0(r115);
            r116 = r115 as cls;
            p27 = prom<V +>{
              vinfo46 = ld vinfo;
              vinfo47 = force? vinfo46;
              checkMissing(vinfo47);
              c31 = `is.object`(vinfo47);
              if c31 then L1() else L2();
            L0(dx37):
              return dx37;
            L1():
              dr36 = tryDispatchBuiltin.1("[", vinfo47);
              dc18 = getTryDispatchBuiltinDispatched(dr36);
              if dc18 then L3() else L2();
            L2():
              __16 = ldf `[` in base;
              r117 = dyn __16(vinfo47, <missing>, "PDF");
              goto L0(r117);
            L3():
              dx36 = getTryDispatchBuiltinValue(dr36);
              goto L0(dx36);
            };
            r119 = dyn r116(p27);
            return r119;
          };
          r121 = dyn paste2(", ", p28);
          return r121;
        };
        r123 = dyn ifelse(p26, p29, "");
        return r123;
      };
      r125 = dyn paste1(p25, p30, ")");
      return r125;
    };
    r127 = dyn paste(p23, p31);
    check L129() else D40();
  L131():
    r129 = dyn character();
    check L132() else D42();
  L133():
    p33 = prom<V +>{
      basename = ldf basename;
      p32 = prom<V +>{
        vinfo50 = ld vinfo;
        vinfo51 = force? vinfo50;
        checkMissing(vinfo51);
        c32 = `is.object`(vinfo51);
        if c32 then L1() else L2();
      L0(dx39):
        return dx39;
      L1():
        dr38 = tryDispatchBuiltin.1("[", vinfo51);
        dc19 = getTryDispatchBuiltinDispatched(dr38);
        if dc19 then L3() else L2();
      L2():
        __17 = ldf `[` in base;
        r130 = dyn __17(vinfo51, <missing>, "Dir");
        goto L0(r130);
      L3():
        dx38 = getTryDispatchBuiltinValue(dr38);
        goto L0(dx38);
      };
      r132 = dyn basename(p32);
      return r132;
    };
    p35 = prom<V +>{
      dirname = ldf dirname;
      p34 = prom<V +>{
        vinfo54 = ld vinfo;
        vinfo55 = force? vinfo54;
        checkMissing(vinfo55);
        c33 = `is.object`(vinfo55);
        if c33 then L1() else L2();
      L0(dx41):
        return dx41;
      L1():
        dr40 = tryDispatchBuiltin.1("[", vinfo55);
        dc20 = getTryDispatchBuiltinDispatched(dr40);
        if dc20 then L3() else L2();
      L2():
        __18 = ldf `[` in base;
        r134 = dyn __18(vinfo55, <missing>, "Dir");
        goto L0(r134);
      L3():
        dx40 = getTryDispatchBuiltinValue(dr40);
        goto L0(dx40);
      };
      r136 = dyn dirname(p34);
      return r136;
    };
    p36 = prom<V +>{
      vinfo58 = ld vinfo;
      vinfo59 = force? vinfo58;
      checkMissing(vinfo59);
      c34 = `is.object`(vinfo59);
      if c34 then L1() else L2();
    L0(dx43):
      return dx43;
    L1():
      dr42 = tryDispatchBuiltin.1("[", vinfo59);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2();
    L2():
      __19 = ldf `[` in base;
      r138 = dyn __19(vinfo59, <missing>, "Topic");
      goto L0(r138);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx42);
    };
    p37 = prom<V +>{
      title = ld title;
      title1 = force? title;
      checkMissing(title1);
      return title1;
    };
    r141 = dyn cbind[Package, LibPath, Item, Title](p33, p35, p36, p37);
    check L134() else D44();
  D6():
    deopt 28 [c1, r18];
  D11():
    deopt 52 [topic1];
  D12():
    deopt 58 [vinfo];
  D40():
    deopt 169 [r127];
  D42():
    deopt 172 [r129];
  D44():
    deopt 184 [r141];
  L9(r21):
    st package = r21;
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L46():
    r19 = `==`(r18, "::");
    c5 = `as.logical`(r19);
    c6 = `&&`(c1, c5);
    goto L7(c6);
  L49():
    stopic6 = ld stopic;
    check L51() else D7();
  L50():
    r20 = dyn base3(<lang `[[`(stopic, 2)>);
    goto L9(r20);
  L64():
    topic2 = force? topic1;
    checkMissing(topic2);
    c11 = `is.object`(topic2);
    if c11 then L65() else L66(topic2);
  L68():
    vinfo1 = force? vinfo;
    checkMissing(vinfo1);
    c12 = `is.object`(vinfo1);
    if c12 then L69() else L70(vinfo1);
  L129():
    goto L29(r127);
  L132():
    goto L29(r129);
  L134():
    st db = r141;
    all3 = ld all;
    check L135() else D45();
  D7():
    deopt 34 [stopic6];
  D45():
    deopt 186 [all3];
  L11(r25):
    st topic = r25;
    goto L13();
  L14(dx7):
    st topic = dx7;
    goto L13();
  L15(dx9):
    st vinfo = dx9;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L77() else L78();
  L51():
    stopic7 = force? stopic6;
    checkMissing(stopic7);
    c9 = `is.object`(stopic7);
    if c9 then L52() else L53(stopic7);
  L56():
    stopic10 = ld stopic;
    check L58() else D9();
  L57():
    r24 = dyn base4(<lang `[[`(stopic, 3)>);
    goto L11(r24);
  L65():
    dr6 = tryDispatchBuiltin.1("[", topic2);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L67() else L66(dr6);
  L66(topic4):
    __4 = ldf `[` in base;
    r29 = dyn __4(topic4, 1);
    goto L14(r29);
  L69():
    dr8 = tryDispatchBuiltin.1("[", vinfo1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L71() else L70(dr8);
  L70(vinfo3):
    vinfo4 = ld vinfo;
    check L72() else D13();
  L135():
    all4 = force? all3;
    checkMissing(all4);
    c35 = `as.logical`(all4);
    if c35 then L136() else L30();
  D9():
    deopt 44 [stopic10];
  D13():
    deopt 60 [vinfo3, vinfo4];
  L10(dx3):
    as_character = ldf `as.character` in base;
    r23 = dyn as_character(dx3);
    check L55() else D8();
  L17(r34):
    c14 = `as.logical`(r34);
    if c14 then L81() else L18();
  L30():
    paste3 = ldf paste0;
    check L138() else D46();
  L31(r142):
    st footer = r142;
    structure = ldf structure;
    check L140() else D48();
  L52():
    dr2 = tryDispatchBuiltin.1("[[", stopic7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L54() else L53(dr2);
  L53(stopic9):
    __2 = ldf `[[` in base;
    r22 = dyn __2(stopic9, 2);
    goto L10(r22);
  L58():
    stopic11 = force? stopic10;
    checkMissing(stopic11);
    c10 = `is.object`(stopic11);
    if c10 then L59() else L60(stopic11);
  L67():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L14(dx6);
  L71():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L15(dx8);
  L72():
    vinfo5 = force? vinfo4;
    checkMissing(vinfo5);
    c13 = `is.object`(vinfo5);
    if c13 then L73() else L74(vinfo3);
  L77():
    vinfo12 = ld vinfo;
    check L79() else D15();
  L78():
    r33 = dyn base5(<sym vinfo>);
    goto L17(r33);
  L136():
    goto L31(NULL);
  D8():
    deopt 40 [r23];
  D15():
    deopt 76 [vinfo12];
  D46():
    deopt 191 [];
  D48():
    deopt 199 [];
  L12(dx5):
    as_character1 = ldf `as.character` in base;
    r27 = dyn as_character1(dx5);
    check L62() else D10();
  L16(vinfo11, dx11):
    topic5 = ld topic;
    check L76() else D14();
  L18():
    warning1 = ldf warning;
    check L122() else D35();
  L54():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L55():
    goto L9(r23);
  L59():
    dr4 = tryDispatchBuiltin.1("[[", stopic11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L61() else L60(dr4);
  L60(stopic13):
    __3 = ldf `[[` in base;
    r26 = dyn __3(stopic13, 3);
    goto L12(r26);
  L73():
    dr10 = tryDispatchBuiltin.1("[", vinfo5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L75() else L74(vinfo3);
  L74(vinfo8):
    __5 = ldf `[` in base;
    r30 = dyn __5(vinfo5, <missing>, "Topic");
    goto L16(vinfo8, r30);
  L79():
    vinfo13 = force? vinfo12;
    checkMissing(vinfo13);
    length = ldf length in base;
    r35 = dyn length(vinfo13);
    check L80() else D16();
  L81():
    which = ldf which;
    check L82() else D17();
  L138():
    p38 = prom<V +>{
      sQuote3 = ldf sQuote;
      r143 = dyn sQuote3("vignette(all = TRUE)");
      return r143;
    };
    r145 = dyn paste3("Use ", p38, "\n", "to list the vignettes in all *available* packages.");
    check L139() else D47();
  L140():
    p39 = prom<V +>{
      sym10 = ldf list;
      base10 = ldf list in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r147):
      return r147;
    L1():
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      footer = ld footer;
      footer1 = force? footer;
      checkMissing(footer1);
      list = ldf list in base;
      r148 = dyn list("vignette", "Vignettes", NULL, db1, footer1);
      goto L0(r148);
    L2():
      r146 = dyn base10[type, title, header, results, footer]("vignette", "Vignettes", NULL, <sym db>, <sym footer>);
      goto L0(r146);
    };
    r150 = dyn structure[class, ]("packageIQR", p39);
    check L141() else D49();
  D10():
    deopt 50 [r27];
  D14():
    deopt 65 [vinfo11, dx11, topic5];
  D16():
    deopt 79 [r35];
  D17():
    deopt 81 [];
  D35():
    deopt 154 [];
  D47():
    deopt 196 [r145];
  D49():
    deopt 203 [r150];
  L61():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx4);
  L62():
    goto L11(r27);
  L75():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L16(vinfo3, dx10);
  L76():
    topic6 = force? topic5;
    checkMissing(topic6);
    r31 = `==`(dx11, topic6);
    __6 = ldf `[` in base;
    r32 = dyn __6(vinfo1, r31, <missing>, FALSE);
    goto L15(r32);
  L80():
    goto L17(r35);
  L82():
    p7 = prom<V +>{
      file_test = ldf file_test;
      p6 = prom<V +>{
        file_path = ldf `file.path`;
        p4 = prom<V +>{
          vinfo14 = ld vinfo;
          vinfo15 = force? vinfo14;
          checkMissing(vinfo15);
          c15 = `is.object`(vinfo15);
          if c15 then L1() else L2();
        L0(dx13):
          return dx13;
        L1():
          dr12 = tryDispatchBuiltin.1("[", vinfo15);
          dc6 = getTryDispatchBuiltinDispatched(dr12);
          if dc6 then L3() else L2();
        L2():
          __7 = ldf `[` in base;
          r36 = dyn __7(vinfo15, <missing>, "Dir");
          goto L0(r36);
        L3():
          dx12 = getTryDispatchBuiltinValue(dr12);
          goto L0(dx12);
        };
        p5 = prom<V +>{
          vinfo18 = ld vinfo;
          vinfo19 = force? vinfo18;
          checkMissing(vinfo19);
          c16 = `is.object`(vinfo19);
          if c16 then L1() else L2();
        L0(dx15):
          return dx15;
        L1():
          dr14 = tryDispatchBuiltin.1("[", vinfo19);
          dc7 = getTryDispatchBuiltinDispatched(dr14);
          if dc7 then L3() else L2();
        L2():
          __8 = ldf `[` in base;
          r38 = dyn __8(vinfo19, <missing>, "PDF");
          goto L0(r38);
        L3():
          dx14 = getTryDispatchBuiltinValue(dr14);
          goto L0(dx14);
        };
        r40 = dyn file_path(p4, "doc", p5);
        return r40;
      };
      r42 = dyn file_test("-f", p6);
      return r42;
    };
    r44 = dyn which(p7);
    check L83() else D18();
  L122():
    p21 = prom<V +>{
      gettextf1 = ldf gettextf;
      p20 = prom<V +>{
        sQuote2 = ldf sQuote;
        p19 = prom<V +>{
          topic9 = ld topic;
          topic10 = force? topic9;
          checkMissing(topic10);
          return topic10;
        };
        r95 = dyn sQuote2(p19);
        return r95;
      };
      r97 = dyn gettextf1("vignette %s not found", p20);
      return r97;
    };
    r99 = dyn warning1[, `call.`, domain](p21, FALSE, NA_LGL);
    check L123() else D36();
  L139():
    goto L31(r145);
  L141():
    popenv;
    return r150;
  D18():
    deopt 83 [r44];
  D36():
    deopt 160 [r99];
  L83():
    st pos = r44;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L84() else L85();
  L123():
    popenv;
    return r99;
  L19(r46):
    r48 = `!`(r46);
    c17 = `as.logical`(r48);
    if c17 then L88() else L20();
  L84():
    pos = ld pos;
    check L86() else D19();
  L85():
    r45 = dyn base6(<sym pos>);
    goto L19(r45);
  D19():
    deopt 87 [pos];
  L20():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L96() else L97();
  L21():
    file_test1 = ldf file_test;
    check L110() else D30();
  L86():
    pos1 = force? pos;
    checkMissing(pos1);
    length1 = ldf length in base;
    r47 = dyn length1(pos1);
    check L87() else D20();
  L88():
    as_list = ldf `as.list`;
    check L89() else D21();
  D20():
    deopt 90 [r47];
  D21():
    deopt 93 [];
  D30():
    deopt 132 [];
  L22(r59):
    r61 = `>`(r59, 1);
    c20 = `as.logical`(r61);
    if c20 then L100() else L23();
  L87():
    goto L19(r47);
  L89():
    p8 = prom<V +>{
      vinfo22 = ld vinfo;
      vinfo23 = force? vinfo22;
      checkMissing(vinfo23);
      c18 = `is.object`(vinfo23);
      if c18 then L1() else L2();
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", vinfo23);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2();
    L2():
      __9 = ldf `[` in base;
      r49 = dyn __9(vinfo23, 1, <missing>);
      goto L0(r49);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r51 = dyn as_list(p8);
    check L90() else D22();
  L96():
    pos2 = ld pos;
    check L98() else D23();
  L97():
    r58 = dyn base7(<sym pos>);
    goto L22(r58);
  L110():
    p18 = prom<V +>{
      file_path2 = ldf `file.path`;
      p16 = prom<V +>{
        z = ld z;
        z1 = force? z;
        checkMissing(z1);
        c24 = `is.object`(z1);
        if c24 then L1() else L2(z1);
      L0(dx27):
        return dx27;
      L1():
        dr26 = tryDispatchBuiltin.1("$", z1);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L3() else L2(dr26);
      L2(z3):
        r79 = `$`(z3, <sym Dir>);
        goto L0(r79);
      L3():
        dx26 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx26);
      };
      p17 = prom<V +>{
        z4 = ld z;
        z5 = force? z4;
        checkMissing(z5);
        c25 = `is.object`(z5);
        if c25 then L1() else L2(z5);
      L0(dx29):
        return dx29;
      L1():
        dr28 = tryDispatchBuiltin.1("$", z5);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L3() else L2(dr28);
      L2(z7):
        r81 = `$`(z7, <sym R>);
        goto L0(r81);
      L3():
        dx28 = getTryDispatchBuiltinValue(dr28);
        goto L0(dx28);
      };
      r83 = dyn file_path2(p16, "doc", p17);
      return r83;
    };
    r85 = dyn file_test1("-f", p18);
    check L111() else D31();
  D22():
    deopt 95 [r51];
  D23():
    deopt 104 [pos2];
  D31():
    deopt 135 [r85];
  L23():
    goto L25();
  L25():
    as_list1 = ldf `as.list`;
    check L108() else D28();
  L90():
    st z = r51;
    l = ld z;
    c19 = `is.object`(l);
    if c19 then L92() else L93("", l);
  L98():
    pos3 = force? pos2;
    checkMissing(pos3);
    length2 = ldf length in base;
    r60 = dyn length2(pos3);
    check L99() else D24();
  L100():
    pos4 = ld pos;
    check L101() else D25();
  L111():
    r86 = `!`(r85);
    c26 = `as.logical`(r86);
    if c26 then L112() else L26();
  D24():
    deopt 107 [r60];
  D25():
    deopt 110 [pos4];
  D28():
    deopt 127 [];
  L26():
    goto L27();
  L27():
    l6 = ld z;
    class__ = ldf `class<-`;
    check L118() else D32();
  L91(r55, dx19):
    st z = dx19;
    goto L21();
  L92():
    dr18 = tryDispatchBuiltin.0("$<-", l, "");
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L94() else L93("", dr18);
  L93(r53, l2):
    r56 = `$<-`(l2, <sym PDF>, "");
    goto L91(r53, r56);
  L99():
    goto L22(r60);
  L101():
    pos5 = force? pos4;
    checkMissing(pos5);
    c21 = `is.object`(pos5);
    if c21 then L102() else L103(pos5);
  L108():
    p15 = prom<V +>{
      vinfo30 = ld vinfo;
      vinfo31 = force? vinfo30;
      checkMissing(vinfo31);
      c23 = `is.object`(vinfo31);
      if c23 then L1() else L2();
    L0(dx25):
      return dx25;
    L1():
      dr24 = tryDispatchBuiltin.1("[", vinfo31);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2();
    L2():
      pos10 = ld pos;
      pos11 = force? pos10;
      __12 = ldf `[` in base;
      r76 = dyn __12(vinfo31, pos11, <missing>);
      goto L0(r76);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx24);
    };
    r78 = dyn as_list1(p15);
    check L109() else D29();
  L112():
    l3 = ld z;
    c27 = `is.object`(l3);
    if c27 then L114() else L115("", l3);
  D29():
    deopt 129 [r78];
  D32():
    deopt 147 ["vignette", l6, "vignette"];
  L24(dx21):
    st pos = dx21;
    warning = ldf warning;
    check L105() else D26();
  L94():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L91("", dx18);
  L102():
    dr20 = tryDispatchBuiltin.1("[", pos5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L104() else L103(dr20);
  L103(pos7):
    __10 = ldf `[` in base;
    r62 = dyn __10(pos7, 1);
    goto L24(r62);
  L109():
    st z = r78;
    goto L21();
  L113(r90, dx31):
    st z = dx31;
    goto L27();
  L114():
    dr30 = tryDispatchBuiltin.0("$<-", l3, "");
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L116() else L115("", dr30);
  L115(r88, l5):
    r91 = `$<-`(l5, <sym R>, "");
    goto L113(r88, r91);
  L118():
    r93 = dyn class__(l6, NULL, "vignette");
    check L119() else D33();
  D26():
    deopt 117 [];
  D33():
    deopt 149 ["vignette", r93];
  L104():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L24(dx20);
  L105():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      p10 = prom<V +>{
        sQuote = ldf sQuote;
        p9 = prom<V +>{
          topic7 = ld topic;
          topic8 = force? topic7;
          checkMissing(topic8);
          return topic8;
        };
        r64 = dyn sQuote(p9);
        return r64;
      };
      p13 = prom<V +>{
        sQuote1 = ldf sQuote;
        p12 = prom<V +>{
          file_path1 = ldf `file.path`;
          p11 = prom<V +>{
            vinfo26 = ld vinfo;
            vinfo27 = force? vinfo26;
            checkMissing(vinfo27);
            c22 = `is.object`(vinfo27);
            if c22 then L1() else L2(vinfo27);
          L0(dx23):
            return dx23;
          L1():
            dr22 = tryDispatchBuiltin.1("[", vinfo27);
            dc11 = getTryDispatchBuiltinDispatched(dr22);
            if dc11 then L3() else L2(dr22);
          L2(vinfo29):
            pos8 = ld pos;
            pos9 = force? pos8;
            __11 = ldf `[` in base;
            r66 = dyn __11(vinfo29, pos9, "Dir");
            goto L0(r66);
          L3():
            dx22 = getTryDispatchBuiltinValue(dr22);
            goto L0(dx22);
          };
          r68 = dyn file_path1(p11, "doc");
          return r68;
        };
        r70 = dyn sQuote1(p12);
        return r70;
      };
      r72 = dyn gettextf("vignette %s found more than once,\nusing the one found in %s", p10, p13);
      return r72;
    };
    r74 = dyn warning[, `call.`, domain](p14, FALSE, NA_LGL);
    check L106() else D27();
  L116():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L113("", dx30);
  L119():
    st z = r93;
    z8 = ld z;
    check L120() else D34();
  D27():
    deopt 123 [r74];
  D34():
    deopt 151 [z8];
  L106():
    goto L25();
  L120():
    z9 = force? z8;
    checkMissing(z9);
    popenv;
    return z9;
  }
}