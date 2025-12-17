fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner340200326;
    st format_native_routine_registration_db_for_skeleton = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner340200326(nrdb, align, include_declarations) {
  (reg nrdb:*, reg align:*, reg include_declarations:*) -+> V { var nrdb:*, var align:*, reg align_isMissing:L, reg align_orDefault:*, var include_declarations:*, reg include_declarations_isMissing:L, reg include_declarations_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nrdb1:*, reg nrdb2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg r7:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg nrdb3:*, reg nrdb4:V, reg attr:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg nrdb5:*, reg nrdb6:V, reg attr1:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg nrdb7:*, reg nrdb8:V, reg attr2:cls, reg r16:V, reg split:cls, reg nrdb9:*, reg nrdb10:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r17:V, reg p:p(V +), reg factor:cls, reg nrdb13:*, reg nrdb14:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r19:V, reg p1:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg c3:cls, reg r23:V, reg p2:p(V +), reg r25:V, reg p3:p(V +), reg r27:V, reg vapply:cls, reg nrdb17:*, reg nrdb18:V, reg p4:p(V +), reg NROW:*, reg NROW1:V, reg p5:p(V +), reg r30:V, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg nrdb19:*, reg nrdb20:V, reg names:cls, reg r34:V, reg substring:cls, reg nms:*, reg nms1:V, reg p6:p(V +), reg r36:V, reg Map:cls, reg r37:cls, reg p7:p(V +), reg nrdb21:*, reg nrdb22:V, reg c4:L, reg nrdb24:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg has:*, reg has1:V, reg __2:cls, reg r39:V, reg p8:p(V +), reg entries:*, reg entries1:V, reg c5:L, reg entries3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg has2:*, reg has3:V, reg __3:cls, reg r41:V, reg p9:p(V +), reg r43:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r44:V, reg r45:V, reg c6:cls, reg r46:V, reg include_declarations1:*, reg include_declarations2:V, reg c7:L, reg r47:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg r49:V, reg NROW2:cls, reg nrdb25:*, reg nrdb26:V, reg c8:L, reg nrdb28:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r50:V, reg p10:p(V +), reg r52:V, reg c9:L, reg sapply:cls, reg y:*, reg y1:V, reg c10:L, reg y3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r53:V, reg p11:p(V +), reg r55:cls, reg p12:p(V +), reg r57:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r58:V, reg r59:V, reg paste0:cls, reg y4:*, reg y5:V, reg c11:L, reg y7:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r60:V, reg p13:p(V +), reg args:*, reg args1:V, reg p14:p(V +), reg r63:V, reg c12:cls, reg r64:V, reg r65:V, reg NROW3:cls, reg nrdb29:*, reg nrdb30:V, reg c13:L, reg nrdb32:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r66:V, reg p15:p(V +), reg r68:V, reg c14:L, reg sapply1:cls, reg y8:*, reg y9:V, reg c15:L, reg y11:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r69:V, reg p16:p(V +), reg r71:cls, reg p17:p(V +), reg r73:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r74:V, reg r75:V, reg paste1:cls, reg y12:*, reg y13:V, reg c16:L, reg y15:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r76:V, reg p18:p(V +), reg args2:*, reg args3:V, reg p19:p(V +), reg r79:V, reg c17:cls, reg r80:V, reg r81:V, reg NROW4:cls, reg nrdb33:*, reg nrdb34:V, reg c18:L, reg nrdb36:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r82:V, reg p20:p(V +), reg r84:V, reg c19:L, reg sapply2:cls, reg y16:*, reg y17:V, reg c20:L, reg y19:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r85:V, reg p21:p(V +), reg r87:cls, reg p22:p(V +), reg r89:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r90:V, reg r91:V, reg paste2:cls, reg y20:*, reg y21:V, reg c21:L, reg y23:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r92:V, reg p23:p(V +), reg args4:*, reg args5:V, reg p24:p(V +), reg r95:V, reg c22:cls, reg r96:V, reg r97:V, reg NROW5:cls, reg nrdb37:*, reg nrdb38:V, reg c23:L, reg nrdb40:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg r98:V, reg p25:p(V +), reg r100:V, reg c24:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r101:V, reg r102:V, reg paste3:cls, reg y24:*, reg y25:V, reg c25:L, reg y27:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg r103:V, reg p26:p(V +), reg r105:V, reg c26:cls, reg r106:V, reg r107:V, reg c27:cls, reg r108:V, reg NROW6:cls, reg nrdb41:*, reg nrdb42:V, reg c28:L, reg nrdb44:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg r110:V, reg p27:p(V +), reg r112:V, reg c29:L, reg c30:V, reg NROW7:cls, reg nrdb45:*, reg nrdb46:V, reg c32:L, reg nrdb48:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg r113:V, reg p28:p(V +), reg r115:V, reg c33:L, reg c34:V, reg c36:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r116:V, reg r117:V, reg c37:cls, reg r118:V, reg r119:V, reg NROW8:cls, reg nrdb49:*, reg nrdb50:V, reg c38:L, reg nrdb52:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg r120:V, reg p29:p(V +), reg r122:V, reg c39:L, reg character1:cls, reg r123:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r124:V, reg r125:V, reg headers:*, reg headers1:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r126:V, reg r127:V, reg symbols:*, reg symbols1:V, reg length1:cls, reg r128:V, reg c40:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r129:V, reg r130:V, reg strwrap:cls, reg symbols2:*, reg symbols3:V, reg p30:p(V +), reg r132:V, reg c41:cls, reg r133:V, reg r134:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r135:V, reg r136:V, reg dups:*, reg dups1:V, reg length2:cls, reg r137:V, reg c42:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r138:V, reg r139:V, reg strwrap1:cls, reg dups2:*, reg dups3:V, reg p31:p(V +), reg r141:V, reg c43:cls, reg r142:V, reg r143:V, reg decls:*, reg decls1:V, reg unlist:cls, reg blocks:*, reg blocks1:V, reg p32:p(V +), reg r145:V, reg sprintf:cls, reg gsub:cls, reg package:*, reg package1:V, reg p33:p(V +), reg r147:V, reg p34:p(V +), reg r149:V, reg sprintf1:cls, reg paste4:cls, reg ifelse:cls, reg has4:*, reg has5:V, reg p35:p(V +), reg paste5:cls, reg entries4:*, reg entries5:V, reg p36:p(V +), reg r152:V, reg p37:p(V +), reg r154:V, reg p38:p(V +), reg r156:V, reg p39:p(V +), reg r158:V, reg c44:cls, reg r159:V |
    mkenv;
    st nrdb = nrdb;
    align_isMissing = missing.0(align);
    if align_isMissing then L0(TRUE) else L0(align);
  L0(align_orDefault):
    st align = align_orDefault;
    include_declarations_isMissing = missing.0(include_declarations);
    if include_declarations_isMissing then L1(FALSE) else L1(include_declarations);
  L1(include_declarations_orDefault):
    st include_declarations = include_declarations_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L39() else L40();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L43() else L3();
  L39():
    nrdb1 = ld nrdb;
    check L41() else D0();
  L40():
    r = dyn base(<sym nrdb>);
    goto L2(r);
  D0():
    deopt 2 [nrdb1];
  L3():
    r7 = clos inner594079394;
    st fmt1 = r7;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L48() else L49();
  L41():
    nrdb2 = force? nrdb1;
    checkMissing(nrdb2);
    length = ldf length in base;
    r2 = dyn length(nrdb2);
    check L42() else D1();
  L43():
    character = ldf character;
    check L44() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  L5(r9):
    st package = r9;
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L52() else L53();
  L42():
    goto L2(r2);
  L44():
    r4 = dyn character();
    check L45() else D3();
  L48():
    nrdb3 = ld nrdb;
    check L50() else D4();
  L49():
    r8 = dyn base1(<sym nrdb>, "package");
    goto L5(r8);
  D3():
    deopt 9 [r4];
  D4():
    deopt 18 [nrdb3];
  L6(r12):
    st dups = r12;
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L56() else L57();
  L45():
    popenv;
    return r4;
  L50():
    nrdb4 = force? nrdb3;
    checkMissing(nrdb4);
    attr = ldf attr in base;
    r10 = dyn attr(nrdb4, "package");
    check L51() else D5();
  L52():
    nrdb5 = ld nrdb;
    check L54() else D6();
  L53():
    r11 = dyn base2(<sym nrdb>, "duplicates");
    goto L6(r11);
  D5():
    deopt 22 [r10];
  D6():
    deopt 26 [nrdb5];
  L7(r15):
    st symbols = r15;
    split = ldf split;
    check L60() else D10();
  L51():
    goto L5(r10);
  L54():
    nrdb6 = force? nrdb5;
    checkMissing(nrdb6);
    attr1 = ldf attr in base;
    r13 = dyn attr1(nrdb6, "duplicates");
    check L55() else D7();
  L56():
    nrdb7 = ld nrdb;
    check L58() else D8();
  L57():
    r14 = dyn base3(<sym nrdb>, "symbols");
    goto L7(r14);
  D7():
    deopt 30 [r13];
  D8():
    deopt 34 [nrdb7];
  D10():
    deopt 41 [];
  L55():
    goto L6(r13);
  L58():
    nrdb8 = force? nrdb7;
    checkMissing(nrdb8);
    attr2 = ldf attr in base;
    r16 = dyn attr2(nrdb8, "symbols");
    check L59() else D9();
  L60():
    p = prom<V +>{
      nrdb9 = ld nrdb;
      nrdb10 = force? nrdb9;
      checkMissing(nrdb10);
      c1 = `is.object`(nrdb10);
      if c1 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", nrdb10);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r17 = dyn __(nrdb10, <missing>, -1, FALSE);
      goto L0(r17);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      factor = ldf factor;
      p1 = prom<V +>{
        nrdb13 = ld nrdb;
        nrdb14 = force? nrdb13;
        checkMissing(nrdb14);
        c2 = `is.object`(nrdb14);
        if c2 then L1() else L2();
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", nrdb14);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2();
      L2():
        __1 = ldf `[` in base;
        r19 = dyn __1(nrdb14, <missing>, 1);
        goto L0(r19);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p2 = prom<V +>{
        sym4 = ldf c;
        base4 = ldf c in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r22):
        return r22;
      L1():
        c3 = ldf c in base;
        r23 = dyn c3(".C", ".Call", ".Fortran", ".External");
        goto L0(r23);
      L2():
        r21 = dyn base4(".C", ".Call", ".Fortran", ".External");
        goto L0(r21);
      };
      r25 = dyn factor[, levels](p1, p2);
      return r25;
    };
    r27 = dyn split(p, p3);
    check L61() else D11();
  D9():
    deopt 38 [r16];
  D11():
    deopt 44 [r27];
  L59():
    goto L7(r16);
  L61():
    st nrdb = r27;
    vapply = ldf vapply;
    check L62() else D12();
  D12():
    deopt 47 [];
  L62():
    p4 = prom<V +>{
      nrdb17 = ld nrdb;
      nrdb18 = force? nrdb17;
      checkMissing(nrdb18);
      return nrdb18;
    };
    p5 = prom<V +>{
      NROW = ld NROW;
      NROW1 = force? NROW;
      checkMissing(NROW1);
      return NROW1;
    };
    r30 = dyn vapply(p4, p5, 0);
    check L63() else D13();
  D13():
    deopt 51 [r30];
  L63():
    r31 = `>`(r30, 0);
    st has = r31;
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  L8(r33):
    st nms = r33;
    substring = ldf substring;
    check L68() else D16();
  L64():
    nrdb19 = ld nrdb;
    check L66() else D14();
  L65():
    r32 = dyn base5(<sym nrdb>);
    goto L8(r32);
  D14():
    deopt 57 [nrdb19];
  D16():
    deopt 63 [];
  L66():
    nrdb20 = force? nrdb19;
    checkMissing(nrdb20);
    names = ldf names in base;
    r34 = dyn names(nrdb20);
    check L67() else D15();
  L68():
    p6 = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    r36 = dyn substring(p6, 2);
    check L69() else D17();
  D15():
    deopt 60 [r34];
  D17():
    deopt 66 [r36];
  L67():
    goto L8(r34);
  L69():
    st entries = r36;
    Map = ldf Map;
    check L70() else D18();
  D18():
    deopt 69 [];
  L70():
    p7 = prom<V +>{
      r37 = clos inner594079394;
      return r37;
    };
    p8 = prom<V +>{
      nrdb21 = ld nrdb;
      nrdb22 = force? nrdb21;
      checkMissing(nrdb22);
      c4 = `is.object`(nrdb22);
      if c4 then L1() else L2(nrdb22);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", nrdb22);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(nrdb24):
      has = ld has;
      has1 = force? has;
      __2 = ldf `[` in base;
      r39 = dyn __2(nrdb24, has1);
      goto L0(r39);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p9 = prom<V +>{
      entries = ld entries;
      entries1 = force? entries;
      checkMissing(entries1);
      c5 = `is.object`(entries1);
      if c5 then L1() else L2(entries1);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", entries1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(entries3):
      has2 = ld has;
      has3 = force? has2;
      __3 = ldf `[` in base;
      r41 = dyn __3(entries3, has3);
      goto L0(r41);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r43 = dyn Map(p7, p8, p9);
    check L71() else D19();
  D19():
    deopt 73 [r43];
  L71():
    st blocks = r43;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  L9(r45):
    st decls = r45;
    include_declarations1 = ld include_declarations;
    check L75() else D21();
  L72():
    c6 = ldf c in base;
    r46 = dyn c6("/* FIXME: ", "   Add declarations for the native routines registered below.", "*/");
    check L74() else D20();
  L73():
    r44 = dyn base6("/* FIXME: ", "   Add declarations for the native routines registered below.", "*/");
    goto L9(r44);
  D20():
    deopt 81 [r46];
  D21():
    deopt 83 [include_declarations1];
  L74():
    goto L9(r46);
  L75():
    include_declarations2 = force? include_declarations1;
    checkMissing(include_declarations2);
    c7 = `as.logical`(include_declarations2);
    if c7 then L76() else L10();
  L10():
    goto L24();
  L24():
    NROW6 = ldf NROW;
    check L123() else D49();
  L76():
    r47 = clos inner2644707622;
    st prepare = r47;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L77() else L78();
  D49():
    deopt 195 [];
  L11(r49):
    st decls = r49;
    goto L24();
  L77():
    NROW2 = ldf NROW;
    check L79() else D22();
  L78():
    r48 = dyn base7("/* FIXME: ", "   Check these declarations against the C/Fortran source code.", "*/", <lang if(NROW(`<-`(y, `$`(nrdb, .C))), {
        `<-`(args, sapply(`$`(y, n), function((n=), if(`>=`(n, 0.0), prepare(n), "/* FIXME */"), NULL)));
        c("", "/* .C calls */", paste0("extern void ", `$`(y, s), "(", args, ");"))
      })>, <lang if(NROW(`<-`(y, `$`(nrdb, .Call))), {
        `<-`(args, sapply(`$`(y, n), function((n=), if(`>=`(n, 0.0), prepare(n, "SEXP"), "/* FIXME */"), NULL)));
        c("", "/* .Call calls */", paste0("extern SEXP ", `$`(y, s), "(", args, ");"))
      })>, <lang if(NROW(`<-`(y, `$`(nrdb, .Fortran))), {
        `<-`(args, sapply(`$`(y, n), function((n=), if(`>=`(n, 0.0), prepare(n), "/* FIXME */"), NULL)));
        c("", "/* .Fortran calls */", paste0("extern void F77_NAME(", `$`(y, s), ")(", args, ");"))
      })>, <lang if(NROW(`<-`(y, `$`(nrdb, .External))), c("", "/* .External calls */", paste0("extern SEXP ", `$`(y, s), "(SEXP);")))>);
    goto L11(r48);
  L123():
    p27 = prom<V +>{
      nrdb41 = ld nrdb;
      nrdb42 = force? nrdb41;
      checkMissing(nrdb42);
      c28 = `is.object`(nrdb42);
      if c28 then L1() else L2(nrdb42);
    L0(dx31):
      return dx31;
    L1():
      dr30 = tryDispatchBuiltin.1("$", nrdb42);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(nrdb44):
      r110 = `$`(nrdb44, <sym .Call>);
      goto L0(r110);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx30);
    };
    r112 = dyn NROW6(p27);
    check L124() else D50();
  D22():
    deopt 94 [];
  D50():
    deopt 197 [r112];
  L79():
    p10 = prom<V +>{
      nrdb25 = ld nrdb;
      nrdb26 = force? nrdb25;
      checkMissing(nrdb26);
      c8 = `is.object`(nrdb26);
      if c8 then L1() else L2(nrdb26);
    L0(dx9):
      st y = dx9;
      invisible.0();
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", nrdb26);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(nrdb28):
      r50 = `$`(nrdb28, <sym .C>);
      goto L0(r50);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r52 = dyn NROW2(p10);
    check L80() else D23();
  L124():
    c29 = `as.logical`(r112);
    if c29 then L25(c29) else L125();
  D23():
    deopt 96 [r52];
  L25(c30):
    c36 = `as.logical`(c30);
    if c36 then L129() else L26();
  L80():
    c9 = `as.logical`(r52);
    if c9 then L81() else L12();
  L125():
    NROW7 = ldf NROW;
    check L126() else D51();
  D51():
    deopt 199 [c29];
  L12():
    goto L14(NULL);
  L14(r65):
    NROW3 = ldf NROW;
    check L90() else D29();
  L26():
    NROW8 = ldf NROW;
    check L134() else D54();
  L28(r119):
    st headers = r119;
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L140() else L141();
  L81():
    sapply = ldf sapply;
    check L82() else D24();
  L126():
    p28 = prom<V +>{
      nrdb45 = ld nrdb;
      nrdb46 = force? nrdb45;
      checkMissing(nrdb46);
      c32 = `is.object`(nrdb46);
      if c32 then L1() else L2(nrdb46);
    L0(dx33):
      return dx33;
    L1():
      dr32 = tryDispatchBuiltin.1("$", nrdb46);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(nrdb48):
      r113 = `$`(nrdb48, <sym .External>);
      goto L0(r113);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx32);
    };
    r115 = dyn NROW7(p28);
    check L127() else D52();
  L129():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L130() else L131();
  D24():
    deopt 98 [];
  D29():
    deopt 120 [];
  D52():
    deopt 201 [c29, r115];
  D54():
    deopt 210 [];
  L27(r117):
    goto L28(r117);
  L30(r125):
    popenv;
    return r125;
  L82():
    p11 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      c10 = `is.object`(y1);
      if c10 then L1() else L2(y1);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", y1);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(y3):
      r53 = `$`(y3, <sym n>);
      goto L0(r53);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p12 = prom<V +>{
      r55 = clos inner4266987626;
      return r55;
    };
    r57 = dyn sapply(p11, p12);
    check L83() else D25();
  L90():
    p15 = prom<V +>{
      nrdb29 = ld nrdb;
      nrdb30 = force? nrdb29;
      checkMissing(nrdb30);
      c13 = `is.object`(nrdb30);
      if c13 then L1() else L2(nrdb30);
    L0(dx15):
      st y = dx15;
      invisible.0();
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("$", nrdb30);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(nrdb32):
      r66 = `$`(nrdb32, <sym .Call>);
      goto L0(r66);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r68 = dyn NROW3(p15);
    check L91() else D30();
  L127():
    c33 = `as.logical`(r115);
    c34 = `||`(c29, c33);
    goto L25(c34);
  L130():
    c37 = ldf c in base;
    r118 = dyn c37("#include <R.h>", "#include <Rinternals.h>");
    check L132() else D53();
  L131():
    r116 = dyn base12("#include <R.h>", "#include <Rinternals.h>");
    goto L27(r116);
  L134():
    p29 = prom<V +>{
      nrdb49 = ld nrdb;
      nrdb50 = force? nrdb49;
      checkMissing(nrdb50);
      c38 = `is.object`(nrdb50);
      if c38 then L1() else L2(nrdb50);
    L0(dx35):
      return dx35;
    L1():
      dr34 = tryDispatchBuiltin.1("$", nrdb50);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(nrdb52):
      r120 = `$`(nrdb52, <sym .Fortran>);
      goto L0(r120);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx34);
    };
    r122 = dyn NROW8(p29);
    check L135() else D55();
  L140():
    headers = ld headers;
    check L142() else D58();
  L141():
    r124 = dyn base13(<sym headers>, "#include <stdlib.h> // for NULL", "#include <R_ext/Rdynload.h>", "", <lang if(length(symbols), {
        c("/*", "  The following symbols/expressions for .NAME have been omitted", "", strwrap(symbols, indent=4.0, exdent=4.0), "", "  Most likely possible values need to be added below.", "*/", "")
      })>, <lang if(length(dups), {
        c("/*", "  The following name(s) appear with different usages", "  e.g., with different numbers of arguments:", "", strwrap(dups, indent=4.0, exdent=4.0), "", "  This needs to be resolved in the tables and any declarations.", "*/", "")
      })>, <sym decls>, "", <lang unlist(blocks, use.names=FALSE)>, <lang sprintf("void R_init_%s(DllInfo *dll)", gsub(".", "_", package, fixed=TRUE))>, "{", <lang sprintf("    R_registerRoutines(dll, %s);", paste0(ifelse(has, paste0(entries, "Entries"), "NULL"), collapse=", "))>, "    R_useDynamicSymbols(dll, FALSE);", "}");
    goto L30(r124);
  D25():
    deopt 101 [r57];
  D30():
    deopt 122 [r68];
  D53():
    deopt 208 [r118];
  D55():
    deopt 212 [r122];
  D58():
    deopt 221 [headers];
  L83():
    st args = r57;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L84() else L85();
  L91():
    c14 = `as.logical`(r68);
    if c14 then L92() else L15();
  L132():
    goto L27(r118);
  L135():
    c39 = `as.logical`(r122);
    if c39 then L136() else L29();
  L142():
    headers1 = force? headers;
    checkMissing(headers1);
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L143() else L144();
  L13(r59):
    goto L14(r59);
  L15():
    goto L17(NULL);
  L17(r81):
    NROW4 = ldf NROW;
    check L101() else D36();
  L29():
    character1 = ldf character;
    check L138() else D56();
  L31(r127):
    c40 = `as.logical`(r127);
    if c40 then L147() else L32();
  L84():
    paste0 = ldf paste0;
    check L86() else D26();
  L85():
    r58 = dyn base8("", "/* .C calls */", <lang paste0("extern void ", `$`(y, s), "(", args, ");")>);
    goto L13(r58);
  L92():
    sapply1 = ldf sapply;
    check L93() else D31();
  L136():
    goto L28("#include <R_ext/RS.h>");
  L143():
    symbols = ld symbols;
    check L145() else D59();
  L144():
    r126 = dyn base14(<sym symbols>);
    goto L31(r126);
  D26():
    deopt 108 [];
  D31():
    deopt 124 [];
  D36():
    deopt 146 [];
  D56():
    deopt 216 [];
  D59():
    deopt 228 [symbols];
  L32():
    goto L34(NULL);
  L34(r134):
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L154() else L155();
  L86():
    p13 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      c11 = `is.object`(y5);
      if c11 then L1() else L2(y5);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", y5);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(y7):
      r60 = `$`(y7, <sym s>);
      goto L0(r60);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p14 = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    r63 = dyn paste0("extern void ", p13, "(", p14, ");");
    check L87() else D27();
  L93():
    p16 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      c15 = `is.object`(y9);
      if c15 then L1() else L2(y9);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("$", y9);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(y11):
      r69 = `$`(y11, <sym n>);
      goto L0(r69);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p17 = prom<V +>{
      r71 = clos inner4266987626;
      return r71;
    };
    r73 = dyn sapply1(p16, p17);
    check L94() else D32();
  L101():
    p20 = prom<V +>{
      nrdb33 = ld nrdb;
      nrdb34 = force? nrdb33;
      checkMissing(nrdb34);
      c18 = `is.object`(nrdb34);
      if c18 then L1() else L2(nrdb34);
    L0(dx21):
      st y = dx21;
      invisible.0();
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("$", nrdb34);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(nrdb36):
      r82 = `$`(nrdb36, <sym .Fortran>);
      goto L0(r82);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    r84 = dyn NROW4(p20);
    check L102() else D37();
  L138():
    r123 = dyn character1();
    check L139() else D57();
  L145():
    symbols1 = force? symbols;
    checkMissing(symbols1);
    length1 = ldf length in base;
    r128 = dyn length1(symbols1);
    check L146() else D60();
  L147():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L148() else L149();
  D27():
    deopt 114 [r63];
  D32():
    deopt 127 [r73];
  D37():
    deopt 148 [r84];
  D57():
    deopt 217 [r123];
  D60():
    deopt 231 [r128];
  L33(r130):
    goto L34(r130);
  L35(r136):
    c42 = `as.logical`(r136);
    if c42 then L158() else L36();
  L87():
    c12 = ldf c in base;
    r64 = dyn c12("", "/* .C calls */", r63);
    check L88() else D28();
  L94():
    st args = r73;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L95() else L96();
  L102():
    c19 = `as.logical`(r84);
    if c19 then L103() else L18();
  L139():
    goto L28(r123);
  L146():
    goto L31(r128);
  L148():
    strwrap = ldf strwrap;
    check L150() else D61();
  L149():
    r129 = dyn base15("/*", "  The following symbols/expressions for .NAME have been omitted", "", <lang strwrap(symbols, indent=4.0, exdent=4.0)>, "", "  Most likely possible values need to be added below.", "*/", "");
    goto L33(r129);
  L154():
    dups = ld dups;
    check L156() else D64();
  L155():
    r135 = dyn base16(<sym dups>);
    goto L35(r135);
  D28():
    deopt 116 [r64];
  D61():
    deopt 238 [];
  D64():
    deopt 255 [dups];
  L16(r75):
    goto L17(r75);
  L18():
    goto L20(NULL);
  L20(r97):
    NROW5 = ldf NROW;
    check L112() else D43();
  L36():
    goto L38(NULL);
  L38(r143):
    decls = ld decls;
    check L165() else D69();
  L88():
    goto L13(r64);
  L95():
    paste1 = ldf paste0;
    check L97() else D33();
  L96():
    r74 = dyn base9("", "/* .Call calls */", <lang paste0("extern SEXP ", `$`(y, s), "(", args, ");")>);
    goto L16(r74);
  L103():
    sapply2 = ldf sapply;
    check L104() else D38();
  L150():
    p30 = prom<V +>{
      symbols2 = ld symbols;
      symbols3 = force? symbols2;
      checkMissing(symbols3);
      return symbols3;
    };
    r132 = dyn strwrap[, indent, exdent](p30, 4.0, 4.0);
    check L151() else D62();
  L156():
    dups1 = force? dups;
    checkMissing(dups1);
    length2 = ldf length in base;
    r137 = dyn length2(dups1);
    check L157() else D65();
  L158():
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L159() else L160();
  D33():
    deopt 134 [];
  D38():
    deopt 150 [];
  D43():
    deopt 172 [];
  D62():
    deopt 244 [r132];
  D65():
    deopt 258 [r137];
  D69():
    deopt 281 [decls];
  L37(r139):
    goto L38(r139);
  L97():
    p18 = prom<V +>{
      y12 = ld y;
      y13 = force? y12;
      checkMissing(y13);
      c16 = `is.object`(y13);
      if c16 then L1() else L2(y13);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("$", y13);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(y15):
      r76 = `$`(y15, <sym s>);
      goto L0(r76);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    p19 = prom<V +>{
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      return args3;
    };
    r79 = dyn paste1("extern SEXP ", p18, "(", p19, ");");
    check L98() else D34();
  L104():
    p21 = prom<V +>{
      y16 = ld y;
      y17 = force? y16;
      checkMissing(y17);
      c20 = `is.object`(y17);
      if c20 then L1() else L2(y17);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("$", y17);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(y19):
      r85 = `$`(y19, <sym n>);
      goto L0(r85);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    p22 = prom<V +>{
      r87 = clos inner4266987626;
      return r87;
    };
    r89 = dyn sapply2(p21, p22);
    check L105() else D39();
  L112():
    p25 = prom<V +>{
      nrdb37 = ld nrdb;
      nrdb38 = force? nrdb37;
      checkMissing(nrdb38);
      c23 = `is.object`(nrdb38);
      if c23 then L1() else L2(nrdb38);
    L0(dx27):
      st y = dx27;
      invisible.0();
      return dx27;
    L1():
      dr26 = tryDispatchBuiltin.1("$", nrdb38);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(nrdb40):
      r98 = `$`(nrdb40, <sym .External>);
      goto L0(r98);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx26);
    };
    r100 = dyn NROW5(p25);
    check L113() else D44();
  L151():
    c41 = ldf c in base;
    r133 = dyn c41("/*", "  The following symbols/expressions for .NAME have been omitted", "", r132, "", "  Most likely possible values need to be added below.", "*/", "");
    check L152() else D63();
  L157():
    goto L35(r137);
  L159():
    strwrap1 = ldf strwrap;
    check L161() else D66();
  L160():
    r138 = dyn base17("/*", "  The following name(s) appear with different usages", "  e.g., with different numbers of arguments:", "", <lang strwrap(dups, indent=4.0, exdent=4.0)>, "", "  This needs to be resolved in the tables and any declarations.", "*/", "");
    goto L37(r138);
  L165():
    decls1 = force? decls;
    checkMissing(decls1);
    unlist = ldf unlist;
    check L166() else D70();
  D34():
    deopt 140 [r79];
  D39():
    deopt 153 [r89];
  D44():
    deopt 174 [r100];
  D63():
    deopt 250 [r133];
  D66():
    deopt 266 [];
  D70():
    deopt 285 [];
  L98():
    c17 = ldf c in base;
    r80 = dyn c17("", "/* .Call calls */", r79);
    check L99() else D35();
  L105():
    st args = r89;
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L106() else L107();
  L113():
    c24 = `as.logical`(r100);
    if c24 then L114() else L21();
  L152():
    goto L33(r133);
  L161():
    p31 = prom<V +>{
      dups2 = ld dups;
      dups3 = force? dups2;
      checkMissing(dups3);
      return dups3;
    };
    r141 = dyn strwrap1[, indent, exdent](p31, 4.0, 4.0);
    check L162() else D67();
  L166():
    p32 = prom<V +>{
      blocks = ld blocks;
      blocks1 = force? blocks;
      checkMissing(blocks1);
      return blocks1;
    };
    r145 = dyn unlist[, `use.names`](p32, FALSE);
    check L167() else D71();
  D35():
    deopt 142 [r80];
  D67():
    deopt 272 [r141];
  D71():
    deopt 289 [r145];
  L19(r91):
    goto L20(r91);
  L21():
    goto L23(NULL);
  L23(r107):
    c27 = ldf c in base;
    r108 = dyn c27("/* FIXME: ", "   Check these declarations against the C/Fortran source code.", "*/", r65, r81, r97, r107);
    check L121() else D48();
  L99():
    goto L16(r80);
  L106():
    paste2 = ldf paste0;
    check L108() else D40();
  L107():
    r90 = dyn base10("", "/* .Fortran calls */", <lang paste0("extern void F77_NAME(", `$`(y, s), ")(", args, ");")>);
    goto L19(r90);
  L114():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L115() else L116();
  L162():
    c43 = ldf c in base;
    r142 = dyn c43("/*", "  The following name(s) appear with different usages", "  e.g., with different numbers of arguments:", "", r141, "", "  This needs to be resolved in the tables and any declarations.", "*/", "");
    check L163() else D68();
  L167():
    sprintf = ldf sprintf;
    check L168() else D72();
  D40():
    deopt 160 [];
  D48():
    deopt 190 [r108];
  D68():
    deopt 278 [r142];
  D72():
    deopt 291 [];
  L22(r102):
    goto L23(r102);
  L108():
    p23 = prom<V +>{
      y20 = ld y;
      y21 = force? y20;
      checkMissing(y21);
      c21 = `is.object`(y21);
      if c21 then L1() else L2(y21);
    L0(dx25):
      return dx25;
    L1():
      dr24 = tryDispatchBuiltin.1("$", y21);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(y23):
      r92 = `$`(y23, <sym s>);
      goto L0(r92);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx24);
    };
    p24 = prom<V +>{
      args4 = ld args;
      args5 = force? args4;
      checkMissing(args5);
      return args5;
    };
    r95 = dyn paste2("extern void F77_NAME(", p23, ")(", p24, ");");
    check L109() else D41();
  L115():
    paste3 = ldf paste0;
    check L117() else D45();
  L116():
    r101 = dyn base11("", "/* .External calls */", <lang paste0("extern SEXP ", `$`(y, s), "(SEXP);")>);
    goto L22(r101);
  L121():
    goto L11(r108);
  L163():
    goto L37(r142);
  L168():
    p34 = prom<V +>{
      gsub = ldf gsub;
      p33 = prom<V +>{
        package = ld package;
        package1 = force? package;
        checkMissing(package1);
        return package1;
      };
      r147 = dyn gsub[, , , fixed](".", "_", p33, TRUE);
      return r147;
    };
    r149 = dyn sprintf("void R_init_%s(DllInfo *dll)", p34);
    check L169() else D73();
  D41():
    deopt 166 [r95];
  D45():
    deopt 180 [];
  D73():
    deopt 294 [r149];
  L109():
    c22 = ldf c in base;
    r96 = dyn c22("", "/* .Fortran calls */", r95);
    check L110() else D42();
  L117():
    p26 = prom<V +>{
      y24 = ld y;
      y25 = force? y24;
      checkMissing(y25);
      c25 = `is.object`(y25);
      if c25 then L1() else L2(y25);
    L0(dx29):
      return dx29;
    L1():
      dr28 = tryDispatchBuiltin.1("$", y25);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(y27):
      r103 = `$`(y27, <sym s>);
      goto L0(r103);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx28);
    };
    r105 = dyn paste3("extern SEXP ", p26, "(SEXP);");
    check L118() else D46();
  L169():
    sprintf1 = ldf sprintf;
    check L170() else D74();
  D42():
    deopt 168 [r96];
  D46():
    deopt 184 [r105];
  D74():
    deopt 297 [];
  L110():
    goto L19(r96);
  L118():
    c26 = ldf c in base;
    r106 = dyn c26("", "/* .External calls */", r105);
    check L119() else D47();
  L170():
    p39 = prom<V +>{
      paste4 = ldf paste0;
      p38 = prom<V +>{
        ifelse = ldf ifelse;
        p35 = prom<V +>{
          has4 = ld has;
          has5 = force? has4;
          checkMissing(has5);
          return has5;
        };
        p37 = prom<V +>{
          paste5 = ldf paste0;
          p36 = prom<V +>{
            entries4 = ld entries;
            entries5 = force? entries4;
            checkMissing(entries5);
            return entries5;
          };
          r152 = dyn paste5(p36, "Entries");
          return r152;
        };
        r154 = dyn ifelse(p35, p37, "NULL");
        return r154;
      };
      r156 = dyn paste4[, collapse](p38, ", ");
      return r156;
    };
    r158 = dyn sprintf1("    R_registerRoutines(dll, %s);", p39);
    check L171() else D75();
  D47():
    deopt 186 [r106];
  D75():
    deopt 300 [r158];
  L119():
    goto L22(r106);
  L171():
    c44 = ldf c in base;
    r159 = dyn c44(headers1, "#include <stdlib.h> // for NULL", "#include <R_ext/Rdynload.h>", "", r134, r143, decls1, "", r145, r149, "{", r158, "    R_useDynamicSymbols(dll, FALSE);", "}");
    check L172() else D76();
  D76():
    deopt 304 [r159];
  L172():
    goto L30(r159);
  }
}
fun inner594079394(x, n) {
  (reg x:*, reg n:*) -+> V { var x:*, var n:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg align:*, reg align1:V, reg c:L, reg paste:cls, reg format:cls, reg sprintf:cls, reg x1:*, reg x2:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg format1:cls, reg sprintf1:cls, reg n1:*, reg n2:V, reg r8:V, reg c2:L, reg p3:p(V +), reg x5:*, reg x6:V, reg c3:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r10:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg format2:cls, reg sprintf2:cls, reg x9:*, reg x10:V, reg c4:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r16:V, reg p7:p(V +), reg r18:V, reg p8:p(V +), reg r20:V, reg p9:p(V +), reg r22:V, reg r23:V, reg sprintf3:cls, reg n3:*, reg n4:V, reg r24:V, reg c5:L, reg p10:p(V +), reg x13:*, reg x14:V, reg c6:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r26:V, reg p11:p(V +), reg x17:*, reg x18:V, reg c7:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r28:V, reg p12:p(V +), reg x21:*, reg x22:V, reg c8:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r30:V, reg p13:p(V +), reg r32:V, reg c9:cls, reg r33:V |
    mkenv;
    st x = x;
    st n = n;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    popenv;
    return r1;
  L3():
    align = ld align;
    check L5() else D0();
  L4():
    r = dyn base(<lang if(align, {
        paste(format(sprintf("    {\"%s\",", `[`(x, , 1))), format(sprintf(if(`==`(n, "Fortran"), "(DL_FUNC) &F77_NAME(%s),", "(DL_FUNC) &%s,"), `[`(x, , 1))), format(sprintf("%d},", `[`(x, , 2)), justify="right"))
      }, {
        sprintf(if(`==`(n, "Fortran"), "    {\"%s\", (DL_FUNC) &F77_NAME(%s), %d},", "    {\"%s\", (DL_FUNC) &%s, %d},"), `[`(x, , 1), `[`(x, , 1), `[`(x, , 2))
      })>, "    {NULL, NULL, 0}");
    goto L0(r);
  D0():
    deopt 2 [align];
  L5():
    align1 = force? align;
    checkMissing(align1);
    c = `as.logical`(align1);
    if c then L6() else L1();
  L1():
    sprintf3 = ldf sprintf;
    check L10() else D3();
  L2(r23):
    c9 = ldf c in base;
    r33 = dyn c9(r23, "    {NULL, NULL, 0}");
    check L12() else D5();
  L6():
    paste = ldf paste;
    check L7() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 11 [];
  D5():
    deopt 19 [r33];
  L7():
    p2 = prom<V +>{
      format = ldf format;
      p1 = prom<V +>{
        sprintf = ldf sprintf;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          c1 = `is.object`(x2);
          if c1 then L1() else L2();
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("[", x2);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2();
        L2():
          __ = ldf `[` in base;
          r2 = dyn __(x2, <missing>, 1);
          goto L0(r2);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r4 = dyn sprintf("    {\"%s\",", p);
        return r4;
      };
      r6 = dyn format(p1);
      return r6;
    };
    p6 = prom<V +>{
      format1 = ldf format;
      p5 = prom<V +>{
        sprintf1 = ldf sprintf;
        p3 = prom<V +>{
          n1 = ld n;
          n2 = force? n1;
          checkMissing(n2);
          r8 = `==`(n2, "Fortran");
          c2 = `as.logical`(r8);
          if c2 then L1() else L0();
        L0():
          return "(DL_FUNC) &%s,";
        L1():
          return "(DL_FUNC) &F77_NAME(%s),";
        };
        p4 = prom<V +>{
          x5 = ld x;
          x6 = force? x5;
          checkMissing(x6);
          c3 = `is.object`(x6);
          if c3 then L1() else L2();
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("[", x6);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2();
        L2():
          __1 = ldf `[` in base;
          r10 = dyn __1(x6, <missing>, 1);
          goto L0(r10);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r12 = dyn sprintf1(p3, p4);
        return r12;
      };
      r14 = dyn format1(p5);
      return r14;
    };
    p9 = prom<V +>{
      format2 = ldf format;
      p8 = prom<V +>{
        sprintf2 = ldf sprintf;
        p7 = prom<V +>{
          x9 = ld x;
          x10 = force? x9;
          checkMissing(x10);
          c4 = `is.object`(x10);
          if c4 then L1() else L2();
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("[", x10);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2();
        L2():
          __2 = ldf `[` in base;
          r16 = dyn __2(x10, <missing>, 2);
          goto L0(r16);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r18 = dyn sprintf2("%d},", p7);
        return r18;
      };
      r20 = dyn format2[, justify](p8, "right");
      return r20;
    };
    r22 = dyn paste(p2, p6, p9);
    check L8() else D2();
  L10():
    p10 = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      r24 = `==`(n4, "Fortran");
      c5 = `as.logical`(r24);
      if c5 then L1() else L0();
    L0():
      return "    {\"%s\", (DL_FUNC) &%s, %d},";
    L1():
      return "    {\"%s\", (DL_FUNC) &F77_NAME(%s), %d},";
    };
    p11 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c6 = `is.object`(x14);
      if c6 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", x14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r26 = dyn __3(x14, <missing>, 1);
      goto L0(r26);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p12 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c7 = `is.object`(x18);
      if c7 then L1() else L2();
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", x18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2();
    L2():
      __4 = ldf `[` in base;
      r28 = dyn __4(x18, <missing>, 1);
      goto L0(r28);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p13 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c8 = `is.object`(x22);
      if c8 then L1() else L2();
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", x22);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r30 = dyn __5(x22, <missing>, 2);
      goto L0(r30);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r32 = dyn sprintf3(p10, p11, p12, p13);
    check L11() else D4();
  L12():
    goto L0(r33);
  D2():
    deopt 9 [r22];
  D4():
    deopt 16 [r32];
  L8():
    goto L2(r22);
  L11():
    goto L2(r32);
  }
}
fun inner2644707622(nargs, type) {
  (reg nargs:*, reg type:*) -+> V { var nargs:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg nargs1:*, reg nargs2:V, reg r:V, reg c:L, reg paste:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg type1:*, reg type2:V, reg nargs3:*, reg nargs4:V, reg rep_int:cls, reg r3:V, reg p:p(V +), reg r5:V |
    mkenv;
    st nargs = nargs;
    type_isMissing = missing.0(type);
    if type_isMissing then L0("void *") else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    nargs1 = ld nargs;
    check L2() else D0();
  D0():
    deopt 0 [nargs1];
  L2():
    nargs2 = force? nargs1;
    checkMissing(nargs2);
    r = `>`(nargs2, 0.0);
    c = `as.logical`(r);
    if c then L3() else L1();
  L1():
    popenv;
    return "void";
  L3():
    paste = ldf paste;
    check L4() else D1();
  D1():
    deopt 5 [];
  L4():
    p = prom<V +>{
      sym = ldf `rep.int`;
      base = ldf `rep.int` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      nargs3 = ld nargs;
      nargs4 = force? nargs3;
      checkMissing(nargs4);
      rep_int = ldf `rep.int` in base;
      r3 = dyn rep_int(type2, nargs4);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym type>, <sym nargs>);
      goto L0(r1);
    };
    r5 = dyn paste[, collapse](p, ", ");
    check L5() else D2();
  D2():
    deopt 9 [r5];
  L5():
    popenv;
    return r5;
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg n1:*, reg n2:V, reg r:V, reg c:L, reg prepare:cls, reg n3:*, reg n4:V, reg p:p(V +), reg r2:V |
    mkenv;
    st n = n;
    n1 = ld n;
    check L1() else D0();
  D0():
    deopt 0 [n1];
  L1():
    n2 = force? n1;
    checkMissing(n2);
    r = `>=`(n2, 0.0);
    c = `as.logical`(r);
    if c then L2() else L0();
  L0():
    popenv;
    return "/* FIXME */";
  L2():
    prepare = ldf prepare;
    check L3() else D1();
  D1():
    deopt 5 [];
  L3():
    p = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      return n4;
    };
    r2 = dyn prepare(p);
    check L4() else D2();
  D2():
    deopt 7 [r2];
  L4():
    popenv;
    return r2;
  }
}