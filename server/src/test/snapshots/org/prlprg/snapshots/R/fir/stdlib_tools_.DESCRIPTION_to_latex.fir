fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner558183205;
    st `.DESCRIPTION_to_latex` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner558183205(descfile, outfile, version, writeEncoding) {
  (reg descfile:*, reg outfile:*, reg version:*, reg writeEncoding:*) -+> V { var descfile:*, var outfile:*, var version:*, reg version_isMissing:L, reg version_orDefault:*, var writeEncoding:*, reg writeEncoding_isMissing:L, reg writeEncoding_orDefault:*, reg _gsub_with_transformed_matches:*, reg _gsub_with_transformed_matches1:V, reg r:cls, reg r1:cls, reg r2:cls, reg r3:cls, reg r4:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg _read_description:cls, reg descfile1:*, reg descfile2:V, reg p:p(V +), reg r8:V, reg enc2utf8:cls, reg r9:V, reg desc:*, reg desc1:V, reg c:L, reg desc3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg desc6:V, reg r11:V, reg desc7:*, reg desc8:V, reg nzchar:cls, reg r12:V, reg __:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg outfile1:*, reg outfile2:V, reg c1:L, reg c2:L, reg file:cls, reg outfile3:*, reg outfile4:V, reg p1:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg on_exit:cls, reg r20:V, reg outfile5:*, reg outfile6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg desc9:*, reg desc10:V, reg names:cls, reg r24:V, reg _w_o_:cls, reg fields:*, reg fields1:V, reg p2:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg r27:V, reg c3:cls, reg r28:V, reg p3:p(V +), reg r30:V, reg writeEncoding1:*, reg writeEncoding2:V, reg c4:L, reg c6:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg c9:L, reg r32:V, reg desc11:*, reg desc12:V, reg c10:L, reg c12:L, reg desc14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c14:L, reg dx3:V, reg __1:cls, reg r33:V, reg is_na:cls, reg r34:V, reg r35:V, reg c15:L, reg c16:V, reg c18:L, reg cat:cls, reg out:*, reg out1:V, reg p4:p(V +), reg r37:V, reg desc15:*, reg desc16:V, reg c19:L, reg desc18:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r39:V, reg paste0:cls, reg desc19:*, reg desc20:V, reg c20:L, reg desc22:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r40:V, reg p5:p(V +), reg texify:cls, reg mygsub:cls, reg tit:*, reg tit1:V, reg p6:p(V +), reg r43:V, reg p7:p(V +), reg r45:V, reg p8:p(V +), reg r47:V, reg paste1:cls, reg tit2:*, reg tit3:V, reg p9:p(V +), reg r49:V, reg writeLines:cls, reg tit4:*, reg tit5:V, reg p10:p(V +), reg out2:*, reg out3:V, reg p11:p(V +), reg r52:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg desc23:*, reg desc24:V, reg c21:L, reg desc26:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r55:V, reg is_na1:cls, reg r56:V, reg r57:V, reg c22:L, reg tryCatch:cls, reg ___:cls, reg r58:V, reg r59:cls, reg aar:*, reg aar1:V, reg p12:p(V +), reg r61:V, reg p13:p(V +), reg identity:*, reg identity1:V, reg p14:p(V +), reg r64:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r65:V, reg r66:V, reg aar2:*, reg aar3:V, reg inherits:cls, reg r67:V, reg r68:V, reg c23:L, reg Filter:cls, reg ___1:cls, reg r69:V, reg p15:p(V +), reg aar4:*, reg aar5:V, reg p16:p(V +), reg r72:V, reg format:cls, reg aar6:*, reg aar7:V, reg p17:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r74:V, reg r75:V, reg c24:cls, reg r76:V, reg p18:p(V +), reg r78:V, reg paste2:cls, reg aut:*, reg aut1:V, reg c25:L, reg aut3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r79:V, reg aut6:V, reg r80:V, reg aut7:*, reg aut8:V, reg nzchar1:cls, reg r81:V, reg __5:cls, reg r82:V, reg p19:p(V +), reg r84:V, reg texify1:cls, reg mygsub1:cls, reg aut9:*, reg aut10:V, reg p20:p(V +), reg r86:V, reg p21:p(V +), reg r88:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r89:V, reg r90:V, reg aut11:*, reg aut12:V, reg nzchar2:cls, reg r91:V, reg c26:L, reg paste3:cls, reg aut13:*, reg aut14:V, reg p22:p(V +), reg r93:V, reg writeLines1:cls, reg aut15:*, reg aut16:V, reg p23:p(V +), reg out4:*, reg out5:V, reg p24:p(V +), reg r96:V, reg r97:V, reg r98:V, reg cat1:cls, reg out6:*, reg out7:V, reg p25:p(V +), reg r101:V, reg fields2:*, reg fields3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c27:L, reg x:V, reg f:*, reg f1:V, reg r102:V, reg c28:L, reg desc27:*, reg desc28:V, reg c29:L, reg i10:I, reg desc30:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i12:I, reg dx13:V, reg f2:*, reg f3:V, reg __6:cls, reg r104:V, reg _in_:cls, reg f4:*, reg f5:V, reg p26:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r106:V, reg r107:V, reg c30:cls, reg r108:V, reg p27:p(V +), reg r110:V, reg c31:L, reg mytrim:cls, reg text:*, reg text1:V, reg p28:p(V +), reg r112:V, reg i15:I, reg mygsub2:cls, reg text2:*, reg text3:V, reg p29:p(V +), reg r115:V, reg texify2:cls, reg text4:*, reg text5:V, reg p30:p(V +), reg r117:V, reg myfsub:cls, reg version1:*, reg version2:V, reg p31:p(V +), reg text6:*, reg text7:V, reg p32:p(V +), reg r120:V, reg _in_1:cls, reg f6:*, reg f7:V, reg p33:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r122:V, reg r123:V, reg c32:cls, reg r124:V, reg p34:p(V +), reg r126:V, reg c33:L, reg mytrfm:cls, reg text8:*, reg text9:V, reg p35:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r128:V, reg r129:V, reg texify3:*, reg texify4:V, reg texify5:*, reg texify6:V, reg list:cls, reg r130:V, reg p36:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r132:V, reg r133:V, reg c34:cls, reg r134:V, reg p37:p(V +), reg r136:V, reg i18:I, reg _in_2:cls, reg f8:*, reg f9:V, reg p38:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r139:V, reg r140:V, reg c35:cls, reg r141:V, reg p39:p(V +), reg r143:V, reg c36:L, reg mygsub3:cls, reg text10:*, reg text11:V, reg p40:p(V +), reg r145:V, reg i21:I, reg _in_3:cls, reg f10:*, reg f11:V, reg p41:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r148:V, reg r149:V, reg c37:cls, reg r150:V, reg p42:p(V +), reg r152:V, reg c38:L, reg mygsub4:cls, reg text12:*, reg text13:V, reg p43:p(V +), reg r154:V, reg i24:I, reg f12:*, reg f13:V, reg r156:V, reg c39:L, reg mytrfm1:cls, reg text14:*, reg text15:V, reg p44:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r158:V, reg r159:V, reg identity2:*, reg identity3:V, reg texify7:*, reg texify8:V, reg list1:cls, reg r160:V, reg p45:p(V +), reg sym19:cls, reg base19:cls, reg guard19:L, reg r162:V, reg r163:V, reg c40:cls, reg r164:V, reg p46:p(V +), reg r166:V, reg mygsub5:cls, reg text16:*, reg text17:V, reg p47:p(V +), reg r168:V, reg i27:I, reg paste4:cls, reg text18:*, reg text19:V, reg p48:p(V +), reg r171:V, reg writeLines2:cls, reg paste5:cls, reg texify9:cls, reg f14:*, reg f15:V, reg p49:p(V +), reg r173:V, reg p50:p(V +), reg text20:*, reg text21:V, reg p51:p(V +), reg r176:V, reg p52:p(V +), reg out8:*, reg out9:V, reg p53:p(V +), reg r179:V, reg cat2:cls, reg out10:*, reg out11:V, reg p54:p(V +), reg r181:V |
    mkenv;
    st descfile = descfile;
    st outfile = outfile;
    version_isMissing = missing.0(version);
    if version_isMissing then L0("Unknown") else L0(version);
  L0(version_orDefault):
    st version = version_orDefault;
    writeEncoding_isMissing = missing.0(writeEncoding);
    if writeEncoding_isMissing then L1(TRUE) else L1(writeEncoding);
  L1(writeEncoding_orDefault):
    st writeEncoding = writeEncoding_orDefault;
    _gsub_with_transformed_matches = ld `.gsub_with_transformed_matches`;
    check L41() else D0();
  D0():
    deopt 0 [_gsub_with_transformed_matches];
  L41():
    _gsub_with_transformed_matches1 = force? _gsub_with_transformed_matches;
    checkMissing(_gsub_with_transformed_matches1);
    st mytrfm = _gsub_with_transformed_matches1;
    r = clos inner4027253682;
    st mygsub = r;
    r1 = clos inner4027253682;
    st mypsub = r1;
    r2 = clos inner4027253682;
    st myfsub = r2;
    r3 = clos inner242647277;
    st texify = r3;
    r4 = clos inner2501545716;
    st mytrim = r4;
    sym = ldf enc2utf8;
    base = ldf enc2utf8 in base;
    guard = `==`.4(sym, base);
    if guard then L42() else L43();
  L2(r6):
    st desc = r6;
    desc = ld desc;
    check L47() else D4();
  L42():
    _read_description = ldf `.read_description`;
    check L44() else D1();
  L43():
    r5 = dyn base(<lang .read_description(descfile)>);
    goto L2(r5);
  D1():
    deopt 21 [];
  D4():
    deopt 27 [desc];
  L44():
    p = prom<V +>{
      descfile1 = ld descfile;
      descfile2 = force? descfile1;
      checkMissing(descfile2);
      return descfile2;
    };
    r8 = dyn _read_description(p);
    check L45() else D2();
  L47():
    desc1 = force? desc;
    checkMissing(desc1);
    c = `is.object`(desc1);
    if c then L48() else L49(desc1);
  D2():
    deopt 23 [r8];
  L3(dx1):
    st desc = dx1;
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L55() else L56();
  L45():
    enc2utf8 = ldf enc2utf8 in base;
    r9 = dyn enc2utf8(r8);
    check L46() else D3();
  L48():
    dr = tryDispatchBuiltin.1("[", desc1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L50() else L49(dr);
  L49(desc3):
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  D3():
    deopt 25 [r9];
  L4(desc6, r11):
    __ = ldf `[` in base;
    r13 = dyn __(desc6, r11);
    goto L3(r13);
  L5(r15):
    c2 = `as.logical`(r15);
    if c2 then L58() else L6();
  L46():
    goto L2(r9);
  L50():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L51():
    desc7 = ld desc;
    check L53() else D5();
  L52():
    r10 = dyn base1(<sym desc>);
    goto L4(desc3, r10);
  L55():
    outfile1 = ld outfile;
    check L57() else D7();
  L56():
    r14 = dyn base2(<sym outfile>);
    goto L5(r14);
  D5():
    deopt 31 [desc3, desc7];
  D7():
    deopt 38 [outfile1];
  L6():
    outfile5 = ld outfile;
    check L64() else D10();
  L8():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L65() else L66();
  L53():
    desc8 = force? desc7;
    checkMissing(desc8);
    nzchar = ldf nzchar in base;
    r12 = dyn nzchar(desc8);
    check L54() else D6();
  L57():
    outfile2 = force? outfile1;
    checkMissing(outfile2);
    c1 = `is.character`(outfile2);
    goto L5(c1);
  L58():
    file = ldf file;
    check L59() else D8();
  D6():
    deopt 34 [desc3, r12];
  D8():
    deopt 42 [];
  D10():
    deopt 50 [outfile5];
  L9(r23):
    st fields = r23;
    _w_o_ = ldf `%w/o%`;
    check L69() else D13();
  L54():
    goto L4(desc3, r12);
  L59():
    p1 = prom<V +>{
      outfile3 = ld outfile;
      outfile4 = force? outfile3;
      checkMissing(outfile4);
      return outfile4;
    };
    r17 = dyn file(p1, "a");
    check L60() else D9();
  L64():
    outfile6 = force? outfile5;
    checkMissing(outfile6);
    st out = outfile6;
    goto L8();
  L65():
    desc9 = ld desc;
    check L67() else D11();
  L66():
    r22 = dyn base4(<sym desc>);
    goto L9(r22);
  D9():
    deopt 45 [r17];
  D11():
    deopt 55 [desc9];
  D13():
    deopt 61 [];
  L60():
    st out = r17;
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L61() else L62();
  L67():
    desc10 = force? desc9;
    checkMissing(desc10);
    names = ldf names in base;
    r24 = dyn names(desc10);
    check L68() else D12();
  L69():
    p2 = prom<V +>{
      fields = ld fields;
      fields1 = force? fields;
      checkMissing(fields1);
      return fields1;
    };
    p3 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      c3 = ldf c in base;
      r28 = dyn c3("Package", "Packaged", "Built");
      goto L0(r28);
    L2():
      r26 = dyn base5("Package", "Packaged", "Built");
      goto L0(r26);
    };
    r30 = dyn _w_o_(p2, p3);
    check L70() else D14();
  D12():
    deopt 58 [r24];
  D14():
    deopt 64 [r30];
  L7(r19):
    goto L8();
  L61():
    on_exit = ldf `on.exit` in base;
    r20 = dyn on_exit(<lang close(out)>);
    goto L7(r20);
  L62():
    r18 = dyn base3(<lang close(out)>);
    goto L7(r18);
  L68():
    goto L9(r24);
  L70():
    st fields = r30;
    writeEncoding1 = ld writeEncoding;
    check L71() else D15();
  D15():
    deopt 66 [writeEncoding1];
  L71():
    writeEncoding2 = force? writeEncoding1;
    checkMissing(writeEncoding2);
    c4 = `as.logical`(writeEncoding2);
    if c4 then L72() else L10(c4);
  L10(c6):
    c18 = `as.logical`(c6);
    if c18 then L81() else L13();
  L72():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L73() else L74();
  L11(c9, r32):
    r35 = `!`(r32);
    c15 = `as.logical`(r35);
    c16 = `&&`(c9, c15);
    goto L10(c16);
  L13():
    goto L14();
  L14():
    desc15 = ld desc;
    check L85() else D20();
  L73():
    desc11 = ld desc;
    check L75() else D16();
  L74():
    r31 = dyn base6(<lang `[`(desc, "Encoding")>);
    goto L11(c4, r31);
  L81():
    cat = ldf cat;
    check L82() else D18();
  D16():
    deopt 70 [c4, desc11];
  D18():
    deopt 80 [];
  D20():
    deopt 87 [desc15];
  L75():
    desc12 = force? desc11;
    checkMissing(desc12);
    c10 = `is.object`(desc12);
    if c10 then L76() else L77(c4, desc12);
  L82():
    p4 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r37 = dyn cat[, file]("\\inputencoding{utf8}\n", p4);
    check L83() else D19();
  L85():
    desc16 = force? desc15;
    checkMissing(desc16);
    c19 = `is.object`(desc16);
    if c19 then L86() else L87(desc16);
  D19():
    deopt 84 [r37];
  L12(c14, dx3):
    is_na = ldf `is.na` in base;
    r34 = dyn is_na(dx3);
    check L79() else D17();
  L15(dx5):
    st tit = dx5;
    paste0 = ldf paste0;
    check L89() else D21();
  L76():
    dr2 = tryDispatchBuiltin.1("[", desc12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L78() else L77(c4, dr2);
  L77(c12, desc14):
    __1 = ldf `[` in base;
    r33 = dyn __1(desc14, "Encoding");
    goto L12(c12, r33);
  L83():
    goto L14();
  L86():
    dr4 = tryDispatchBuiltin.1("[", desc16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L88() else L87(dr4);
  L87(desc18):
    __2 = ldf `[` in base;
    r39 = dyn __2(desc18, "Title");
    goto L15(r39);
  D17():
    deopt 76 [c14, r34];
  D21():
    deopt 94 [];
  L78():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(c4, dx2);
  L79():
    goto L11(c14, r34);
  L88():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(dx4);
  L89():
    p5 = prom<V +>{
      desc19 = ld desc;
      desc20 = force? desc19;
      checkMissing(desc20);
      c20 = `is.object`(desc20);
      if c20 then L1() else L2(desc20);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", desc20);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(desc22):
      __3 = ldf `[` in base;
      r40 = dyn __3(desc22, "Package");
      goto L0(r40);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p8 = prom<V +>{
      texify = ldf texify;
      p7 = prom<V +>{
        mygsub = ldf mygsub;
        p6 = prom<V +>{
          tit = ld tit;
          tit1 = force? tit;
          checkMissing(tit1);
          return tit1;
        };
        r43 = dyn mygsub("[[:space:]]+", " ", p6);
        return r43;
      };
      r45 = dyn texify[, two](p7, TRUE);
      return r45;
    };
    r47 = dyn paste0(p5, ": ", p8);
    check L90() else D22();
  D22():
    deopt 98 [r47];
  L90():
    st tit = r47;
    paste1 = ldf paste0;
    check L91() else D23();
  D23():
    deopt 101 [];
  L91():
    p9 = prom<V +>{
      tit2 = ld tit;
      tit3 = force? tit2;
      checkMissing(tit3);
      return tit3;
    };
    r49 = dyn paste1("\\ifthenelse{\\boolean{Rd@use@hyper}}", "{\\hypersetup{pdftitle = {", p9, "}}}{}");
    check L92() else D24();
  D24():
    deopt 106 [r49];
  L92():
    st tit = r49;
    writeLines = ldf writeLines;
    check L93() else D25();
  D25():
    deopt 109 [];
  L93():
    p10 = prom<V +>{
      tit4 = ld tit;
      tit5 = force? tit4;
      checkMissing(tit5);
      return tit5;
    };
    p11 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r52 = dyn writeLines[, con, useBytes](p10, p11, TRUE);
    check L94() else D26();
  D26():
    deopt 115 [r52];
  L94():
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L95() else L96();
  L16(r54):
    r57 = `!`(r54);
    c22 = `as.logical`(r57);
    if c22 then L102() else L18();
  L95():
    desc23 = ld desc;
    check L97() else D27();
  L96():
    r53 = dyn base7(<lang `<-`(aar, `[`(desc, "Authors@R"))>);
    goto L16(r53);
  D27():
    deopt 118 [desc23];
  L18():
    goto L25();
  L25():
    cat1 = ldf cat;
    check L130() else D47();
  L97():
    desc24 = force? desc23;
    checkMissing(desc24);
    c21 = `is.object`(desc24);
    if c21 then L98() else L99(desc24);
  L102():
    tryCatch = ldf tryCatch;
    check L103() else D29();
  D29():
    deopt 128 [];
  D47():
    deopt 199 [];
  L17(dx9):
    st aar = dx9;
    is_na1 = ldf `is.na` in base;
    r56 = dyn is_na1(dx9);
    check L101() else D28();
  L98():
    dr8 = tryDispatchBuiltin.1("[", desc24);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L100() else L99(dr8);
  L99(desc26):
    __4 = ldf `[` in base;
    r55 = dyn __4(desc26, "Authors@R");
    goto L17(r55);
  L103():
    p13 = prom<V +>{
      ___ = ldf `:::`;
      r58 = dyn ___("utils", ".read_authors_at_R_field");
      checkFun.0(r58);
      r59 = r58 as cls;
      p12 = prom<V +>{
        aar = ld aar;
        aar1 = force? aar;
        checkMissing(aar1);
        return aar1;
      };
      r61 = dyn r59(p12);
      return r61;
    };
    p14 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r64 = dyn tryCatch[, error](p13, p14);
    check L104() else D30();
  L130():
    p25 = prom<V +>{
      out6 = ld out;
      out7 = force? out6;
      checkMissing(out7);
      return out7;
    };
    r101 = dyn cat1[, , sep, file]("\\begin{description}", "\\raggedright{}", "\n", p25);
    check L131() else D48();
  D28():
    deopt 125 [r56];
  D30():
    deopt 132 [r64];
  D48():
    deopt 206 [r101];
  L100():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L17(dx8);
  L101():
    goto L16(r56);
  L104():
    st aar = r64;
    sym8 = ldf inherits;
    base8 = ldf inherits in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L105() else L106();
  L131():
    fields2 = ld fields;
    check L132() else D49();
  D49():
    deopt 207 [fields2];
  L19(r66):
    r68 = `!`(r66);
    c23 = `as.logical`(r68);
    if c23 then L109() else L20();
  L105():
    aar2 = ld aar;
    check L107() else D31();
  L106():
    r65 = dyn base8(<sym aar>, "error");
    goto L19(r65);
  L132():
    fields3 = force? fields2;
    checkMissing(fields3);
    s = toForSeq(fields3);
    l = length(s);
    i = 0;
    goto L26(i);
  D31():
    deopt 136 [aar2];
  L20():
    goto L24(NULL);
  L24(r98):
    goto L25();
  L26(i1):
    i2 = `+`.1(i1, 1);
    c27 = `<`.1(l, i2);
    if c27 then L133() else L40();
  L107():
    aar3 = force? aar2;
    checkMissing(aar3);
    inherits = ldf inherits in base;
    r67 = dyn inherits(aar3, "error", FALSE);
    check L108() else D32();
  L109():
    Filter = ldf Filter;
    check L110() else D33();
  D32():
    deopt 141 [r67];
  D33():
    deopt 144 [];
  L40():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    f = ld f;
    check L134() else D50();
  L108():
    goto L19(r67);
  L110():
    p15 = prom<V +>{
      ___1 = ldf `:::`;
      r69 = dyn ___1("utils", ".person_has_author_role");
      return r69;
    };
    p16 = prom<V +>{
      aar4 = ld aar;
      aar5 = force? aar4;
      checkMissing(aar5);
      return aar5;
    };
    r72 = dyn Filter(p15, p16);
    check L111() else D34();
  L133():
    cat2 = ldf cat;
    check L184() else D84();
  D34():
    deopt 147 [r72];
  D50():
    deopt 209 [i2, f];
  D84():
    deopt 343 [];
  L111():
    st aar = r72;
    format = ldf format;
    check L112() else D35();
  L134():
    f1 = force? f;
    checkMissing(f1);
    r102 = `==`(f1, "Authors@R");
    c28 = `as.logical`(r102);
    if c28 then L135() else L27();
  L184():
    p54 = prom<V +>{
      out10 = ld out;
      out11 = force? out10;
      checkMissing(out11);
      return out11;
    };
    r181 = dyn cat2[, file]("\\end{description}\n", p54);
    check L185() else D85();
  D35():
    deopt 150 [];
  D85():
    deopt 347 [r181];
  L27():
    desc27 = ld desc;
    check L138() else D51();
  L112():
    p17 = prom<V +>{
      aar6 = ld aar;
      aar7 = force? aar6;
      checkMissing(aar7);
      return aar7;
    };
    p18 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      c24 = ldf c in base;
      r76 = dyn c24("given", "family");
      goto L0(r76);
    L2():
      r74 = dyn base9("given", "family");
      goto L0(r74);
    };
    r78 = dyn format[, include](p17, p18);
    check L113() else D36();
  L135():
    goto L26(i2);
  L185():
    popenv;
    return r181;
  D36():
    deopt 154 [r78];
  D51():
    deopt 217 [i2, desc27];
  L113():
    st aut = r78;
    paste2 = ldf paste;
    check L114() else D37();
  L138():
    desc28 = force? desc27;
    checkMissing(desc28);
    c29 = `is.object`(desc28);
    if c29 then L139() else L140(i2, desc28);
  D37():
    deopt 157 [];
  L29(i12, dx13):
    st text = dx13;
    _in_ = ldf `%in%`;
    check L143() else D53();
  L114():
    p19 = prom<V +>{
      aut = ld aut;
      aut1 = force? aut;
      checkMissing(aut1);
      c25 = `is.object`(aut1);
      if c25 then L2() else L3(aut1);
    L0(dx11):
      return dx11;
    L2():
      dr10 = tryDispatchBuiltin.1("[", aut1);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(aut3):
      sym10 = ldf nzchar;
      base10 = ldf nzchar in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L5() else L6();
    L1(aut6, r80):
      __5 = ldf `[` in base;
      r82 = dyn __5(aut6, r80);
      goto L0(r82);
    L4():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    L5():
      aut7 = ld aut;
      aut8 = force? aut7;
      checkMissing(aut8);
      nzchar1 = ldf nzchar in base;
      r81 = dyn nzchar1(aut8);
      goto L1(aut3, r81);
    L6():
      r79 = dyn base10(<sym aut>);
      goto L1(aut3, r79);
    };
    r84 = dyn paste2[, collapse](p19, "; ");
    check L115() else D38();
  L139():
    dr12 = tryDispatchBuiltin.1("[", desc28);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L141() else L140(i2, dr12);
  L140(i10, desc30):
    f2 = ld f;
    check L142() else D52();
  D38():
    deopt 161 [r84];
  D52():
    deopt 219 [i10, desc30, f2];
  D53():
    deopt 224 [i12];
  L115():
    st aut = r84;
    texify1 = ldf texify;
    check L116() else D39();
  L141():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L29(i2, dx12);
  L142():
    f3 = force? f2;
    __6 = ldf `[` in base;
    r104 = dyn __6(desc30, f3);
    goto L29(i10, r104);
  L143():
    p26 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    p27 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r107):
      return r107;
    L1():
      c30 = ldf c in base;
      r108 = dyn c30("Author", "Description");
      goto L0(r108);
    L2():
      r106 = dyn base12("Author", "Description");
      goto L0(r106);
    };
    r110 = dyn _in_(p26, p27);
    check L144() else D54();
  D39():
    deopt 164 [];
  D54():
    deopt 227 [i12, r110];
  L116():
    p21 = prom<V +>{
      mygsub1 = ldf mygsub;
      p20 = prom<V +>{
        aut9 = ld aut;
        aut10 = force? aut9;
        checkMissing(aut10);
        return aut10;
      };
      r86 = dyn mygsub1("[[:space:]]+", " ", p20);
      return r86;
    };
    r88 = dyn texify1[, two](p21, TRUE);
    check L117() else D40();
  L144():
    c31 = `as.logical`(r110);
    if c31 then L145() else L30();
  D40():
    deopt 168 [r88];
  L30():
    goto L31(i12);
  L31(i15):
    mygsub2 = ldf mygsub;
    check L149() else D57();
  L117():
    st aut = r88;
    sym11 = ldf nzchar;
    base11 = ldf nzchar in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L118() else L119();
  L145():
    mytrim = ldf mytrim;
    check L146() else D55();
  D55():
    deopt 229 [i12];
  D57():
    deopt 236 [i15];
  L21(r90):
    c26 = `as.logical`(r90);
    if c26 then L122() else L22();
  L118():
    aut11 = ld aut;
    check L120() else D41();
  L119():
    r89 = dyn base11(<sym aut>);
    goto L21(r89);
  L146():
    p28 = prom<V +>{
      text = ld text;
      text1 = force? text;
      checkMissing(text1);
      return text1;
    };
    r112 = dyn mytrim(p28);
    check L147() else D56();
  L149():
    p29 = prom<V +>{
      text2 = ld text;
      text3 = force? text2;
      checkMissing(text3);
      return text3;
    };
    r115 = dyn mygsub2("\"([^\"]*)\"", "\\`\\`\\1''", p29);
    check L150() else D58();
  D41():
    deopt 172 [aut11];
  D56():
    deopt 231 [i12, r112];
  D58():
    deopt 240 [i15, r115];
  L22():
    goto L23(NULL);
  L23(r97):
    goto L24(r97);
  L120():
    aut12 = force? aut11;
    checkMissing(aut12);
    nzchar2 = ldf nzchar in base;
    r91 = dyn nzchar2(aut12);
    check L121() else D42();
  L122():
    paste3 = ldf paste0;
    check L123() else D43();
  L147():
    st text = r112;
    goto L31(i12);
  L150():
    st text = r115;
    texify2 = ldf texify;
    check L151() else D59();
  D42():
    deopt 175 [r91];
  D43():
    deopt 177 [];
  D59():
    deopt 243 [i15];
  L121():
    goto L21(r91);
  L123():
    p22 = prom<V +>{
      aut13 = ld aut;
      aut14 = force? aut13;
      checkMissing(aut14);
      return aut14;
    };
    r93 = dyn paste3("\\ifthenelse{\\boolean{Rd@use@hyper}}", "{\\hypersetup{pdfauthor = {", p22, "}}}{}");
    check L124() else D44();
  L151():
    p30 = prom<V +>{
      text4 = ld text;
      text5 = force? text4;
      checkMissing(text5);
      return text5;
    };
    r117 = dyn texify2[, one, two](p30, FALSE, TRUE);
    check L152() else D60();
  D44():
    deopt 182 [r93];
  D60():
    deopt 249 [i15, r117];
  L124():
    st aut = r93;
    writeLines1 = ldf writeLines;
    check L125() else D45();
  L152():
    st text = r117;
    myfsub = ldf myfsub;
    check L153() else D61();
  D45():
    deopt 185 [];
  D61():
    deopt 252 [i15];
  L125():
    p23 = prom<V +>{
      aut15 = ld aut;
      aut16 = force? aut15;
      checkMissing(aut16);
      return aut16;
    };
    p24 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      return out5;
    };
    r96 = dyn writeLines1[, con, useBytes](p23, p24, TRUE);
    check L126() else D46();
  L153():
    p31 = prom<V +>{
      version1 = ld version;
      version2 = force? version1;
      checkMissing(version2);
      return version2;
    };
    p32 = prom<V +>{
      text6 = ld text;
      text7 = force? text6;
      checkMissing(text7);
      return text7;
    };
    r120 = dyn myfsub("@VERSION@", p31, p32);
    check L154() else D62();
  D46():
    deopt 191 [r96];
  D62():
    deopt 256 [i15, r120];
  L126():
    goto L23(r96);
  L154():
    st text = r120;
    _in_1 = ldf `%in%`;
    check L155() else D63();
  D63():
    deopt 259 [i15];
  L155():
    p33 = prom<V +>{
      f6 = ld f;
      f7 = force? f6;
      checkMissing(f7);
      return f7;
    };
    p34 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r123):
      return r123;
    L1():
      c32 = ldf c in base;
      r124 = dyn c32("Author", "Maintainer", "Contact");
      goto L0(r124);
    L2():
      r122 = dyn base13("Author", "Maintainer", "Contact");
      goto L0(r122);
    };
    r126 = dyn _in_1(p33, p34);
    check L156() else D64();
  D64():
    deopt 262 [i15, r126];
  L156():
    c33 = `as.logical`(r126);
    if c33 then L157() else L32();
  L32():
    goto L33(i15);
  L33(i18):
    _in_2 = ldf `%in%`;
    check L161() else D67();
  L157():
    mytrfm = ldf mytrfm;
    check L158() else D65();
  D65():
    deopt 264 [i15];
  D67():
    deopt 275 [i18];
  L158():
    p35 = prom<V +>{
      text8 = ld text;
      text9 = force? text8;
      checkMissing(text9);
      return text9;
    };
    p36 = prom<V +>{
      sym14 = ldf list;
      base14 = ldf list in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r129):
      return r129;
    L1():
      texify3 = ld texify;
      texify4 = force? texify3;
      checkMissing(texify4);
      texify5 = ld texify;
      texify6 = force? texify5;
      checkMissing(texify6);
      list = ldf list in base;
      r130 = dyn list(texify4, texify6);
      goto L0(r130);
    L2():
      r128 = dyn base14(<sym texify>, <sym texify>);
      goto L0(r128);
    };
    p37 = prom<V +>{
      sym15 = ldf c;
      base15 = ldf c in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r133):
      return r133;
    L1():
      c34 = ldf c in base;
      r134 = dyn c34(1, 2);
      goto L0(r134);
    L2():
      r132 = dyn base15(1, 2);
      goto L0(r132);
    };
    r136 = dyn mytrfm("<([^@ ]+)@([^> ]+)>", "}\\\\email{%s@%s}\\\\AsIs{", p35, p36, p37);
    check L159() else D66();
  L161():
    p38 = prom<V +>{
      f8 = ld f;
      f9 = force? f8;
      checkMissing(f9);
      return f9;
    };
    p39 = prom<V +>{
      sym16 = ldf c;
      base16 = ldf c in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r140):
      return r140;
    L1():
      c35 = ldf c in base;
      r141 = dyn c35("URL", "BugReports", "Additional_repositories");
      goto L0(r141);
    L2():
      r139 = dyn base16("URL", "BugReports", "Additional_repositories");
      goto L0(r139);
    };
    r143 = dyn _in_2(p38, p39);
    check L162() else D68();
  D66():
    deopt 270 [i15, r136];
  D68():
    deopt 278 [i18, r143];
  L159():
    st text = r136;
    goto L33(i15);
  L162():
    c36 = `as.logical`(r143);
    if c36 then L163() else L34();
  L34():
    goto L35(i18);
  L35(i21):
    _in_3 = ldf `%in%`;
    check L167() else D71();
  L163():
    mygsub3 = ldf mygsub;
    check L164() else D69();
  D69():
    deopt 280 [i18];
  D71():
    deopt 289 [i21];
  L164():
    p40 = prom<V +>{
      text10 = ld text;
      text11 = force? text10;
      checkMissing(text11);
      return text11;
    };
    r145 = dyn mygsub3("(http://|ftp://|https://)([^[:space:],]+)", "}\\\\url{\\1\\2}\\\\AsIs{", p40);
    check L165() else D70();
  L167():
    p41 = prom<V +>{
      f10 = ld f;
      f11 = force? f10;
      checkMissing(f11);
      return f11;
    };
    p42 = prom<V +>{
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r149):
      return r149;
    L1():
      c37 = ldf c in base;
      r150 = dyn c37("Author", "Description");
      goto L0(r150);
    L2():
      r148 = dyn base17("Author", "Description");
      goto L0(r148);
    };
    r152 = dyn _in_3(p41, p42);
    check L168() else D72();
  D70():
    deopt 284 [i18, r145];
  D72():
    deopt 292 [i21, r152];
  L165():
    st text = r145;
    goto L35(i18);
  L168():
    c38 = `as.logical`(r152);
    if c38 then L169() else L36();
  L36():
    goto L37(i21);
  L37(i24):
    f12 = ld f;
    check L173() else D75();
  L169():
    mygsub4 = ldf mygsub;
    check L170() else D73();
  D73():
    deopt 294 [i21];
  D75():
    deopt 302 [i24, f12];
  L170():
    p43 = prom<V +>{
      text12 = ld text;
      text13 = force? text12;
      checkMissing(text13);
      return text13;
    };
    r154 = dyn mygsub4("<(http://|ftp://|https://)([^[:space:],>]+)>", "<}\\\\url{\\1\\2}\\\\AsIs{>", p43);
    check L171() else D74();
  L173():
    f13 = force? f12;
    checkMissing(f13);
    r156 = `==`(f13, "Description");
    c39 = `as.logical`(r156);
    if c39 then L174() else L38();
  D74():
    deopt 298 [i21, r154];
  L38():
    goto L39(i24);
  L39(i27):
    paste4 = ldf paste0;
    check L180() else D80();
  L171():
    st text = r154;
    goto L37(i21);
  L174():
    mytrfm1 = ldf mytrfm;
    check L175() else D76();
  D76():
    deopt 307 [i24];
  D80():
    deopt 325 [i27];
  L175():
    p44 = prom<V +>{
      text14 = ld text;
      text15 = force? text14;
      checkMissing(text15);
      return text15;
    };
    p45 = prom<V +>{
      sym18 = ldf list;
      base18 = ldf list in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r159):
      return r159;
    L1():
      identity2 = ld identity;
      identity3 = force? identity2;
      checkMissing(identity3);
      texify7 = ld texify;
      texify8 = force? texify7;
      checkMissing(texify8);
      list1 = ldf list in base;
      r160 = dyn list1(identity3, texify8);
      goto L0(r160);
    L2():
      r158 = dyn base18(<sym identity>, <sym texify>);
      goto L0(r158);
    };
    p46 = prom<V +>{
      sym19 = ldf c;
      base19 = ldf c in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r163):
      return r163;
    L1():
      c40 = ldf c in base;
      r164 = dyn c40(3, 3);
      goto L0(r164);
    L2():
      r162 = dyn base19(3, 3);
      goto L0(r162);
    };
    r166 = dyn mytrfm1("<(DOI:|doi:)([[:space:]]*)([^[:space:]]+)>", "<}\\\\Rhref{https://doi.org/%s}{\\1%s}\\\\AsIs{>", p44, p45, p46);
    check L176() else D77();
  L180():
    p48 = prom<V +>{
      text18 = ld text;
      text19 = force? text18;
      checkMissing(text19);
      return text19;
    };
    r171 = dyn paste4("\\AsIs{", p48, "}");
    check L181() else D81();
  D77():
    deopt 313 [i24, r166];
  D81():
    deopt 329 [i27, r171];
  L176():
    st text = r166;
    mygsub5 = ldf mygsub;
    check L177() else D78();
  L181():
    st text = r171;
    writeLines2 = ldf writeLines;
    check L182() else D82();
  D78():
    deopt 316 [i24];
  D82():
    deopt 332 [i27];
  L177():
    p47 = prom<V +>{
      text16 = ld text;
      text17 = force? text16;
      checkMissing(text17);
      return text17;
    };
    r168 = dyn mygsub5("<(arXiv|arxiv):([[:alnum:]/.-]+)([[:space:]]*\\[[^]]+\\])?>", "<}\\\\Rhref{https://doi.org/10.48550/arXiv.\\2}{doi:10.48550/arXiv.\\2}\\\\AsIs{>", p47);
    check L178() else D79();
  L182():
    p52 = prom<V +>{
      paste5 = ldf paste0;
      p50 = prom<V +>{
        texify9 = ldf texify;
        p49 = prom<V +>{
          f14 = ld f;
          f15 = force? f14;
          checkMissing(f15);
          return f15;
        };
        r173 = dyn texify9(p49, TRUE, TRUE);
        return r173;
      };
      p51 = prom<V +>{
        text20 = ld text;
        text21 = force? text20;
        checkMissing(text21);
        return text21;
      };
      r176 = dyn paste5("\\item[", p50, "]", p51);
      return r176;
    };
    p53 = prom<V +>{
      out8 = ld out;
      out9 = force? out8;
      checkMissing(out9);
      return out9;
    };
    r179 = dyn writeLines2[, con, useBytes](p52, p53, TRUE);
    check L183() else D83();
  D79():
    deopt 320 [i24, r168];
  D83():
    deopt 338 [i27, r179];
  L178():
    st text = r168;
    goto L39(i24);
  L183():
    goto L26(i27);
  }
}
fun inner4027253682(pattern, replacement, x) {
  (reg pattern:*, reg replacement:*, reg x:*) -+> V { var pattern:*, var replacement:*, var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg pattern1:*, reg pattern2:V, reg replacement1:*, reg replacement2:V, reg x1:*, reg x2:V, reg gsub:cls, reg r2:V |
    mkenv;
    st pattern = pattern;
    st replacement = replacement;
    st x = x;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    pattern1 = ld pattern;
    check L3() else D0();
  L2():
    r = dyn base(<lang gsub(pattern, replacement, x, FALSE, FALSE, FALSE, FALSE)>);
    goto L0(r);
  D0():
    deopt 2 [pattern1];
  L3():
    pattern2 = force? pattern1;
    checkMissing(pattern2);
    replacement1 = ld replacement;
    check L4() else D1();
  D1():
    deopt 4 [replacement1];
  L4():
    replacement2 = force? replacement1;
    checkMissing(replacement2);
    x1 = ld x;
    check L5() else D2();
  D2():
    deopt 6 [x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    gsub = ldf gsub in base;
    r2 = dyn gsub(pattern2, replacement2, x2, FALSE, FALSE, FALSE, FALSE);
    check L6() else D3();
  D3():
    deopt 13 [r2];
  L6():
    goto L0(r2);
  }
}
fun inner242647277(x, one, two) {
  (reg x:*, reg one:*, reg two:*) -+> V { var x:*, var one:*, reg one_isMissing:L, reg one_orDefault:*, var two:*, reg two_isMissing:L, reg two_orDefault:*, reg two1:*, reg two2:V, reg c:L, reg myfsub:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg one1:*, reg one2:V, reg c1:L, reg mypsub:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r4:V, reg myfsub1:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r6:V, reg myfsub2:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg r8:V, reg two3:*, reg two4:V, reg c2:L, reg mypsub1:cls, reg x9:*, reg x10:V, reg p4:p(V +), reg r11:V, reg myfsub3:cls, reg x11:*, reg x12:V, reg p5:p(V +), reg r13:V, reg one3:*, reg one4:V, reg c3:L, reg myfsub4:cls, reg x13:*, reg x14:V, reg p6:p(V +), reg r16:V, reg myfsub5:cls, reg x15:*, reg x16:V, reg p7:p(V +), reg r18:V, reg x17:*, reg x18:V |
    mkenv;
    st x = x;
    one_isMissing = missing.0(one);
    if one_isMissing then L0(TRUE) else L0(one);
  L0(one_orDefault):
    st one = one_orDefault;
    two_isMissing = missing.0(two);
    if two_isMissing then L1(FALSE) else L1(two);
  L1(two_orDefault):
    st two = two_orDefault;
    two1 = ld two;
    check L10() else D0();
  D0():
    deopt 0 [two1];
  L10():
    two2 = force? two1;
    checkMissing(two2);
    c = `as.logical`(two2);
    if c then L11() else L2();
  L2():
    goto L3();
  L3():
    one1 = ld one;
    check L15() else D3();
  L11():
    myfsub = ldf myfsub;
    check L12() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 11 [one1];
  L12():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn myfsub("\\", "\\textbackslash", p);
    check L13() else D2();
  L15():
    one2 = force? one1;
    checkMissing(one2);
    c1 = `as.logical`(one2);
    if c1 then L16() else L4();
  D2():
    deopt 7 [r1];
  L4():
    goto L5();
  L5():
    two3 = ld two;
    check L24() else D10();
  L13():
    st x = r1;
    goto L3();
  L16():
    mypsub = ldf mypsub;
    check L17() else D4();
  D4():
    deopt 14 [];
  D10():
    deopt 36 [two3];
  L17():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r4 = dyn mypsub("([#$%&_])", "\\\\\\1", p1);
    check L18() else D5();
  L24():
    two4 = force? two3;
    checkMissing(two4);
    c2 = `as.logical`(two4);
    if c2 then L25() else L6();
  D5():
    deopt 18 [r4];
  L6():
    goto L7();
  L7():
    one3 = ld one;
    check L31() else D15();
  L18():
    st x = r4;
    myfsub1 = ldf myfsub;
    check L19() else D6();
  L25():
    mypsub1 = ldf mypsub;
    check L26() else D11();
  D6():
    deopt 21 [];
  D11():
    deopt 39 [];
  D15():
    deopt 54 [one3];
  L19():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r6 = dyn myfsub1("^", "\\textasciicircum", p2);
    check L20() else D7();
  L26():
    p4 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r11 = dyn mypsub1("([{}])", "\\\\\\1", p4);
    check L27() else D12();
  L31():
    one4 = force? one3;
    checkMissing(one4);
    c3 = `as.logical`(one4);
    if c3 then L32() else L8();
  D7():
    deopt 25 [r6];
  D12():
    deopt 43 [r11];
  L8():
    goto L9();
  L9():
    x17 = ld x;
    check L38() else D20();
  L20():
    st x = r6;
    myfsub2 = ldf myfsub;
    check L21() else D8();
  L27():
    st x = r11;
    myfsub3 = ldf myfsub;
    check L28() else D13();
  L32():
    myfsub4 = ldf myfsub;
    check L33() else D16();
  D8():
    deopt 28 [];
  D13():
    deopt 46 [];
  D16():
    deopt 57 [];
  D20():
    deopt 72 [x17];
  L21():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r8 = dyn myfsub2("~", "\\textasciitilde", p3);
    check L22() else D9();
  L28():
    p5 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r13 = dyn myfsub3("\\textbackslash", "\\textbackslash{}", p5);
    check L29() else D14();
  L33():
    p6 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r16 = dyn myfsub4("\\textasciicircum", "\\textasciicircum{}", p6);
    check L34() else D17();
  L38():
    x18 = force? x17;
    checkMissing(x18);
    popenv;
    return x18;
  D9():
    deopt 32 [r8];
  D14():
    deopt 50 [r13];
  D17():
    deopt 61 [r16];
  L22():
    st x = r8;
    goto L5();
  L29():
    st x = r13;
    goto L7();
  L34():
    st x = r16;
    myfsub5 = ldf myfsub;
    check L35() else D18();
  D18():
    deopt 64 [];
  L35():
    p7 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r18 = dyn myfsub5("\\textasciitilde", "\\textasciitilde{}", p7);
    check L36() else D19();
  D19():
    deopt 68 [r18];
  L36():
    st x = r18;
    goto L9();
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg unlist:cls, reg strsplit:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg setdiff:cls, reg which:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg y:*, reg y1:V, reg nzchar:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg lines2trim:*, reg lines2trim1:V, reg length:cls, reg r13:V, reg r14:V, reg c:L, reg x3:*, reg x4:V, reg paste:cls, reg replace:cls, reg y2:*, reg y3:V, reg p4:p(V +), reg lines2trim2:*, reg lines2trim3:V, reg p5:p(V +), reg _trim_common_leading_whitespace:cls, reg y4:*, reg y5:V, reg c1:L, reg y7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg lines2trim4:*, reg lines2trim5:V, reg __:cls, reg r17:V, reg p6:p(V +), reg r19:V, reg p7:p(V +), reg r21:V, reg p8:p(V +), reg r23:V |
    mkenv;
    st x = x;
    unlist = ldf unlist;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      strsplit = ldf strsplit;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn strsplit[, , fixed](p, "\n", TRUE);
      return r1;
    };
    r3 = dyn unlist(p1);
    check L3() else D1();
  D1():
    deopt 3 [r3];
  L3():
    st y = r3;
    setdiff = ldf setdiff;
    check L4() else D2();
  D2():
    deopt 6 [];
  L4():
    p3 = prom<V +>{
      which = ldf which;
      p2 = prom<V +>{
        sym = ldf nzchar;
        base = ldf nzchar in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r5):
        return r5;
      L1():
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        nzchar = ldf nzchar in base;
        r6 = dyn nzchar(y1);
        goto L0(r6);
      L2():
        r4 = dyn base(<sym y>);
        goto L0(r4);
      };
      r8 = dyn which(p2);
      return r8;
    };
    r10 = dyn setdiff(p3, 1);
    check L5() else D3();
  D3():
    deopt 9 [r10];
  L5():
    st lines2trim = r10;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L0(r12):
    r14 = `!`(r12);
    c = `as.logical`(r14);
    if c then L10() else L1();
  L6():
    lines2trim = ld lines2trim;
    check L8() else D4();
  L7():
    r11 = dyn base1(<sym lines2trim>);
    goto L0(r11);
  D4():
    deopt 13 [lines2trim];
  L1():
    paste = ldf paste;
    check L13() else D7();
  L8():
    lines2trim1 = force? lines2trim;
    checkMissing(lines2trim1);
    length = ldf length in base;
    r13 = dyn length(lines2trim1);
    check L9() else D5();
  L10():
    x3 = ld x;
    check L11() else D6();
  D5():
    deopt 16 [r13];
  D6():
    deopt 18 [x3];
  D7():
    deopt 21 [];
  L9():
    goto L0(r13);
  L11():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L13():
    p8 = prom<V +>{
      replace = ldf replace;
      p4 = prom<V +>{
        y2 = ld y;
        y3 = force? y2;
        checkMissing(y3);
        return y3;
      };
      p5 = prom<V +>{
        lines2trim2 = ld lines2trim;
        lines2trim3 = force? lines2trim2;
        checkMissing(lines2trim3);
        return lines2trim3;
      };
      p7 = prom<V +>{
        _trim_common_leading_whitespace = ldf `.trim_common_leading_whitespace`;
        p6 = prom<V +>{
          y4 = ld y;
          y5 = force? y4;
          checkMissing(y5);
          c1 = `is.object`(y5);
          if c1 then L1() else L2(y5);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("[", y5);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(y7):
          lines2trim4 = ld lines2trim;
          lines2trim5 = force? lines2trim4;
          __ = ldf `[` in base;
          r17 = dyn __(y7, lines2trim5);
          goto L0(r17);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r19 = dyn _trim_common_leading_whitespace(p6);
        return r19;
      };
      r21 = dyn replace(p4, p5, p7);
      return r21;
    };
    r23 = dyn paste[, collapse](p8, "\n");
    check L14() else D8();
  D8():
    deopt 25 [r23];
  L14():
    popenv;
    return r23;
  }
}