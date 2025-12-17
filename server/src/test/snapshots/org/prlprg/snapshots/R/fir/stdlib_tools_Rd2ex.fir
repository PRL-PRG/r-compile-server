fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1579809155;
    st Rd2ex = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1579809155(Rd, out, defines, stages, outputEncoding, commentDontrun, commentDonttest, `...`) {
  (reg Rd:*, reg out:*, reg defines:*, reg stages:*, reg outputEncoding:*, reg commentDontrun:*, reg commentDonttest:*, reg ddd:dots) -+> V { var Rd:*, var out:*, reg out_isMissing:L, reg out_orDefault:*, var defines:*, reg defines_isMissing:L, reg defines_orDefault:*, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), var stages:*, reg stages_isMissing:L, reg stages_orDefault:*, var outputEncoding:*, reg outputEncoding_isMissing:L, reg outputEncoding_orDefault:*, var commentDontrun:*, reg commentDontrun_isMissing:L, reg commentDontrun_orDefault:*, var commentDonttest:*, reg commentDonttest_isMissing:L, reg commentDonttest_orDefault:*, var `...`:dots?, reg r2:cls, reg r3:cls, reg r4:cls, reg r5:cls, reg r6:cls, reg r7:cls, reg prepare_Rd:cls, reg Rd1:*, reg Rd2:V, reg p1:p(V +), reg defines1:*, reg defines2:V, reg p2:p(V +), reg stages1:*, reg stages2:V, reg p3:p(V +), reg ddd1:dots?, reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg Rd3:*, reg Rd4:V, reg attr:cls, reg r14:V, reg RdTags:cls, reg Rd5:*, reg Rd6:V, reg p4:p(V +), reg r16:V, reg which:cls, reg sections:*, reg sections1:V, reg r17:V, reg p5:p(V +), reg r19:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg where:*, reg where1:V, reg length:cls, reg r22:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg out1:*, reg out2:V, reg c2:L, reg c3:L, reg out3:*, reg out4:V, reg r25:V, reg c4:L, reg stdout:cls, reg r26:V, reg r27:V, reg file:cls, reg out5:*, reg out6:V, reg p6:p(V +), reg r29:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg on_exit:cls, reg r31:V, reg out7:*, reg out8:V, reg summary:cls, reg con:*, reg con1:V, reg p7:p(V +), reg r34:V, reg c5:L, reg r36:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r37:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg where2:*, reg where3:V, reg length1:cls, reg r40:V, reg r41:V, reg c6:L, reg warning:cls, reg r42:V, reg Rd7:*, reg Rd8:V, reg c7:L, reg Rd10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg where4:*, reg where5:V, reg c8:L, reg Rd12:V, reg where7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg Rd14:V, reg dx7:V, reg __:cls, reg r44:V, reg __1:cls, reg r45:V, reg unlist:cls, reg ex:*, reg ex1:V, reg p8:p(V +), reg r47:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg r49:V, reg exl:*, reg exl1:V, reg length2:cls, reg r50:V, reg c9:L, reg c11:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r51:V, reg c14:L, reg r52:V, reg Encoding:cls, reg exl2:*, reg exl3:V, reg p9:p(V +), reg r54:V, reg r55:V, reg any:cls, reg r56:V, reg c15:L, reg c16:V, reg c18:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r57:V, reg r58:V, reg sections2:*, reg sections3:V, reg r59:V, reg any1:cls, reg r60:V, reg c19:L, reg unlist1:cls, reg Rd15:*, reg Rd16:V, reg c20:L, reg Rd18:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg which1:cls, reg f:*, reg f1:V, reg p10:p(V +), reg r62:V, reg __2:cls, reg r63:V, reg p11:p(V +), reg r65:V, reg c21:L, reg r67:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __3:cls, reg r68:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r69:V, reg r70:V, reg outputEncoding1:*, reg outputEncoding2:V, reg nzchar:cls, reg r71:V, reg c22:L, reg outputEncoding3:*, reg outputEncoding4:V, reg encoding:*, reg encoding1:V, reg of0:cls, reg encoding2:*, reg encoding3:V, reg p12:p(V +), reg r73:V, reg r74:V, reg sections4:*, reg sections5:V, reg r76:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r77:V, reg r78:V, reg nameblk:*, reg nameblk1:V, reg any2:cls, reg r79:V, reg c23:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r80:V, reg r81:V, reg Rd19:*, reg Rd20:V, reg c24:L, reg Rd22:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r82:V, reg Rd25:V, reg r83:V, reg nameblk2:*, reg nameblk3:V, reg which_max:cls, reg r84:V, reg __4:cls, reg r85:V, reg as_character:cls, reg r86:V, reg of1:cls, reg name:*, reg name1:V, reg p13:p(V +), reg r88:V, reg _Rd_format_title:cls, reg _Rd_get_title:cls, reg Rd26:*, reg Rd27:V, reg p14:p(V +), reg r91:V, reg p15:p(V +), reg r93:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r94:V, reg r95:V, reg title:*, reg title1:V, reg length3:cls, reg r96:V, reg r97:V, reg c25:L, reg of2:cls, reg wr:cls, reg paste0:cls, reg title2:*, reg title3:V, reg p16:p(V +), reg r100:V, reg p17:p(V +), reg r102:V, reg p18:p(V +), reg r104:V, reg sections6:*, reg sections7:V, reg r105:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r106:V, reg r107:V, reg aliasblks:*, reg aliasblks1:V, reg any3:cls, reg r108:V, reg c26:L, reg unlist2:cls, reg Rd28:*, reg Rd29:V, reg c27:L, reg Rd31:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg aliasblks2:*, reg aliasblks3:V, reg __5:cls, reg r109:V, reg p19:p(V +), reg r111:V, reg grep:cls, reg aliases:*, reg aliases1:V, reg p20:p(V +), reg r113:V, reg paste1:cls, reg aliases2:*, reg aliases3:V, reg c28:L, reg aliases5:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg sp:*, reg sp1:V, reg __6:cls, reg r114:V, reg p21:p(V +), reg r116:V, reg l:*, reg c29:L, reg r118:V, reg l2:*, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg sp2:*, reg sp3:V, reg ___:cls, reg r121:V, reg of3:cls, reg wr1:cls, reg paste2:cls, reg paste3:cls, reg aliases6:*, reg aliases7:V, reg p22:p(V +), reg r123:V, reg p23:p(V +), reg r125:V, reg p24:p(V +), reg r127:V, reg p25:p(V +), reg r129:V, reg sections8:*, reg sections9:V, reg r131:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r132:V, reg r133:V, reg keyblks:*, reg keyblks1:V, reg any4:cls, reg r134:V, reg c30:L, reg _w_o_:cls, reg trimws:cls, reg unlist3:cls, reg Rd32:*, reg Rd33:V, reg c31:L, reg Rd35:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg keyblks2:*, reg keyblks3:V, reg __7:cls, reg r135:V, reg p26:p(V +), reg r137:V, reg p27:p(V +), reg r139:V, reg p28:p(V +), reg _Rd_keywords_auto:*, reg _Rd_keywords_auto1:V, reg p29:p(V +), reg r142:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r143:V, reg r144:V, reg keys:*, reg keys1:V, reg length4:cls, reg r145:V, reg c32:L, reg of4:cls, reg wr2:cls, reg paste4:cls, reg paste5:cls, reg keys2:*, reg keys3:V, reg p30:p(V +), reg r147:V, reg p31:p(V +), reg r149:V, reg p32:p(V +), reg r151:V, reg p33:p(V +), reg r153:V, reg r154:V, reg writeLines:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r156:V, reg r157:V, reg c33:cls, reg r158:V, reg p34:p(V +), reg con2:*, reg con3:V, reg p35:p(V +), reg r161:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r162:V, reg r163:V, reg ex2:*, reg ex3:V, reg r164:I, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c34:L, reg x:V, reg render:cls, reg ex4:*, reg ex5:V, reg c35:L, reg ex7:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg i5:*, reg i6:V, reg __8:cls, reg r165:V, reg p36:p(V +), reg r167:V, reg of5:cls, reg r168:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r170:V, reg r171:V, reg out9:*, reg out10:V, reg invisible:cls, reg r172:V |
    mkenv;
    st Rd = Rd;
    out_isMissing = missing.0(out);
    if out_isMissing then L0("") else L0(out);
  L0(out_orDefault):
    st out = out_orDefault;
    defines_isMissing = missing.0(defines);
    if defines_isMissing then L1() else L2(defines);
  L1():
    p = prom<V +>{
      _Platform = ld `.Platform`;
      _Platform1 = force? _Platform;
      checkMissing(_Platform1);
      c = `is.object`(_Platform1);
      if c then L1() else L2(_Platform1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _Platform1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Platform3):
      r = `$`(_Platform3, <sym OS.type>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L2(p);
  L2(defines_orDefault):
    st defines = defines_orDefault;
    stages_isMissing = missing.0(stages);
    if stages_isMissing then L3("render") else L3(stages);
  L3(stages_orDefault):
    st stages = stages_orDefault;
    outputEncoding_isMissing = missing.0(outputEncoding);
    if outputEncoding_isMissing then L4("UTF-8") else L4(outputEncoding);
  L4(outputEncoding_orDefault):
    st outputEncoding = outputEncoding_orDefault;
    commentDontrun_isMissing = missing.0(commentDontrun);
    if commentDontrun_isMissing then L5(TRUE) else L5(commentDontrun);
  L5(commentDontrun_orDefault):
    st commentDontrun = commentDontrun_orDefault;
    commentDonttest_isMissing = missing.0(commentDonttest);
    if commentDonttest_isMissing then L6(FALSE) else L6(commentDonttest);
  L6(commentDonttest_orDefault):
    st commentDonttest = commentDonttest_orDefault;
    st `...` = ddd;
    r2 = clos inner1342500664;
    st WriteLines = r2;
    st dropNewline = FALSE;
    r3 = clos inner1246119658;
    st of0 = r3;
    r4 = clos inner3773442701;
    st of1 = r4;
    r5 = clos inner2501545716;
    st wr = r5;
    r6 = clos inner2501545716;
    st remap = r6;
    r7 = clos inner2183572191;
    st render = r7;
    prepare_Rd = ldf prepare_Rd;
    check L56() else D0();
  D0():
    deopt 22 [];
  L56():
    p1 = prom<V +>{
      Rd1 = ld Rd;
      Rd2 = force? Rd1;
      checkMissing(Rd2);
      return Rd2;
    };
    p2 = prom<V +>{
      defines1 = ld defines;
      defines2 = force? defines1;
      checkMissing(defines2);
      return defines2;
    };
    p3 = prom<V +>{
      stages1 = ld stages;
      stages2 = force? stages1;
      checkMissing(stages2);
      return stages2;
    };
    ddd1 = ld `...`;
    r11 = dyn prepare_Rd[, defines, stages, `...`](p1, p2, p3, ddd1);
    check L57() else D1();
  D1():
    deopt 29 [r11];
  L57():
    st Rd = r11;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L58() else L59();
  L7(r13):
    st Rdfile = r13;
    RdTags = ldf RdTags;
    check L62() else D4();
  L58():
    Rd3 = ld Rd;
    check L60() else D2();
  L59():
    r12 = dyn base(<sym Rd>, "Rdfile");
    goto L7(r12);
  D2():
    deopt 33 [Rd3];
  D4():
    deopt 40 [];
  L60():
    Rd4 = force? Rd3;
    checkMissing(Rd4);
    attr = ldf attr in base;
    r14 = dyn attr(Rd4, "Rdfile");
    check L61() else D3();
  L62():
    p4 = prom<V +>{
      Rd5 = ld Rd;
      Rd6 = force? Rd5;
      checkMissing(Rd6);
      return Rd6;
    };
    r16 = dyn RdTags(p4);
    check L63() else D5();
  D3():
    deopt 37 [r14];
  D5():
    deopt 42 [r16];
  L61():
    goto L7(r14);
  L63():
    st sections = r16;
    which = ldf which;
    check L64() else D6();
  D6():
    deopt 45 [];
  L64():
    p5 = prom<V +>{
      sections = ld sections;
      sections1 = force? sections;
      checkMissing(sections1);
      r17 = `==`(sections1, "\\examples");
      return r17;
    };
    r19 = dyn which(p5);
    check L65() else D7();
  D7():
    deopt 47 [r19];
  L65():
    st where = r19;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L66() else L67();
  L8(r21):
    c1 = `as.logical`(r21);
    if c1 then L70() else L9();
  L66():
    where = ld where;
    check L68() else D8();
  L67():
    r20 = dyn base1(<sym where>);
    goto L8(r20);
  D8():
    deopt 51 [where];
  L9():
    goto L54();
  L54():
    sym18 = ldf invisible;
    base18 = ldf invisible in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L221() else L222();
  L68():
    where1 = force? where;
    checkMissing(where1);
    length = ldf length in base;
    r22 = dyn length(where1);
    check L69() else D9();
  L70():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L71() else L72();
  D9():
    deopt 54 [r22];
  L10(r24):
    c3 = `as.logical`(r24);
    if c3 then L74() else L11();
  L55(r171):
    popenv;
    return r171;
  L69():
    goto L8(r22);
  L71():
    out1 = ld out;
    check L73() else D10();
  L72():
    r23 = dyn base2(<sym out>);
    goto L10(r23);
  L221():
    out9 = ld out;
    check L223() else D85();
  L222():
    r170 = dyn base18(<sym out>);
    goto L55(r170);
  D10():
    deopt 56 [out1];
  D85():
    deopt 322 [out9];
  L11():
    out7 = ld out;
    check L85() else D16();
  L14():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L92() else L93();
  L73():
    out2 = force? out1;
    checkMissing(out2);
    c2 = `is.character`(out2);
    goto L10(c2);
  L74():
    out3 = ld out;
    check L75() else D11();
  L223():
    out10 = force? out9;
    checkMissing(out10);
    invisible = ldf invisible in base;
    r172 = dyn invisible(out10);
    check L224() else D86();
  D11():
    deopt 59 [out3];
  D16():
    deopt 76 [out7];
  D86():
    deopt 325 [r172];
  L15(r39):
    r41 = `>`(r39, 1);
    c6 = `as.logical`(r41);
    if c6 then L96() else L16();
  L75():
    out4 = force? out3;
    checkMissing(out4);
    r25 = `==`(out4, "");
    c4 = `as.logical`(r25);
    if c4 then L76() else L12();
  L85():
    out8 = force? out7;
    checkMissing(out8);
    st con = out8;
    summary = ldf summary;
    check L86() else D17();
  L92():
    where2 = ld where;
    check L94() else D19();
  L93():
    r38 = dyn base4(<sym where>);
    goto L15(r38);
  L224():
    goto L55(r172);
  D17():
    deopt 80 [];
  D19():
    deopt 87 [where2];
  L12():
    file = ldf file;
    check L80() else D14();
  L13(r27):
    goto L14();
  L16():
    goto L17();
  L17():
    Rd7 = ld Rd;
    check L100() else D23();
  L76():
    stdout = ldf stdout;
    check L77() else D12();
  L86():
    p7 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r34 = dyn summary(p7);
    check L87() else D18();
  L94():
    where3 = force? where2;
    checkMissing(where3);
    length1 = ldf length in base;
    r40 = dyn length1(where3);
    check L95() else D20();
  L96():
    warning = ldf warning;
    check L97() else D21();
  D12():
    deopt 64 [];
  D14():
    deopt 68 [];
  D18():
    deopt 82 [r34];
  D20():
    deopt 90 [r40];
  D21():
    deopt 94 [];
  D23():
    deopt 99 [Rd7];
  L77():
    r26 = dyn stdout();
    check L78() else D13();
  L80():
    p6 = prom<V +>{
      out5 = ld out;
      out6 = force? out5;
      checkMissing(out6);
      return out6;
    };
    r29 = dyn file(p6, "wt");
    check L81() else D15();
  L87():
    c5 = `is.object`(r34);
    if c5 then L89() else L90(r34);
  L95():
    goto L15(r40);
  L97():
    r42 = dyn warning("more than one \\examples section, using the first");
    check L98() else D22();
  L100():
    Rd8 = force? Rd7;
    checkMissing(Rd8);
    c7 = `is.object`(Rd8);
    if c7 then L101() else L102(Rd8);
  D13():
    deopt 65 [r26];
  D15():
    deopt 71 [r29];
  D22():
    deopt 96 [r42];
  L18(dx5):
    st ex = dx5;
    unlist = ldf unlist;
    check L108() else D25();
  L78():
    st con = r26;
    goto L13(r26);
  L81():
    st con = r29;
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L82() else L83();
  L88(dx3):
    st out = dx3;
    goto L14();
  L89():
    dr2 = tryDispatchBuiltin.1("$", r34);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L91() else L90(dr2);
  L90(r36):
    r37 = `$`(r36, <sym description>);
    goto L88(r37);
  L98():
    goto L17();
  L101():
    dr4 = tryDispatchBuiltin.1("[[", Rd8);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L103() else L102(dr4);
  L102(Rd10):
    where4 = ld where;
    check L104() else D24();
  D24():
    deopt 101 [Rd10, where4];
  D25():
    deopt 109 [];
  L82():
    on_exit = ldf `on.exit` in base;
    r31 = dyn on_exit(<lang close(con)>);
    goto L13(r31);
  L83():
    r30 = dyn base3(<lang close(con)>);
    goto L13(r30);
  L91():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L88(dx2);
  L103():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(dx4);
  L104():
    where5 = force? where4;
    checkMissing(where5);
    c8 = `is.object`(where5);
    if c8 then L105() else L106(Rd10, where5);
  L108():
    p8 = prom<V +>{
      ex = ld ex;
      ex1 = force? ex;
      checkMissing(ex1);
      return ex1;
    };
    r47 = dyn unlist(p8);
    check L109() else D26();
  D26():
    deopt 111 [r47];
  L19(Rd14, dx7):
    __1 = ldf `[[` in base;
    r45 = dyn __1(Rd14, dx7);
    goto L18(r45);
  L105():
    dr6 = tryDispatchBuiltin.1("[", where5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L107() else L106(Rd10, dr6);
  L106(Rd12, where7):
    __ = ldf `[` in base;
    r44 = dyn __(where7, 1);
    goto L19(Rd12, r44);
  L109():
    st exl = r47;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L110() else L111();
  L20(r49):
    c9 = `as.logical`(r49);
    if c9 then L114() else L21(c9);
  L107():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L19(Rd10, dx6);
  L110():
    exl = ld exl;
    check L112() else D27();
  L111():
    r48 = dyn base5(<sym exl>);
    goto L20(r48);
  D27():
    deopt 115 [exl];
  L21(c11):
    c18 = `as.logical`(c11);
    if c18 then L121() else L23();
  L112():
    exl1 = force? exl;
    checkMissing(exl1);
    length2 = ldf length in base;
    r50 = dyn length2(exl1);
    check L113() else D28();
  L114():
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L115() else L116();
  D28():
    deopt 118 [r50];
  L22(c14, r52):
    c15 = `as.logical`(r52);
    c16 = `&&`(c14, c15);
    goto L21(c16);
  L23():
    goto L31();
  L31():
    sections4 = ld sections;
    check L144() else D42();
  L113():
    goto L20(r50);
  L115():
    Encoding = ldf Encoding;
    check L117() else D29();
  L116():
    r51 = dyn base6(<lang `!=`(Encoding(exl), "unknown")>);
    goto L22(c9, r51);
  L121():
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L122() else L123();
  D29():
    deopt 122 [c9];
  D42():
    deopt 169 [sections4];
  L24(r58):
    c19 = `as.logical`(r58);
    if c19 then L126() else L25();
  L117():
    p9 = prom<V +>{
      exl2 = ld exl;
      exl3 = force? exl2;
      checkMissing(exl3);
      return exl3;
    };
    r54 = dyn Encoding(p9);
    check L118() else D30();
  L122():
    sections2 = ld sections;
    check L124() else D32();
  L123():
    r57 = dyn base7(<lang `<-`(f, `==`(sections, "\\encoding"))>);
    goto L24(r57);
  L144():
    sections5 = force? sections4;
    checkMissing(sections5);
    r76 = `==`(sections5, "\\name");
    st nameblk = r76;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L145() else L146();
  D30():
    deopt 124 [c9, r54];
  D32():
    deopt 132 [sections2];
  L25():
    goto L30(NULL);
  L30(r74):
    goto L31();
  L32(r78):
    c23 = `as.logical`(r78);
    if c23 then L149() else L33();
  L118():
    r55 = `!=`(r54, "unknown");
    any = ldf any in base;
    r56 = dyn any(r55);
    check L119() else D31();
  L124():
    sections3 = force? sections2;
    checkMissing(sections3);
    r59 = `==`(sections3, "\\encoding");
    st f = r59;
    any1 = ldf any in base;
    r60 = dyn any1(r59);
    check L125() else D33();
  L126():
    unlist1 = ldf unlist;
    check L127() else D34();
  L145():
    nameblk = ld nameblk;
    check L147() else D43();
  L146():
    r77 = dyn base9(<sym nameblk>);
    goto L32(r77);
  D31():
    deopt 128 [c9, r56];
  D33():
    deopt 138 [r60];
  D34():
    deopt 140 [];
  D43():
    deopt 176 [nameblk];
  L33():
    goto L37();
  L37():
    _Rd_format_title = ldf `.Rd_format_title`;
    check L164() else D51();
  L119():
    goto L22(c9, r56);
  L125():
    goto L24(r60);
  L127():
    p11 = prom<V +>{
      Rd15 = ld Rd;
      Rd16 = force? Rd15;
      checkMissing(Rd16);
      c20 = `is.object`(Rd16);
      if c20 then L1() else L2(Rd16);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", Rd16);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(Rd18):
      which1 = ldf which;
      p10 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      r62 = dyn which1(p10);
      __2 = ldf `[` in base;
      r63 = dyn __2(Rd18, r62);
      goto L0(r63);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r65 = dyn unlist1(p11);
    check L128() else D35();
  L147():
    nameblk1 = force? nameblk;
    checkMissing(nameblk1);
    any2 = ldf any in base;
    r79 = dyn any2(nameblk1);
    check L148() else D44();
  L149():
    sym10 = ldf `as.character`;
    base10 = ldf `as.character` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L150() else L151();
  D35():
    deopt 142 [r65];
  D44():
    deopt 179 [r79];
  D51():
    deopt 203 [];
  L34(r81):
    st name = r81;
    of1 = ldf of0;
    check L161() else D49();
  L128():
    c21 = `is.object`(r65);
    if c21 then L129() else L130(r65);
  L148():
    goto L32(r79);
  L150():
    Rd19 = ld Rd;
    check L152() else D45();
  L151():
    r80 = dyn base10(<lang `[[`(Rd, which.max(nameblk))>);
    goto L34(r80);
  L164():
    p15 = prom<V +>{
      _Rd_get_title = ldf `.Rd_get_title`;
      p14 = prom<V +>{
        Rd26 = ld Rd;
        Rd27 = force? Rd26;
        checkMissing(Rd27);
        return Rd27;
      };
      r91 = dyn _Rd_get_title(p14);
      return r91;
    };
    r93 = dyn _Rd_format_title(p15);
    check L165() else D52();
  D45():
    deopt 182 [Rd19];
  D49():
    deopt 195 [];
  D52():
    deopt 205 [r93];
  L26(dx11):
    st encoding = dx11;
    sym8 = ldf nzchar;
    base8 = ldf nzchar in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L132() else L133();
  L129():
    dr10 = tryDispatchBuiltin.1("[", r65);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L131() else L130(dr10);
  L130(r67):
    __3 = ldf `[` in base;
    r68 = dyn __3(r67, 1);
    goto L26(r68);
  L152():
    Rd20 = force? Rd19;
    checkMissing(Rd20);
    c24 = `is.object`(Rd20);
    if c24 then L153() else L154(Rd20);
  L161():
    p13 = prom<V +>{
      name = ld name;
      name1 = force? name;
      checkMissing(name1);
      return name1;
    };
    r88 = dyn of1("### Name: ", p13, "\n");
    check L162() else D50();
  L165():
    st title = r93;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L166() else L167();
  D50():
    deopt 199 [r88];
  L27(r70):
    c22 = `as.logical`(r70);
    if c22 then L136() else L28();
  L35(dx13):
    as_character = ldf `as.character` in base;
    r86 = dyn as_character(dx13);
    check L160() else D48();
  L38(r95):
    r97 = `!`(r95);
    c25 = `as.logical`(r97);
    if c25 then L170() else L39();
  L131():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L26(dx10);
  L132():
    outputEncoding1 = ld outputEncoding;
    check L134() else D36();
  L133():
    r69 = dyn base8(<sym outputEncoding>);
    goto L27(r69);
  L153():
    dr12 = tryDispatchBuiltin.1("[[", Rd20);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L155() else L154(dr12);
  L154(Rd22):
    sym11 = ldf `which.max`;
    base11 = ldf `which.max` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L156() else L157();
  L162():
    goto L37();
  L166():
    title = ld title;
    check L168() else D53();
  L167():
    r94 = dyn base12(<sym title>);
    goto L38(r94);
  D36():
    deopt 149 [outputEncoding1];
  D48():
    deopt 192 [r86];
  D53():
    deopt 209 [title];
  L28():
    encoding = ld encoding;
    check L139() else D39();
  L29():
    of0 = ldf of0;
    check L140() else D40();
  L36(Rd25, r83):
    __4 = ldf `[[` in base;
    r85 = dyn __4(Rd25, r83);
    goto L35(r85);
  L39():
    goto L40();
  L40():
    of2 = ldf of0;
    check L172() else D55();
  L134():
    outputEncoding2 = force? outputEncoding1;
    checkMissing(outputEncoding2);
    nzchar = ldf nzchar in base;
    r71 = dyn nzchar(outputEncoding2);
    check L135() else D37();
  L136():
    outputEncoding3 = ld outputEncoding;
    check L137() else D38();
  L155():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L35(dx12);
  L156():
    nameblk2 = ld nameblk;
    check L158() else D46();
  L157():
    r82 = dyn base11(<sym nameblk>);
    goto L36(Rd22, r82);
  L160():
    goto L34(r86);
  L168():
    title1 = force? title;
    checkMissing(title1);
    length3 = ldf length in base;
    r96 = dyn length3(title1);
    check L169() else D54();
  L170():
    st title = "No title found";
    goto L40();
  D37():
    deopt 152 [r71];
  D38():
    deopt 153 [outputEncoding3];
  D39():
    deopt 156 [encoding];
  D40():
    deopt 160 [];
  D46():
    deopt 186 [Rd22, nameblk2];
  D54():
    deopt 212 [r96];
  D55():
    deopt 220 [];
  L135():
    goto L27(r71);
  L137():
    outputEncoding4 = force? outputEncoding3;
    checkMissing(outputEncoding4);
    st encoding = outputEncoding4;
    goto L29();
  L139():
    encoding1 = force? encoding;
    checkMissing(encoding1);
    st outputEncoding = encoding1;
    goto L29();
  L140():
    p12 = prom<V +>{
      encoding2 = ld encoding;
      encoding3 = force? encoding2;
      checkMissing(encoding3);
      return encoding3;
    };
    r73 = dyn of0("### Encoding: ", p12, "\n");
    check L141() else D41();
  L158():
    nameblk3 = force? nameblk2;
    checkMissing(nameblk3);
    which_max = ldf `which.max` in base;
    r84 = dyn which_max(nameblk3);
    check L159() else D47();
  L169():
    goto L38(r96);
  L172():
    p18 = prom<V +>{
      wr = ldf wr;
      p17 = prom<V +>{
        paste0 = ldf paste0;
        p16 = prom<V +>{
          title2 = ld title;
          title3 = force? title2;
          checkMissing(title3);
          return title3;
        };
        r100 = dyn paste0("Title: ", p16);
        return r100;
      };
      r102 = dyn wr(p17);
      return r102;
    };
    r104 = dyn of2(p18, "\n");
    check L173() else D56();
  D41():
    deopt 164 [r73];
  D47():
    deopt 189 [Rd22, r84];
  D56():
    deopt 223 [r104];
  L141():
    goto L30(r73);
  L159():
    goto L36(Rd22, r84);
  L173():
    sections6 = ld sections;
    check L174() else D57();
  D57():
    deopt 224 [sections6];
  L174():
    sections7 = force? sections6;
    checkMissing(sections7);
    r105 = `==`(sections7, "\\alias");
    st aliasblks = r105;
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L175() else L176();
  L41(r107):
    c26 = `as.logical`(r107);
    if c26 then L179() else L42();
  L175():
    aliasblks = ld aliasblks;
    check L177() else D58();
  L176():
    r106 = dyn base13(<sym aliasblks>);
    goto L41(r106);
  D58():
    deopt 231 [aliasblks];
  L42():
    goto L44();
  L44():
    sections8 = ld sections;
    check L193() else D69();
  L177():
    aliasblks1 = force? aliasblks;
    checkMissing(aliasblks1);
    any3 = ldf any in base;
    r108 = dyn any3(aliasblks1);
    check L178() else D59();
  L179():
    unlist2 = ldf unlist;
    check L180() else D60();
  D59():
    deopt 234 [r108];
  D60():
    deopt 236 [];
  D69():
    deopt 266 [sections8];
  L178():
    goto L41(r108);
  L180():
    p19 = prom<V +>{
      Rd28 = ld Rd;
      Rd29 = force? Rd28;
      checkMissing(Rd29);
      c27 = `is.object`(Rd29);
      if c27 then L1() else L2(Rd29);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", Rd29);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(Rd31):
      aliasblks2 = ld aliasblks;
      aliasblks3 = force? aliasblks2;
      __5 = ldf `[` in base;
      r109 = dyn __5(Rd31, aliasblks3);
      goto L0(r109);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r111 = dyn unlist2(p19);
    check L181() else D61();
  L193():
    sections9 = force? sections8;
    checkMissing(sections9);
    r131 = `==`(sections9, "\\keyword");
    st keyblks = r131;
    sym14 = ldf any;
    base14 = ldf any in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L194() else L195();
  D61():
    deopt 238 [r111];
  L45(r133):
    c30 = `as.logical`(r133);
    if c30 then L198() else L46();
  L181():
    st aliases = r111;
    grep = ldf grep;
    check L182() else D62();
  L194():
    keyblks = ld keyblks;
    check L196() else D70();
  L195():
    r132 = dyn base14(<sym keyblks>);
    goto L45(r132);
  D62():
    deopt 241 [];
  D70():
    deopt 273 [keyblks];
  L46():
    goto L50();
  L50():
    writeLines = ldf writeLines;
    check L210() else D78();
  L182():
    p20 = prom<V +>{
      aliases = ld aliases;
      aliases1 = force? aliases;
      checkMissing(aliases1);
      return aliases1;
    };
    r113 = dyn grep[, , fixed](" ", p20, TRUE);
    check L183() else D63();
  L196():
    keyblks1 = force? keyblks;
    checkMissing(keyblks1);
    any4 = ldf any in base;
    r134 = dyn any4(keyblks1);
    check L197() else D71();
  L198():
    _w_o_ = ldf `%w/o%`;
    check L199() else D72();
  D63():
    deopt 246 [r113];
  D71():
    deopt 276 [r134];
  D72():
    deopt 278 [];
  D78():
    deopt 299 [];
  L183():
    st sp = r113;
    paste1 = ldf paste0;
    check L184() else D64();
  L197():
    goto L45(r134);
  L199():
    p28 = prom<V +>{
      trimws = ldf trimws;
      p27 = prom<V +>{
        unlist3 = ldf unlist;
        p26 = prom<V +>{
          Rd32 = ld Rd;
          Rd33 = force? Rd32;
          checkMissing(Rd33);
          c31 = `is.object`(Rd33);
          if c31 then L1() else L2(Rd33);
        L0(dx21):
          return dx21;
        L1():
          dr20 = tryDispatchBuiltin.1("[", Rd33);
          dc10 = getTryDispatchBuiltinDispatched(dr20);
          if dc10 then L3() else L2(dr20);
        L2(Rd35):
          keyblks2 = ld keyblks;
          keyblks3 = force? keyblks2;
          __7 = ldf `[` in base;
          r135 = dyn __7(Rd35, keyblks3);
          goto L0(r135);
        L3():
          dx20 = getTryDispatchBuiltinValue(dr20);
          goto L0(dx20);
        };
        r137 = dyn unlist3(p26);
        return r137;
      };
      r139 = dyn trimws(p27);
      return r139;
    };
    p29 = prom<V +>{
      _Rd_keywords_auto = ld `.Rd_keywords_auto`;
      _Rd_keywords_auto1 = force? _Rd_keywords_auto;
      checkMissing(_Rd_keywords_auto1);
      return _Rd_keywords_auto1;
    };
    r142 = dyn _w_o_(p28, p29);
    check L200() else D73();
  L210():
    p34 = prom<V +>{
      sym16 = ldf c;
      base16 = ldf c in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r157):
      return r157;
    L1():
      c33 = ldf c in base;
      r158 = dyn c33("", "### ** Examples");
      goto L0(r158);
    L2():
      r156 = dyn base16("", "### ** Examples");
      goto L0(r156);
    };
    p35 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    r161 = dyn writeLines(p34, p35);
    check L211() else D79();
  D64():
    deopt 249 [];
  D73():
    deopt 281 [r142];
  D79():
    deopt 302 [r161];
  L184():
    p21 = prom<V +>{
      aliases2 = ld aliases;
      aliases3 = force? aliases2;
      checkMissing(aliases3);
      c28 = `is.object`(aliases3);
      if c28 then L1() else L2(aliases3);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", aliases3);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(aliases5):
      sp = ld sp;
      sp1 = force? sp;
      __6 = ldf `[` in base;
      r114 = dyn __6(aliases5, sp1);
      goto L0(r114);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r116 = dyn paste1("'", p21, "'");
    check L185() else D65();
  L200():
    st keys = r142;
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L201() else L202();
  L211():
    sym17 = ldf seq_along;
    base17 = ldf seq_along in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L212() else L213();
  D65():
    deopt 253 [r116];
  L47(r144):
    c32 = `as.logical`(r144);
    if c32 then L205() else L48();
  L51(r163):
    s = toForSeq(r163);
    l3 = length(s);
    i = 0;
    goto L52(i);
  L185():
    l = ld aliases;
    c29 = `is.object`(l);
    if c29 then L186() else L187(r116, l);
  L201():
    keys = ld keys;
    check L203() else D74();
  L202():
    r143 = dyn base15(<sym keys>);
    goto L47(r143);
  L212():
    ex2 = ld ex;
    check L214() else D80();
  L213():
    r162 = dyn base17(<sym ex>);
    goto L51(r162);
  D74():
    deopt 285 [keys];
  D80():
    deopt 304 [ex2];
  L43(dx19):
    st aliases = dx19;
    of3 = ldf of0;
    check L190() else D67();
  L48():
    goto L49(NULL);
  L49(r154):
    goto L50();
  L52(i1):
    i2 = `+`.1(i1, 1);
    c34 = `<`.1(l3, i2);
    if c34 then L215() else L53();
  L186():
    dr18 = tryDispatchBuiltin.0("[<-", l, r116);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L188() else L187(r116, dr18);
  L187(r118, l2):
    sp2 = ld sp;
    check L189() else D66();
  L203():
    keys1 = force? keys;
    checkMissing(keys1);
    length4 = ldf length in base;
    r145 = dyn length4(keys1);
    check L204() else D75();
  L205():
    of4 = ldf of0;
    check L206() else D76();
  L214():
    ex3 = force? ex2;
    checkMissing(ex3);
    r164 = seq_along(ex3);
    goto L51(r164);
  D66():
    deopt 255 [r118, l2, r116, sp2];
  D67():
    deopt 260 [];
  D75():
    deopt 288 [r145];
  D76():
    deopt 290 [];
  L53():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    render = ldf render;
    check L216() else D81();
  L188():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L43(dx18);
  L189():
    sp3 = force? sp2;
    ___ = ldf `[<-` in base;
    r121 = dyn ___(l2, r116, sp3);
    goto L43(r121);
  L190():
    p25 = prom<V +>{
      wr1 = ldf wr;
      p24 = prom<V +>{
        paste2 = ldf paste0;
        p23 = prom<V +>{
          paste3 = ldf paste;
          p22 = prom<V +>{
            aliases6 = ld aliases;
            aliases7 = force? aliases6;
            checkMissing(aliases7);
            return aliases7;
          };
          r123 = dyn paste3[, collapse](p22, " ");
          return r123;
        };
        r125 = dyn paste2("Aliases: ", p23);
        return r125;
      };
      r127 = dyn wr1(p24);
      return r127;
    };
    r129 = dyn of3(p25, "\n");
    check L191() else D68();
  L204():
    goto L47(r145);
  L206():
    p33 = prom<V +>{
      wr2 = ldf wr;
      p32 = prom<V +>{
        paste4 = ldf paste;
        p31 = prom<V +>{
          paste5 = ldf paste0;
          p30 = prom<V +>{
            keys2 = ld keys;
            keys3 = force? keys2;
            checkMissing(keys3);
            return keys3;
          };
          r147 = dyn paste5[, collapse](p30, " ");
          return r147;
        };
        r149 = dyn paste4("Keywords: ", p31);
        return r149;
      };
      r151 = dyn wr2(p32);
      return r151;
    };
    r153 = dyn of4(p33, "\n");
    check L207() else D77();
  L215():
    of5 = ldf of1;
    check L218() else D83();
  D68():
    deopt 263 [r129];
  D77():
    deopt 293 [r153];
  D81():
    deopt 308 [i2];
  D83():
    deopt 315 [];
  L191():
    goto L44();
  L207():
    goto L49(r153);
  L216():
    p36 = prom<V +>{
      ex4 = ld ex;
      ex5 = force? ex4;
      checkMissing(ex5);
      c35 = `is.object`(ex5);
      if c35 then L1() else L2(ex5);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("[[", ex5);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(ex7):
      i5 = ld i;
      i6 = force? i5;
      __8 = ldf `[[` in base;
      r165 = dyn __8(ex7, i6);
      goto L0(r165);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    r167 = dyn render(p36);
    check L217() else D82();
  L218():
    r168 = dyn of5("\n\n\n");
    check L219() else D84();
  D82():
    deopt 310 [i2, r167];
  D84():
    deopt 317 [r168];
  L217():
    goto L52(i2);
  L219():
    goto L54();
  }
}
fun inner1342500664(x, con, outputEncoding, `...`) {
  (reg x:*, reg con:*, reg outputEncoding:*, reg ddd:dots) -+> V { var x:*, var con:*, var outputEncoding:*, var `...`:dots?, reg outputEncoding1:*, reg outputEncoding2:V, reg r:V, reg c:L, reg iconv:cls, reg x1:*, reg x2:V, reg p:p(V +), reg outputEncoding3:*, reg outputEncoding4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg anyNA:cls, reg r6:V, reg c1:L, reg iconv1:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg outputEncoding5:*, reg outputEncoding6:V, reg p3:p(V +), reg r9:V, reg r10:V, reg writeLines:cls, reg x7:*, reg x8:V, reg p4:p(V +), reg con1:*, reg con2:V, reg p5:p(V +), reg ddd1:dots?, reg r14:V |
    mkenv;
    st x = x;
    st con = con;
    st outputEncoding = outputEncoding;
    st `...` = ddd;
    outputEncoding1 = ld outputEncoding;
    check L5() else D0();
  D0():
    deopt 0 [outputEncoding1];
  L5():
    outputEncoding2 = force? outputEncoding1;
    checkMissing(outputEncoding2);
    r = `!=`(outputEncoding2, "UTF-8");
    c = `as.logical`(r);
    if c then L6() else L0();
  L0():
    goto L4();
  L4():
    writeLines = ldf writeLines;
    check L18() else D7();
  L6():
    iconv = ldf iconv;
    check L7() else D1();
  D1():
    deopt 5 [];
  D7():
    deopt 35 [];
  L7():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      outputEncoding3 = ld outputEncoding;
      outputEncoding4 = force? outputEncoding3;
      checkMissing(outputEncoding4);
      return outputEncoding4;
    };
    r3 = dyn iconv[, , , mark](p, "UTF-8", p1, FALSE);
    check L8() else D2();
  L18():
    p4 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p5 = prom<V +>{
      con1 = ld con;
      con2 = force? con1;
      checkMissing(con2);
      return con2;
    };
    ddd1 = ld `...`;
    r14 = dyn writeLines[, , useBytes, `...`](p4, p5, TRUE, ddd1);
    check L19() else D8();
  D2():
    deopt 11 [r3];
  D8():
    deopt 41 [r14];
  L8():
    st x = r3;
    sym = ldf anyNA;
    base = ldf anyNA in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L19():
    popenv;
    return r14;
  L1(r5):
    c1 = `as.logical`(r5);
    if c1 then L13() else L2();
  L9():
    x3 = ld x;
    check L11() else D3();
  L10():
    r4 = dyn base(<sym x>);
    goto L1(r4);
  D3():
    deopt 15 [x3];
  L2():
    goto L3(NULL);
  L3(r10):
    goto L4();
  L11():
    x4 = force? x3;
    checkMissing(x4);
    anyNA = ldf anyNA in base;
    r6 = dyn anyNA(x4);
    check L12() else D4();
  L13():
    iconv1 = ldf iconv;
    check L14() else D5();
  D4():
    deopt 18 [r6];
  D5():
    deopt 20 [];
  L12():
    goto L1(r6);
  L14():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p3 = prom<V +>{
      outputEncoding5 = ld outputEncoding;
      outputEncoding6 = force? outputEncoding5;
      checkMissing(outputEncoding6);
      return outputEncoding6;
    };
    r9 = dyn iconv1[, , , sub, mark](p2, "UTF-8", p3, "byte", FALSE);
    check L15() else D6();
  D6():
    deopt 28 [r9];
  L15():
    st x = r9;
    goto L3(r9);
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg of1:cls, reg paste0:cls, reg ddd1:dots?, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st `...` = ddd;
    of1 = ldf of1;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      paste0 = ldf paste0;
      ddd1 = ld `...`;
      r = dyn paste0[`...`](ddd1);
      return r;
    };
    r2 = dyn of1(p);
    check L1() else D1();
  D1():
    deopt 3 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner3773442701(text) {
  (reg text:*) -+> V { var text:*, reg dropNewline:*, reg dropNewline1:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg c5:L, reg r1:V, reg text1:*, reg text2:V, reg length:cls, reg r2:V, reg c6:L, reg c7:V, reg c9:L, reg psub:cls, reg text3:*, reg text4:V, reg c10:L, reg text6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V, reg p:p(V +), reg r5:V, reg l:*, reg c11:L, reg r7:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___:cls, reg r10:V, reg WriteLines:cls, reg text7:*, reg text8:V, reg p1:p(V +), reg con:*, reg con1:V, reg p2:p(V +), reg outputEncoding:*, reg outputEncoding1:V, reg p3:p(V +), reg r15:V |
    mkenv;
    st text = text;
    dropNewline = ld dropNewline;
    check L5() else D0();
  D0():
    deopt 0 [dropNewline];
  L5():
    dropNewline1 = force? dropNewline;
    checkMissing(dropNewline1);
    c = `as.logical`(dropNewline1);
    if c then L6() else L0(c);
  L0(c2):
    c9 = `as.logical`(c2);
    if c9 then L12() else L2();
  L6():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(c5, r1):
    c6 = `as.logical`(r1);
    c7 = `&&`(c5, c6);
    goto L0(c7);
  L2():
    goto L4();
  L4():
    WriteLines = ldf WriteLines;
    check L19() else D5();
  L7():
    text1 = ld text;
    check L9() else D1();
  L8():
    r = dyn base(<sym text>);
    goto L1(c, r);
  L12():
    psub = ldf psub;
    check L13() else D3();
  D1():
    deopt 4 [c, text1];
  D3():
    deopt 10 [];
  D5():
    deopt 26 [];
  L9():
    text2 = force? text1;
    checkMissing(text2);
    length = ldf length in base;
    r2 = dyn length(text2);
    check L10() else D2();
  L13():
    p = prom<V +>{
      text3 = ld text;
      text4 = force? text3;
      checkMissing(text4);
      c10 = `is.object`(text4);
      if c10 then L1() else L2(text4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", text4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(text6):
      __ = ldf `[` in base;
      r3 = dyn __(text6, 1);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r5 = dyn psub("^\n", "", p);
    check L14() else D4();
  L19():
    p1 = prom<V +>{
      text7 = ld text;
      text8 = force? text7;
      checkMissing(text8);
      return text8;
    };
    p2 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    p3 = prom<V +>{
      outputEncoding = ld outputEncoding;
      outputEncoding1 = force? outputEncoding;
      checkMissing(outputEncoding1);
      return outputEncoding1;
    };
    r15 = dyn WriteLines[, , , sep](p1, p2, p3, "");
    check L20() else D6();
  D2():
    deopt 7 [c, r2];
  D4():
    deopt 14 [r5];
  D6():
    deopt 32 [r15];
  L10():
    goto L1(c, r2);
  L14():
    l = ld text;
    c11 = `is.object`(l);
    if c11 then L15() else L16(r5, l);
  L20():
    popenv;
    return r15;
  L3(dx3):
    st text = dx3;
    sst dropNewline = FALSE;
    goto L4();
  L15():
    dr2 = tryDispatchBuiltin.0("[<-", l, r5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(r5, dr2);
  L16(r7, l2):
    ___ = ldf `[<-` in base;
    r10 = dyn ___(l2, r5, 1);
    goto L3(r10);
  L17():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste0:cls, reg strwrap:cls, reg remap:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st x = x;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      strwrap = ldf strwrap;
      p1 = prom<V +>{
        remap = ldf remap;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        r1 = dyn remap(p);
        return r1;
      };
      r3 = dyn strwrap[, , indent, exdent](p1, 73, 1, 3);
      return r3;
    };
    r5 = dyn paste0[, , collapse]("###", p2, "\n");
    check L1() else D1();
  D1():
    deopt 6 [r5];
  L1():
    popenv;
    return r5;
  }
}
fun inner2183572191(x, prefix) {
  (reg x:*, reg prefix:*) -+> V { var x:*, var prefix:*, reg prefix_isMissing:L, reg prefix_orDefault:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg attr:cls, reg r3:V, reg _in_:cls, reg tag:*, reg tag1:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg c1:L, reg renderDont:cls, reg r10:V, reg tag2:*, reg tag3:V, reg r11:V, reg c2:L, reg renderDont1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg c3:cls, reg r14:V, reg p2:p(V +), reg r16:V, reg tag4:*, reg tag5:V, reg r17:V, reg c4:L, reg renderDont2:cls, reg commentDontrun:*, reg commentDontrun1:V, reg p3:p(V +), reg commentDontrun2:*, reg commentDontrun3:V, reg p4:p(V +), reg r20:V, reg tag6:*, reg tag7:V, reg r21:V, reg c5:L, reg renderDont3:cls, reg commentDonttest:*, reg commentDonttest1:V, reg p5:p(V +), reg r23:V, reg tag8:*, reg tag9:V, reg r24:V, reg c6:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg x3:*, reg x4:V, reg attr1:cls, reg r27:V, reg c7:L, reg r29:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r30:V, reg r31:V, reg c8:L, reg _in_1:cls, reg tag10:*, reg tag11:V, reg p6:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg c9:cls, reg r35:V, reg p7:p(V +), reg r37:V, reg c10:L, reg of1:cls, reg r38:V, reg tag12:*, reg tag13:V, reg r39:V, reg c11:L, reg c12:V, reg tag14:*, reg tag15:V, reg r40:V, reg c14:L, reg c15:V, reg c17:L, reg testRdConditional:cls, reg x5:*, reg x6:V, reg p8:p(V +), reg Rdfile:*, reg Rdfile1:V, reg p9:p(V +), reg r43:V, reg c18:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg x7:*, reg x8:V, reg c19:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r46:V, reg r47:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c20:L, reg x11:V, reg render:cls, reg x12:*, reg x13:V, reg c21:L, reg x15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r48:V, reg c22:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg i5:*, reg i6:V, reg __3:cls, reg r49:V, reg p10:p(V +), reg prefix1:*, reg prefix2:V, reg p11:p(V +), reg r52:V, reg tag16:*, reg tag17:V, reg r53:V, reg c23:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r54:V, reg r55:V, reg x16:*, reg x17:V, reg c24:L, reg x19:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r56:V, reg r57:I, reg s1:V, reg l1:I, reg i7:I, reg i8:I, reg i9:I, reg c25:L, reg x20:V, reg render1:cls, reg x21:*, reg x22:V, reg c26:L, reg x24:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __5:cls, reg r58:V, reg c27:L, reg dx15:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg i12:*, reg i13:V, reg __6:cls, reg r59:V, reg p12:p(V +), reg prefix3:*, reg prefix4:V, reg p13:p(V +), reg r62:V, reg tag18:*, reg tag19:V, reg r63:V, reg c28:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r64:V, reg r65:V, reg x25:*, reg x26:V, reg r66:I, reg s2:V, reg l2:I, reg i14:I, reg i15:I, reg i16:I, reg c29:L, reg x27:V, reg of2:cls, reg x28:*, reg x29:V, reg c30:L, reg x31:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg i19:*, reg i20:V, reg __7:cls, reg r67:V, reg p14:p(V +), reg r69:V, reg _in_2:cls, reg tag20:*, reg tag21:V, reg p15:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r71:V, reg r72:V, reg c31:cls, reg r73:V, reg p16:p(V +), reg r75:V, reg c32:L, reg unlist:cls, reg x32:*, reg x33:V, reg p17:p(V +), reg r77:V, reg of3:cls, reg prefix5:*, reg prefix6:V, reg p18:p(V +), reg remap:cls, reg txt:*, reg txt1:V, reg p19:p(V +), reg r80:V, reg p20:p(V +), reg r82:V |
    mkenv;
    st x = x;
    prefix_isMissing = missing.0(prefix);
    if prefix_isMissing then L0("") else L0(prefix);
  L0(prefix_orDefault):
    st prefix = prefix_orDefault;
    r = clos inner325822954;
    st renderDont = r;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L1(r2):
    st tag = r2;
    _in_ = ldf `%in%`;
    check L32() else D2();
  L28():
    x1 = ld x;
    check L30() else D0();
  L29():
    r1 = dyn base(<sym x>, "Rd_tag");
    goto L1(r1);
  D0():
    deopt 5 [x1];
  D2():
    deopt 12 [];
  L30():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r3 = dyn attr(x2, "Rd_tag");
    check L31() else D1();
  L32():
    p = prom<V +>{
      tag = ld tag;
      tag1 = force? tag;
      checkMissing(tag1);
      return tag1;
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c = ldf c in base;
      r7 = dyn c("\\dontshow", "\\testonly");
      goto L0(r7);
    L2():
      r5 = dyn base1("\\dontshow", "\\testonly");
      goto L0(r5);
    };
    r9 = dyn _in_(p, p1);
    check L33() else D3();
  D1():
    deopt 9 [r3];
  D3():
    deopt 15 [r9];
  L31():
    goto L1(r3);
  L33():
    c1 = `as.logical`(r9);
    if c1 then L34() else L2();
  L2():
    tag2 = ld tag;
    check L38() else D6();
  L34():
    renderDont = ldf renderDont;
    check L35() else D4();
  D4():
    deopt 17 [];
  D6():
    deopt 22 [tag2];
  L35():
    r10 = dyn renderDont[, comment]("Don't show", FALSE);
    check L36() else D5();
  L38():
    tag3 = force? tag2;
    checkMissing(tag3);
    r11 = `==`(tag3, "\\dontdiff");
    c2 = `as.logical`(r11);
    if c2 then L39() else L3();
  D5():
    deopt 21 [r10];
  L3():
    tag4 = ld tag;
    check L43() else D9();
  L36():
    popenv;
    return r10;
  L39():
    renderDont1 = ldf renderDont;
    check L40() else D7();
  D7():
    deopt 27 [];
  D9():
    deopt 32 [tag4];
  L40():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      c3 = ldf c in base;
      r14 = dyn c3("IGNORE_RDIFF_BEGIN", "IGNORE_RDIFF_END");
      goto L0(r14);
    L2():
      r12 = dyn base2("IGNORE_RDIFF_BEGIN", "IGNORE_RDIFF_END");
      goto L0(r12);
    };
    r16 = dyn renderDont1[, comment](p2, FALSE);
    check L41() else D8();
  L43():
    tag5 = force? tag4;
    checkMissing(tag5);
    r17 = `==`(tag5, "\\dontrun");
    c4 = `as.logical`(r17);
    if c4 then L44() else L4();
  D8():
    deopt 31 [r16];
  L4():
    tag6 = ld tag;
    check L48() else D12();
  L41():
    popenv;
    return r16;
  L44():
    renderDont2 = ldf renderDont;
    check L45() else D10();
  D10():
    deopt 37 [];
  D12():
    deopt 43 [tag6];
  L45():
    p3 = prom<V +>{
      commentDontrun = ld commentDontrun;
      commentDontrun1 = force? commentDontrun;
      checkMissing(commentDontrun1);
      return commentDontrun1;
    };
    p4 = prom<V +>{
      commentDontrun2 = ld commentDontrun;
      commentDontrun3 = force? commentDontrun2;
      checkMissing(commentDontrun3);
      return commentDontrun3;
    };
    r20 = dyn renderDont2[, , label]("Not run", p3, p4);
    check L46() else D11();
  L48():
    tag7 = force? tag6;
    checkMissing(tag7);
    r21 = `==`(tag7, "\\donttest");
    c5 = `as.logical`(r21);
    if c5 then L49() else L5();
  D11():
    deopt 42 [r20];
  L5():
    tag8 = ld tag;
    check L53() else D15();
  L46():
    popenv;
    return r20;
  L49():
    renderDont3 = ldf renderDont;
    check L50() else D13();
  D13():
    deopt 48 [];
  D15():
    deopt 54 [tag8];
  L50():
    p5 = prom<V +>{
      commentDonttest = ld commentDonttest;
      commentDonttest1 = force? commentDonttest;
      checkMissing(commentDonttest1);
      return commentDonttest1;
    };
    r23 = dyn renderDont3[, , xtra1]("No test", p5, FALSE);
    check L51() else D14();
  L53():
    tag9 = force? tag8;
    checkMissing(tag9);
    r24 = `==`(tag9, "COMMENT");
    c6 = `as.logical`(r24);
    if c6 then L54() else L6();
  D14():
    deopt 53 [r23];
  L6():
    _in_1 = ldf `%in%`;
    check L65() else D18();
  L51():
    popenv;
    return r23;
  L54():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  D18():
    deopt 78 [];
  L7(r26):
    c7 = `is.object`(r26);
    if c7 then L59() else L60(r26);
  L55():
    x3 = ld x;
    check L57() else D16();
  L56():
    r25 = dyn base3(<sym x>, "srcref");
    goto L7(r25);
  L65():
    p6 = prom<V +>{
      tag10 = ld tag;
      tag11 = force? tag10;
      checkMissing(tag11);
      return tag11;
    };
    p7 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      c9 = ldf c in base;
      r35 = dyn c9("\\dots", "\\ldots");
      goto L0(r35);
    L2():
      r33 = dyn base4("\\dots", "\\ldots");
      goto L0(r33);
    };
    r37 = dyn _in_1(p6, p7);
    check L66() else D19();
  D16():
    deopt 60 [x3];
  D19():
    deopt 81 [r37];
  L8(dx1):
    r31 = `==`(dx1, 1);
    c8 = `as.logical`(r31);
    if c8 then L62() else L9();
  L57():
    x4 = force? x3;
    checkMissing(x4);
    attr1 = ldf attr in base;
    r27 = dyn attr1(x4, "srcref");
    check L58() else D17();
  L59():
    dr = tryDispatchBuiltin.1("[", r26);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L61() else L60(dr);
  L60(r29):
    __ = ldf `[` in base;
    r30 = dyn __(r29, 2);
    goto L8(r30);
  L66():
    c10 = `as.logical`(r37);
    if c10 then L67() else L10();
  D17():
    deopt 64 [r27];
  L9():
    invisible.0();
    popenv;
    return NULL;
  L10():
    tag12 = ld tag;
    check L71() else D22();
  L58():
    goto L7(r27);
  L61():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L62():
    sst dropNewline = TRUE;
    invisible.0();
    popenv;
    return TRUE;
  L67():
    of1 = ldf of1;
    check L68() else D20();
  D20():
    deopt 83 [];
  D22():
    deopt 86 [tag12];
  L68():
    r38 = dyn of1("...");
    check L69() else D21();
  L71():
    tag13 = force? tag12;
    checkMissing(tag13);
    r39 = `==`(tag13, "\\if");
    c11 = `as.logical`(r39);
    if c11 then L11(c11) else L72();
  D21():
    deopt 85 [r38];
  L11(c12):
    c17 = `as.logical`(c12);
    if c17 then L75() else L12();
  L69():
    popenv;
    return r38;
  L72():
    tag14 = ld tag;
    check L73() else D23();
  D23():
    deopt 90 [c11, tag14];
  L12():
    tag18 = ld tag;
    check L102() else D33();
  L73():
    tag15 = force? tag14;
    checkMissing(tag15);
    r40 = `==`(tag15, "\\ifelse");
    c14 = `as.logical`(r40);
    c15 = `||`(c11, c14);
    goto L11(c15);
  L75():
    testRdConditional = ldf testRdConditional;
    check L76() else D24();
  D24():
    deopt 96 [];
  D33():
    deopt 140 [tag18];
  L76():
    p8 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p9 = prom<V +>{
      Rdfile = ld Rdfile;
      Rdfile1 = force? Rdfile;
      checkMissing(Rdfile1);
      return Rdfile1;
    };
    r43 = dyn testRdConditional("example", p8, p9);
    check L77() else D25();
  L102():
    tag19 = force? tag18;
    checkMissing(tag19);
    r63 = `==`(tag19, "\\out");
    c28 = `as.logical`(r63);
    if c28 then L103() else L23();
  D25():
    deopt 100 [r43];
  L23():
    _in_2 = ldf `%in%`;
    check L111() else D37();
  L77():
    c18 = `as.logical`(r43);
    if c18 then L78() else L13();
  L103():
    sym7 = ldf seq_along;
    base7 = ldf seq_along in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L104() else L105();
  D37():
    deopt 157 [];
  L13():
    tag16 = ld tag;
    check L89() else D29();
  L24(r65):
    s2 = toForSeq(r65);
    l2 = length(s2);
    i14 = 0;
    goto L25(i14);
  L78():
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L104():
    x25 = ld x;
    check L106() else D34();
  L105():
    r64 = dyn base7(<sym x>);
    goto L24(r64);
  L111():
    p15 = prom<V +>{
      tag20 = ld tag;
      tag21 = force? tag20;
      checkMissing(tag21);
      return tag21;
    };
    p16 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r72):
      return r72;
    L1():
      c31 = ldf c in base;
      r73 = dyn c31("USERMACRO", "\\newcommand", "\\renewcommand");
      goto L0(r73);
    L2():
      r71 = dyn base8("USERMACRO", "\\newcommand", "\\renewcommand");
      goto L0(r71);
    };
    r75 = dyn _in_2(p15, p16);
    check L112() else D38();
  D29():
    deopt 117 [tag16];
  D34():
    deopt 145 [x25];
  D38():
    deopt 160 [r75];
  L14(r45):
    s = toForSeq(r45);
    l = length(s);
    i = 0;
    goto L16(i);
  L25(i15):
    i16 = `+`.1(i15, 1);
    c29 = `<`.1(l2, i16);
    if c29 then L107() else L26();
  L79():
    x7 = ld x;
    check L81() else D26();
  L80():
    r44 = dyn base5(<lang `[[`(x, 2)>);
    goto L14(r44);
  L89():
    tag17 = force? tag16;
    checkMissing(tag17);
    r53 = `==`(tag17, "\\ifelse");
    c23 = `as.logical`(r53);
    if c23 then L90() else L18();
  L106():
    x26 = force? x25;
    checkMissing(x26);
    r66 = seq_along(x26);
    goto L24(r66);
  L112():
    c32 = `as.logical`(r75);
    if c32 then L113() else L27();
  D26():
    deopt 102 [x7];
  L16(i1):
    i2 = `+`.1(i1, 1);
    c20 = `<`.1(l, i2);
    if c20 then L85() else L17();
  L18():
    invisible.0();
    popenv;
    return NULL;
  L26():
    x27 = `[[`(s2, i16, NULL, TRUE);
    st i = x27;
    of2 = ldf of1;
    check L108() else D35();
  L27():
    unlist = ldf unlist;
    check L115() else D39();
  L81():
    x8 = force? x7;
    checkMissing(x8);
    c19 = `is.object`(x8);
    if c19 then L82() else L83(x8);
  L90():
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L91() else L92();
  L107():
    invisible.0();
    popenv;
    return i16;
  L113():
    popenv;
    return NULL;
  D35():
    deopt 149 [i16];
  D39():
    deopt 164 [];
  L15(dx3):
    r47 = seq_along(dx3);
    goto L14(r47);
  L17():
    x11 = `[[`(s, i2, NULL, TRUE);
    st i = x11;
    render = ldf render;
    check L86() else D27();
  L19(r55):
    s1 = toForSeq(r55);
    l1 = length(s1);
    i7 = 0;
    goto L21(i7);
  L82():
    dr2 = tryDispatchBuiltin.1("[[", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L84() else L83(dr2);
  L83(x10):
    __1 = ldf `[[` in base;
    r46 = dyn __1(x10, 2);
    goto L15(r46);
  L85():
    invisible.0();
    popenv;
    return i2;
  L91():
    x16 = ld x;
    check L93() else D30();
  L92():
    r54 = dyn base6(<lang `[[`(x, 3)>);
    goto L19(r54);
  L108():
    p14 = prom<V +>{
      x28 = ld x;
      x29 = force? x28;
      checkMissing(x29);
      c30 = `is.object`(x29);
      if c30 then L1() else L2(x29);
    L0(dx19):
      return dx19;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", x29);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(x31):
      i19 = ld i;
      i20 = force? i19;
      __7 = ldf `[[` in base;
      r67 = dyn __7(x31, i20);
      goto L0(r67);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx18);
    };
    r69 = dyn of2(p14);
    check L109() else D36();
  L115():
    p17 = prom<V +>{
      x32 = ld x;
      x33 = force? x32;
      checkMissing(x33);
      return x33;
    };
    r77 = dyn unlist(p17);
    check L116() else D40();
  D27():
    deopt 109 [i2];
  D30():
    deopt 122 [x16];
  D36():
    deopt 151 [i16, r69];
  D40():
    deopt 166 [r77];
  L21(i8):
    i9 = `+`.1(i8, 1);
    c25 = `<`.1(l1, i9);
    if c25 then L97() else L22();
  L84():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  L86():
    p10 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      c21 = `is.object`(x13);
      if c21 then L2() else L3(x13);
    L0(dx5):
      c22 = `is.object`(dx5);
      if c22 then L5() else L6(dx5);
    L2():
      dr4 = tryDispatchBuiltin.1("[[", x13);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(x15):
      __2 = ldf `[[` in base;
      r48 = dyn __2(x15, 2);
      goto L0(r48);
    L1(dx9):
      return dx9;
    L4():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    L5():
      dr6 = tryDispatchBuiltin.1("[[", dx5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L7() else L6(dr6);
    L6(dx7):
      i5 = ld i;
      i6 = force? i5;
      __3 = ldf `[[` in base;
      r49 = dyn __3(dx7, i6);
      goto L1(r49);
    L7():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx8);
    };
    p11 = prom<V +>{
      prefix1 = ld prefix;
      prefix2 = force? prefix1;
      checkMissing(prefix2);
      return prefix2;
    };
    r52 = dyn render(p10, p11);
    check L87() else D28();
  L93():
    x17 = force? x16;
    checkMissing(x17);
    c24 = `is.object`(x17);
    if c24 then L94() else L95(x17);
  L109():
    goto L25(i16);
  L116():
    st txt = r77;
    of3 = ldf of0;
    check L117() else D41();
  D28():
    deopt 112 [i2, r52];
  D41():
    deopt 169 [];
  L20(dx11):
    r57 = seq_along(dx11);
    goto L19(r57);
  L22():
    x20 = `[[`(s1, i9, NULL, TRUE);
    st i = x20;
    render1 = ldf render;
    check L98() else D31();
  L87():
    goto L16(i2);
  L94():
    dr8 = tryDispatchBuiltin.1("[[", x17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L96() else L95(dr8);
  L95(x19):
    __4 = ldf `[[` in base;
    r56 = dyn __4(x19, 3);
    goto L20(r56);
  L97():
    invisible.0();
    popenv;
    return i9;
  L117():
    p18 = prom<V +>{
      prefix5 = ld prefix;
      prefix6 = force? prefix5;
      checkMissing(prefix6);
      return prefix6;
    };
    p20 = prom<V +>{
      remap = ldf remap;
      p19 = prom<V +>{
        txt = ld txt;
        txt1 = force? txt;
        checkMissing(txt1);
        return txt1;
      };
      r80 = dyn remap(p19);
      return r80;
    };
    r82 = dyn of3(p18, p20);
    check L118() else D42();
  D31():
    deopt 129 [i9];
  D42():
    deopt 172 [r82];
  L96():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L20(dx10);
  L98():
    p12 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c26 = `is.object`(x22);
      if c26 then L2() else L3(x22);
    L0(dx13):
      c27 = `is.object`(dx13);
      if c27 then L5() else L6(dx13);
    L2():
      dr10 = tryDispatchBuiltin.1("[[", x22);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(x24):
      __5 = ldf `[[` in base;
      r58 = dyn __5(x24, 3);
      goto L0(r58);
    L1(dx17):
      return dx17;
    L4():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    L5():
      dr12 = tryDispatchBuiltin.1("[[", dx13);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(dx15):
      i12 = ld i;
      i13 = force? i12;
      __6 = ldf `[[` in base;
      r59 = dyn __6(dx15, i13);
      goto L1(r59);
    L7():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx16);
    };
    p13 = prom<V +>{
      prefix3 = ld prefix;
      prefix4 = force? prefix3;
      checkMissing(prefix4);
      return prefix4;
    };
    r62 = dyn render1(p12, p13);
    check L99() else D32();
  L118():
    popenv;
    return r82;
  D32():
    deopt 132 [i9, r62];
  L99():
    goto L21(i9);
  }
}
fun inner325822954(txt, comment, label, xtra1) {
  (reg txt:*, reg comment:*, reg label:*, reg xtra1:*) -+> V { var txt:*, var comment:*, var label:*, reg label_isMissing:L, reg label_orDefault:*, var xtra1:*, reg xtra1_isMissing:L, reg xtra1_orDefault:*, reg comment1:*, reg comment2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg txt1:*, reg txt2:V, reg length:cls, reg r3:V, reg r4:V, reg c:L, reg paste0:cls, reg txt3:*, reg txt4:V, reg p1:p(V +), reg r6:V, reg paste1:cls, reg txt5:*, reg txt6:V, reg p2:p(V +), reg r8:V, reg txt7:*, reg txt8:V, reg c1:L, reg txt10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg txt11:*, reg txt12:V, reg c2:L, reg txt14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r11:V, reg label1:*, reg label2:V, reg c3:L, reg of0:cls, reg label3:*, reg label4:V, reg p3:p(V +), reg r13:V, reg xtra2:*, reg xtra3:V, reg c4:L, reg c6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg c9:L, reg r16:V, reg x:*, reg x1:V, reg length1:cls, reg r17:V, reg r18:V, reg c10:L, reg c11:V, reg c13:L, reg render:cls, reg x2:*, reg x3:V, reg c14:L, reg x5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r19:V, reg p4:p(V +), reg prefix:*, reg prefix1:V, reg p5:p(V +), reg r22:V, reg grepl:cls, reg x6:*, reg x7:V, reg c15:L, reg x9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r23:V, reg c16:L, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r24:V, reg p6:p(V +), reg r26:V, reg r27:V, reg c17:L, reg c19:V, reg RdTags:cls, reg x10:*, reg x11:V, reg p7:p(V +), reg r29:V, reg c20:L, reg c22:L, reg r31:V, reg dr10:V, reg dc5:L, reg dx12:V, reg c24:L, reg dx13:V, reg __5:cls, reg r32:V, reg r33:V, reg c25:L, reg c26:V, reg c28:L, reg writeLines:cls, reg con:*, reg con1:V, reg p8:p(V +), reg r35:V, reg render1:cls, reg x12:*, reg x13:V, reg c29:L, reg x15:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg __6:cls, reg r36:V, reg p9:p(V +), reg paste2:cls, reg comment3:*, reg comment4:V, reg c30:L, reg p10:p(V +), reg prefix2:*, reg prefix3:V, reg p11:p(V +), reg r40:V, reg p12:p(V +), reg r42:V, reg render2:cls, reg x16:*, reg x17:V, reg c31:L, reg x19:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg __7:cls, reg r44:V, reg p13:p(V +), reg prefix4:*, reg prefix5:V, reg p14:p(V +), reg r47:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r48:V, reg r49:V, reg x20:*, reg x21:V, reg r50:I, reg c32:L, reg r52:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg __8:cls, reg r53:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c33:L, reg x22:V, reg render3:cls, reg x23:*, reg x24:V, reg c34:L, reg x26:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg i5:*, reg i6:V, reg __9:cls, reg r54:V, reg p15:p(V +), reg paste3:cls, reg comment5:*, reg comment6:V, reg c35:L, reg p16:p(V +), reg prefix6:*, reg prefix7:V, reg p17:p(V +), reg r58:V, reg p18:p(V +), reg r60:V, reg x27:*, reg x28:V, reg c36:L, reg x30:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r61:V, reg x33:V, reg r62:V, reg x34:*, reg x35:V, reg length2:cls, reg r63:V, reg __10:cls, reg r64:V, reg grepl1:cls, reg last:*, reg last1:V, reg c37:L, reg last3:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r65:V, reg last6:V, reg r66:V, reg last7:*, reg last8:V, reg length3:cls, reg r67:V, reg __11:cls, reg r68:V, reg p19:p(V +), reg r70:V, reg r71:V, reg c38:L, reg writeLines1:cls, reg con2:*, reg con3:V, reg p20:p(V +), reg r73:V, reg label5:*, reg label6:V, reg c39:L, reg of1:cls, reg label7:*, reg label8:V, reg p21:p(V +), reg r76:V |
    mkenv;
    st txt = txt;
    st comment = comment;
    label_isMissing = missing.0(label);
    if label_isMissing then L0(TRUE) else L0(label);
  L0(label_orDefault):
    st label = label_orDefault;
    xtra1_isMissing = missing.0(xtra1);
    if xtra1_isMissing then L1() else L2(xtra1);
  L1():
    p = prom<V +>{
      comment1 = ld comment;
      comment2 = force? comment1;
      checkMissing(comment2);
      return comment2;
    };
    goto L2(p);
  L2(xtra1_orDefault):
    st xtra1 = xtra1_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L3(r2):
    r4 = `==`(r2, 1);
    c = `as.logical`(r4);
    if c then L30() else L4();
  L26():
    txt1 = ld txt;
    check L28() else D0();
  L27():
    r1 = dyn base(<sym txt>);
    goto L3(r1);
  D0():
    deopt 2 [txt1];
  L4():
    txt7 = ld txt;
    check L36() else D6();
  L5():
    label1 = ld label;
    check L44() else D8();
  L28():
    txt2 = force? txt1;
    checkMissing(txt2);
    length = ldf length in base;
    r3 = dyn length(txt2);
    check L29() else D1();
  L30():
    paste0 = ldf paste0;
    check L31() else D2();
  D1():
    deopt 5 [r3];
  D2():
    deopt 9 [];
  D6():
    deopt 21 [txt7];
  D8():
    deopt 33 [label1];
  L29():
    goto L3(r3);
  L31():
    p1 = prom<V +>{
      txt3 = ld txt;
      txt4 = force? txt3;
      checkMissing(txt4);
      return txt4;
    };
    r6 = dyn paste0(p1, ": ");
    check L32() else D3();
  L36():
    txt8 = force? txt7;
    checkMissing(txt8);
    c1 = `is.object`(txt8);
    if c1 then L37() else L38(txt8);
  L44():
    label2 = force? label1;
    checkMissing(label2);
    c3 = `as.logical`(label2);
    if c3 then L45() else L8();
  D3():
    deopt 12 [r6];
  L6(dx1):
    st label1 = dx1;
    txt11 = ld txt;
    check L40() else D7();
  L8():
    goto L9();
  L9():
    xtra2 = ld xtra1;
    check L49() else D11();
  L32():
    st label1 = r6;
    paste1 = ldf paste0;
    check L33() else D4();
  L37():
    dr = tryDispatchBuiltin.1("[", txt8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(dr);
  L38(txt10):
    __ = ldf `[` in base;
    r10 = dyn __(txt10, 1);
    goto L6(r10);
  L45():
    of0 = ldf of0;
    check L46() else D9();
  D4():
    deopt 15 [];
  D7():
    deopt 27 [txt11];
  D9():
    deopt 36 [];
  D11():
    deopt 42 [xtra2];
  L33():
    p2 = prom<V +>{
      txt5 = ld txt;
      txt6 = force? txt5;
      checkMissing(txt6);
      return txt6;
    };
    r8 = dyn paste1("End(", p2, ")");
    check L34() else D5();
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L40():
    txt12 = force? txt11;
    checkMissing(txt12);
    c2 = `is.object`(txt12);
    if c2 then L41() else L42(txt12);
  L46():
    p3 = prom<V +>{
      label3 = ld label1;
      label4 = force? label3;
      checkMissing(label4);
      return label4;
    };
    r13 = dyn of0("## ", p3);
    check L47() else D10();
  L49():
    xtra3 = force? xtra2;
    checkMissing(xtra3);
    c4 = `as.logical`(xtra3);
    if c4 then L50() else L10(c4);
  D5():
    deopt 19 [r8];
  D10():
    deopt 39 [r13];
  L7(dx3):
    st label2 = dx3;
    goto L5();
  L10(c6):
    c13 = `as.logical`(c6);
    if c13 then L56() else L12();
  L34():
    st label2 = r8;
    goto L5();
  L41():
    dr2 = tryDispatchBuiltin.1("[", txt12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L43() else L42(dr2);
  L42(txt14):
    __1 = ldf `[` in base;
    r11 = dyn __1(txt14, 2);
    goto L7(r11);
  L47():
    goto L9();
  L50():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  L11(c9, r16):
    r18 = `==`(r16, 1);
    c10 = `as.logical`(r18);
    c11 = `&&`(c9, c10);
    goto L10(c11);
  L12():
    grepl = ldf grepl;
    check L60() else D16();
  L43():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L51():
    x = ld x;
    check L53() else D12();
  L52():
    r15 = dyn base1(<sym x>);
    goto L11(c4, r15);
  L56():
    render = ldf render;
    check L57() else D14();
  D12():
    deopt 46 [c4, x];
  D14():
    deopt 54 [];
  D16():
    deopt 59 [];
  L53():
    x1 = force? x;
    checkMissing(x1);
    length1 = ldf length in base;
    r17 = dyn length1(x1);
    check L54() else D13();
  L57():
    p4 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      c14 = `is.object`(x3);
      if c14 then L1() else L2(x3);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", x3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x5):
      __2 = ldf `[[` in base;
      r19 = dyn __2(x5, 1);
      goto L0(r19);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p5 = prom<V +>{
      prefix = ld prefix;
      prefix1 = force? prefix;
      checkMissing(prefix1);
      return prefix1;
    };
    r22 = dyn render(p4, p5);
    check L58() else D15();
  L60():
    p6 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      c15 = `is.object`(x7);
      if c15 then L2() else L3(x7);
    L0(dx7):
      c16 = `is.object`(dx7);
      if c16 then L5() else L6(dx7);
    L2():
      dr6 = tryDispatchBuiltin.1("[[", x7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(x9):
      __3 = ldf `[[` in base;
      r23 = dyn __3(x9, 1);
      goto L0(r23);
    L1(dx11):
      return dx11;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    L5():
      dr8 = tryDispatchBuiltin.1("[", dx7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6(dr8);
    L6(dx9):
      __4 = ldf `[` in base;
      r24 = dyn __4(dx9, 1);
      goto L1(r24);
    L7():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx10);
    };
    r26 = dyn grepl[, , perl]("^\n", p6, TRUE);
    check L61() else D17();
  D13():
    deopt 49 [c4, r17];
  D15():
    deopt 57 [r22];
  D17():
    deopt 64 [r26];
  L54():
    goto L11(c4, r17);
  L58():
    popenv;
    return r22;
  L61():
    r27 = `!`(r26);
    c17 = `as.logical`(r27);
    if c17 then L62() else L13(c17);
  L13(c19):
    c28 = `as.logical`(c19);
    if c28 then L69() else L15();
  L62():
    RdTags = ldf RdTags;
    check L63() else D18();
  D18():
    deopt 67 [c17];
  L15():
    render2 = ldf render;
    check L75() else D24();
  L16():
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L77() else L78();
  L63():
    p7 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    r29 = dyn RdTags(p7);
    check L64() else D19();
  L69():
    writeLines = ldf writeLines;
    check L70() else D20();
  D19():
    deopt 69 [c17, r29];
  D20():
    deopt 77 [];
  D24():
    deopt 87 [];
  L17(r49):
    c32 = `is.object`(r49);
    if c32 then L80() else L81(r49);
  L64():
    c20 = `is.object`(r29);
    if c20 then L65() else L66(c17, r29);
  L70():
    p8 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r35 = dyn writeLines("", p8);
    check L71() else D21();
  L75():
    p13 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      c31 = `is.object`(x17);
      if c31 then L1() else L2(x17);
    L0(dx17):
      return dx17;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", x17);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(x19):
      __7 = ldf `[[` in base;
      r44 = dyn __7(x19, 1);
      goto L0(r44);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx16);
    };
    p14 = prom<V +>{
      prefix4 = ld prefix;
      prefix5 = force? prefix4;
      checkMissing(prefix5);
      return prefix5;
    };
    r47 = dyn render2(p13, p14);
    check L76() else D25();
  L77():
    x20 = ld x;
    check L79() else D26();
  L78():
    r48 = dyn base2(<sym x>);
    goto L17(r48);
  D21():
    deopt 80 [r35];
  D25():
    deopt 90 [r47];
  D26():
    deopt 92 [x20];
  L14(c24, dx13):
    r33 = `!=`(dx13, "COMMENT");
    c25 = `as.logical`(r33);
    c26 = `&&`(c24, c25);
    goto L13(c26);
  L18(dx19):
    s = toForSeq(dx19);
    l = length(s);
    i = 0;
    goto L19(i);
  L65():
    dr10 = tryDispatchBuiltin.1("[", r29);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L67() else L66(c17, dr10);
  L66(c22, r31):
    __5 = ldf `[` in base;
    r32 = dyn __5(r31, 1);
    goto L14(c22, r32);
  L71():
    render1 = ldf render;
    check L72() else D22();
  L76():
    goto L16();
  L79():
    x21 = force? x20;
    checkMissing(x21);
    r50 = seq_along(x21);
    goto L17(r50);
  L80():
    dr16 = tryDispatchBuiltin.1("[", r49);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L82() else L81(dr16);
  L81(r52):
    __8 = ldf `[` in base;
    r53 = dyn __8(r52, -1.0);
    goto L18(r53);
  D22():
    deopt 82 [];
  L19(i1):
    i2 = `+`.1(i1, 1);
    c33 = `<`.1(l, i2);
    if c33 then L83() else L20();
  L67():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L14(c17, dx12);
  L72():
    p9 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      c29 = `is.object`(x13);
      if c29 then L1() else L2(x13);
    L0(dx15):
      return dx15;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", x13);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(x15):
      __6 = ldf `[[` in base;
      r36 = dyn __6(x15, 1);
      goto L0(r36);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    };
    p12 = prom<V +>{
      paste2 = ldf paste0;
      p10 = prom<V +>{
        comment3 = ld comment;
        comment4 = force? comment3;
        checkMissing(comment4);
        c30 = `as.logical`(comment4);
        if c30 then L1() else L0();
      L0():
        invisible.0();
        return NULL;
      L1():
        return "##D ";
      };
      p11 = prom<V +>{
        prefix2 = ld prefix;
        prefix3 = force? prefix2;
        checkMissing(prefix3);
        return prefix3;
      };
      r40 = dyn paste2(p10, p11);
      return r40;
    };
    r42 = dyn render1(p9, p12);
    check L73() else D23();
  L82():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L18(dx18);
  D23():
    deopt 85 [r42];
  L20():
    x22 = `[[`(s, i2, NULL, TRUE);
    st i = x22;
    render3 = ldf render;
    check L84() else D27();
  L73():
    goto L16();
  L83():
    x27 = ld x;
    check L86() else D29();
  D27():
    deopt 99 [i2];
  D29():
    deopt 106 [x27];
  L84():
    p15 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      c34 = `is.object`(x24);
      if c34 then L1() else L2(x24);
    L0(dx21):
      return dx21;
    L1():
      dr18 = tryDispatchBuiltin.1("[[", x24);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(x26):
      i5 = ld i;
      i6 = force? i5;
      __9 = ldf `[[` in base;
      r54 = dyn __9(x26, i6);
      goto L0(r54);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx20);
    };
    p18 = prom<V +>{
      paste3 = ldf paste0;
      p16 = prom<V +>{
        comment5 = ld comment;
        comment6 = force? comment5;
        checkMissing(comment6);
        c35 = `as.logical`(comment6);
        if c35 then L1() else L0();
      L0():
        invisible.0();
        return NULL;
      L1():
        return "##D ";
      };
      p17 = prom<V +>{
        prefix6 = ld prefix;
        prefix7 = force? prefix6;
        checkMissing(prefix7);
        return prefix7;
      };
      r58 = dyn paste3(p16, p17);
      return r58;
    };
    r60 = dyn render3(p15, p18);
    check L85() else D28();
  L86():
    x28 = force? x27;
    checkMissing(x28);
    c36 = `is.object`(x28);
    if c36 then L87() else L88(x28);
  D28():
    deopt 102 [i2, r60];
  L21(dx23):
    st last = dx23;
    grepl1 = ldf grepl;
    check L94() else D32();
  L85():
    goto L19(i2);
  L87():
    dr20 = tryDispatchBuiltin.1("[[", x28);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L89() else L88(dr20);
  L88(x30):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L90() else L91();
  D32():
    deopt 117 [];
  L22(x33, r62):
    __10 = ldf `[[` in base;
    r64 = dyn __10(x33, r62);
    goto L21(r64);
  L89():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L21(dx22);
  L90():
    x34 = ld x;
    check L92() else D30();
  L91():
    r61 = dyn base3(<sym x>);
    goto L22(x30, r61);
  L94():
    p19 = prom<V +>{
      last = ld last;
      last1 = force? last;
      checkMissing(last1);
      c37 = `is.object`(last1);
      if c37 then L2() else L3(last1);
    L0(dx25):
      return dx25;
    L2():
      dr22 = tryDispatchBuiltin.1("[", last1);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L4() else L3(dr22);
    L3(last3):
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L1(last6, r66):
      __11 = ldf `[` in base;
      r68 = dyn __11(last6, r66);
      goto L0(r68);
    L4():
      dx24 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx24);
    L5():
      last7 = ld last;
      last8 = force? last7;
      checkMissing(last8);
      length3 = ldf length in base;
      r67 = dyn length3(last8);
      goto L1(last3, r67);
    L6():
      r65 = dyn base4(<sym last>);
      goto L1(last3, r65);
    };
    r70 = dyn grepl1[, , perl]("\n$", p19, TRUE);
    check L95() else D33();
  D30():
    deopt 110 [x30, x34];
  D33():
    deopt 122 [r70];
  L92():
    x35 = force? x34;
    checkMissing(x35);
    length2 = ldf length in base;
    r63 = dyn length2(x35);
    check L93() else D31();
  L95():
    r71 = `!`(r70);
    c38 = `as.logical`(r71);
    if c38 then L96() else L23();
  D31():
    deopt 113 [x30, r63];
  L23():
    goto L24();
  L24():
    label5 = ld label;
    check L100() else D36();
  L93():
    goto L22(x30, r63);
  L96():
    writeLines1 = ldf writeLines;
    check L97() else D34();
  D34():
    deopt 125 [];
  D36():
    deopt 131 [label5];
  L97():
    p20 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    r73 = dyn writeLines1("", p20);
    check L98() else D35();
  L100():
    label6 = force? label5;
    checkMissing(label6);
    c39 = `as.logical`(label6);
    if c39 then L101() else L25();
  D35():
    deopt 128 [r73];
  L25():
    invisible.0();
    popenv;
    return NULL;
  L98():
    goto L24();
  L101():
    of1 = ldf of0;
    check L102() else D37();
  D37():
    deopt 134 [];
  L102():
    p21 = prom<V +>{
      label7 = ld label2;
      label8 = force? label7;
      checkMissing(label8);
      return label8;
    };
    r76 = dyn of1("## ", p21, "\n");
    check L103() else D38();
  D38():
    deopt 138 [r76];
  L103():
    sst dropNewline = TRUE;
    invisible.0();
    popenv;
    return TRUE;
  }
}