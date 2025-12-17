fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1528301216;
    st demo = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1528301216(topic, package, `lib.loc`, `character.only`, verbose, type, echo, ask, encoding) {
  (reg topic:*, reg package:*, reg lib_loc:*, reg character_only:*, reg verbose:*, reg type:*, reg echo:*, reg ask:*, reg encoding:*) -+> V { var topic:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var `character.only`:*, reg character_only_isMissing:L, reg character_only_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p1:p(V +), var echo:*, reg echo_isMissing:L, reg echo_orDefault:*, var ask:*, reg ask_isMissing:L, reg ask_orDefault:*, reg getOption1:cls, reg r6:V, reg p2:p(V +), var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg getOption2:cls, reg r8:V, reg p3:p(V +), reg match_arg:cls, reg type1:*, reg type2:V, reg p4:p(V +), reg r11:V, reg type3:*, reg type4:V, reg r12:V, reg html:*, reg html1:V, reg c1:L, reg str2logical:cls, reg Sys_getenv:cls, reg r13:V, reg p5:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg interactive:cls, reg r18:V, reg r19:V, reg c2:L, reg c3:V, reg enhancedHTML:*, reg enhancedHTML1:V, reg r20:V, reg c5:L, reg c6:V, reg c8:L, reg c9:V, reg requireNamespace:cls, reg r21:V, reg r22:V, reg c11:L, reg c12:V, reg c14:L, reg r23:V, reg html2:*, reg html3:V, reg c15:L, reg __:cls, reg r25:V, reg r26:cls, reg r27:V, reg port:*, reg port1:V, reg r28:V, reg c16:L, reg r29:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg lib_loc1:*, reg lib_loc2:V, reg c17:V, reg r32:V, reg c18:L, reg _Platform:*, reg _Platform1:V, reg c19:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r34:V, reg r35:V, reg c20:L, reg get:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg as_environment:cls, reg r38:V, reg p6:p(V +), reg r40:V, reg r41:V, reg getOption3:cls, reg r42:V, reg find_package:cls, reg package1:*, reg package2:V, reg p7:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p8:p(V +), reg verbose1:*, reg verbose2:V, reg p9:p(V +), reg r47:V, reg paths:*, reg paths1:V, reg c21:L, reg paths3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg dir_exists:cls, reg file_path:cls, reg paths4:*, reg paths5:V, reg p10:p(V +), reg r49:V, reg p11:p(V +), reg r51:V, reg __1:cls, reg r52:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r53:V, reg r54:V, reg missing:cls, reg r55:V, reg c22:L, reg html4:*, reg html5:V, reg c23:L, reg browseURL:cls, reg paste0:cls, reg port2:*, reg port3:V, reg p12:p(V +), reg paste1:cls, reg unique:cls, reg basename:cls, reg paths6:*, reg paths7:V, reg p13:p(V +), reg r58:V, reg p14:p(V +), reg r60:V, reg p15:p(V +), reg r62:V, reg p16:p(V +), reg r64:V, reg p17:p(V +), reg browser:*, reg browser1:V, reg p18:p(V +), reg r67:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r68:V, reg r69:V, reg invisible:cls, reg r70:V, reg matrix:cls, reg character:cls, reg r73:V, reg p19:p(V +), reg r75:V, reg paths8:*, reg paths9:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c24:L, reg x:V, reg file_test:cls, reg file_path1:cls, reg path:*, reg path1:V, reg p20:p(V +), reg r77:V, reg p21:p(V +), reg r79:V, reg c25:L, reg readRDS:cls, reg INDEX:*, reg INDEX1:V, reg p22:p(V +), reg r81:V, reg i7:I, reg NROW:cls, reg entries:*, reg entries1:V, reg p23:p(V +), reg r84:V, reg c26:L, reg rbind:cls, reg db:*, reg db1:V, reg p24:p(V +), reg cbind:cls, reg basename1:cls, reg path2:*, reg path3:V, reg p25:p(V +), reg r87:V, reg p26:p(V +), reg dirname:cls, reg path4:*, reg path5:V, reg p27:p(V +), reg r90:V, reg p28:p(V +), reg entries2:*, reg entries3:V, reg p29:p(V +), reg r93:V, reg p30:p(V +), reg r95:V, reg i10:I, reg sym6:cls, reg base6:cls, reg guard6:L, reg r97:V, reg r98:V, reg c27:cls, reg r99:V, reg l1:*, reg colnames__:cls, reg r100:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r101:V, reg r102:V, reg missing1:cls, reg r103:V, reg c28:L, reg paste2:cls, reg sQuote:cls, reg paste3:cls, reg r104:V, reg p31:p(V +), reg r106:V, reg p32:p(V +), reg r108:V, reg r109:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r110:V, reg r111:V, reg db2:*, reg db3:V, reg footer:*, reg footer1:V, reg list:cls, reg r112:V, reg l2:*, reg class__:cls, reg r113:V, reg y:*, reg y1:V, reg character_only1:*, reg character_only2:V, reg r116:V, reg c29:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r117:V, reg r118:V, reg substitute:cls, reg r119:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r120:V, reg r121:V, reg topic1:*, reg topic2:V, reg is_call:cls, reg r122:V, reg c30:L, reg c32:V, reg topic3:*, reg topic4:V, reg c33:L, reg c35:L, reg topic6:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c37:L, reg dx5:V, reg __2:cls, reg r123:V, reg r124:V, reg c38:L, reg c39:L, reg c40:V, reg topic7:*, reg topic8:V, reg c43:L, reg c46:L, reg c47:L, reg topic10:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c50:L, reg c51:L, reg dx7:V, reg __3:cls, reg r125:V, reg r126:V, reg c52:L, reg c53:V, reg c56:L, reg c57:V, reg c59:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r127:V, reg r128:V, reg topic11:*, reg topic12:V, reg c60:L, reg topic14:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r129:V, reg as_character:cls, reg r130:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r131:V, reg r132:V, reg topic15:*, reg topic16:V, reg c61:L, reg topic18:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r133:V, reg as_character1:cls, reg r134:V, reg r135:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r136:V, reg r137:V, reg topic19:*, reg topic20:V, reg as_character2:cls, reg r138:V, reg character1:cls, reg r140:V, reg file_path2:cls, reg paths10:*, reg paths11:V, reg p33:p(V +), reg r142:V, reg paths12:*, reg paths13:V, reg s1:V, reg l3:I, reg i11:I, reg i12:I, reg i13:I, reg c62:L, reg x1:V, reg basename2:cls, reg __6:cls, reg r143:V, reg r144:cls, reg p34:*, reg p35:V, reg p36:p(V +), reg r146:V, reg p37:p(V +), reg r148:V, reg files:*, reg files1:V, reg c63:L, reg i17:I, reg files3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i19:I, reg dx13:V, reg topic21:*, reg topic22:V, reg __7:cls, reg r149:V, reg r150:cls, reg files4:*, reg files5:V, reg p38:p(V +), reg r152:V, reg r153:V, reg __8:cls, reg r154:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r155:V, reg i22:I, reg r156:V, reg files6:*, reg files7:V, reg length:cls, reg r157:V, reg c64:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r158:V, reg i27:I, reg r159:V, reg available:*, reg available1:V, reg file_path3:cls, reg p39:*, reg p40:V, reg p41:p(V +), reg files8:*, reg files9:V, reg p42:p(V +), reg r162:V, reg c65:cls, reg r163:V, reg i28:I, reg sym16:cls, reg base16:cls, reg guard16:L, reg r165:V, reg r166:V, reg available2:*, reg available3:V, reg length1:cls, reg r167:V, reg r168:V, reg c66:L, reg stop:cls, reg gettextf:cls, reg sQuote1:cls, reg topic23:*, reg topic24:V, reg p43:p(V +), reg r170:V, reg p44:p(V +), reg r172:V, reg p45:p(V +), reg r174:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r176:V, reg r177:V, reg available4:*, reg available5:V, reg length2:cls, reg r178:V, reg r179:V, reg c67:L, reg available6:*, reg available7:V, reg c68:L, reg available9:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __9:cls, reg r180:V, reg warning:cls, reg gettextf1:cls, reg sQuote2:cls, reg topic25:*, reg topic26:V, reg p46:p(V +), reg r182:V, reg p47:p(V +), reg sQuote3:cls, reg dirname1:cls, reg available10:*, reg available11:V, reg c69:L, reg available13:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __10:cls, reg r184:V, reg p48:p(V +), reg r186:V, reg p49:p(V +), reg r188:V, reg p50:p(V +), reg r190:V, reg p51:p(V +), reg r192:V, reg dirname2:cls, reg dirname3:cls, reg available14:*, reg available15:V, reg p52:p(V +), reg r195:V, reg p53:p(V +), reg r197:V, reg html6:*, reg html7:V, reg c70:L, reg browseURL1:cls, reg paste4:cls, reg port4:*, reg port5:V, reg p54:p(V +), reg basename3:cls, reg pkgpath:*, reg pkgpath1:V, reg p55:p(V +), reg r200:V, reg p56:p(V +), reg __11:cls, reg r202:V, reg r203:cls, reg basename4:cls, reg available16:*, reg available17:V, reg p57:p(V +), reg r205:V, reg p58:p(V +), reg r207:V, reg p59:p(V +), reg r209:V, reg p60:p(V +), reg browser2:*, reg browser3:V, reg p61:p(V +), reg r212:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r213:V, reg r214:V, reg invisible1:cls, reg r215:V, reg file_exists:cls, reg file_path4:cls, reg pkgpath2:*, reg pkgpath3:V, reg p62:p(V +), reg r219:V, reg p63:p(V +), reg r221:V, reg c71:L, reg readRDS1:cls, reg file:*, reg file1:V, reg p64:p(V +), reg r223:V, reg c72:L, reg r225:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r226:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r227:V, reg r228:V, reg desc:*, reg desc1:V, reg length3:cls, reg r229:V, reg r230:V, reg c73:L, reg as_list:cls, reg desc2:*, reg desc3:V, reg p65:p(V +), reg r232:V, reg c74:L, reg r234:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __12:cls, reg r235:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r236:V, reg r237:V, reg enc:*, reg enc1:V, reg c75:V, reg r238:V, reg c76:L, reg enc2:*, reg enc3:V, reg enc4:V, reg r239:V, reg r240:V, reg ask1:*, reg ask2:V, reg r242:V, reg c77:L, reg echo1:*, reg echo2:V, reg c78:L, reg c80:V, reg __13:cls, reg r243:V, reg r244:cls, reg r245:V, reg c81:L, reg c82:V, reg _Device:*, reg _Device1:V, reg r246:V, reg c85:L, reg __14:cls, reg r247:V, reg r248:cls, reg ask3:*, reg ask4:V, reg p66:p(V +), reg r250:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r251:V, reg r252:V, reg on_exit:cls, reg r253:V, reg options:cls, reg ask5:*, reg ask6:V, reg p67:p(V +), reg r256:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r257:V, reg on_exit1:cls, reg r259:V, reg echo3:*, reg echo4:V, reg c86:L, reg cat:cls, reg topic27:*, reg topic28:V, reg p68:p(V +), reg sym23:cls, reg base23:cls, reg guard23:L, reg r261:V, reg r262:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r263:V, reg r264:V, reg topic29:*, reg topic30:V, reg nchar:cls, reg r265:V, reg rep_int:cls, reg r266:V, reg p69:p(V +), reg r268:V, reg ask7:*, reg ask8:V, reg c87:L, reg c89:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r269:V, reg c92:L, reg r270:V, reg interactive1:cls, reg r271:V, reg c93:L, reg c94:V, reg c96:L, reg readline:cls, reg r272:V, reg r273:V, reg source:cls, reg available18:*, reg available19:V, reg p70:p(V +), reg echo5:*, reg echo6:V, reg p71:p(V +), reg encoding1:*, reg encoding2:V, reg p72:p(V +), reg r278:V |
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
    character_only_isMissing = missing.0(character_only);
    if character_only_isMissing then L2(FALSE) else L2(character_only);
  L2(character_only_orDefault):
    st `character.only` = character_only_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L3() else L4(verbose);
  L3():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("verbose");
      return r;
    };
    goto L4(p);
  L4(verbose_orDefault):
    st verbose = verbose_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L5() else L6(type);
  L5():
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c("console", "html");
      goto L0(r4);
    L2():
      r2 = dyn base("console", "html");
      goto L0(r2);
    };
    goto L6(p1);
  L6(type_orDefault):
    st type = type_orDefault;
    echo_isMissing = missing.0(echo);
    if echo_isMissing then L7(TRUE) else L7(echo);
  L7(echo_orDefault):
    st echo = echo_orDefault;
    ask_isMissing = missing.0(ask);
    if ask_isMissing then L8() else L9(ask);
  L8():
    p2 = prom<V +>{
      getOption1 = ldf getOption;
      r6 = dyn getOption1("demo.ask");
      return r6;
    };
    goto L9(p2);
  L9(ask_orDefault):
    st ask = ask_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L10() else L11(encoding);
  L10():
    p3 = prom<V +>{
      getOption2 = ldf getOption;
      r8 = dyn getOption2("encoding");
      return r8;
    };
    goto L11(p3);
  L11(encoding_orDefault):
    st encoding = encoding_orDefault;
    match_arg = ldf `match.arg`;
    check L100() else D0();
  D0():
    deopt 1 [];
  L100():
    p4 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r11 = dyn match_arg(p4);
    check L101() else D1();
  D1():
    deopt 3 [r11];
  L101():
    st type = r11;
    type3 = ld type;
    check L102() else D2();
  D2():
    deopt 5 [type3];
  L102():
    type4 = force? type3;
    checkMissing(type4);
    r12 = `==`(type4, "html");
    st html = r12;
    html = ld html;
    check L103() else D3();
  D3():
    deopt 10 [html];
  L103():
    html1 = force? html;
    checkMissing(html1);
    c1 = `as.logical`(html1);
    if c1 then L104() else L12();
  L12():
    goto L18();
  L18():
    html2 = ld html;
    check L120() else D10();
  L104():
    str2logical = ldf str2logical;
    check L105() else D4();
  D4():
    deopt 13 [];
  D10():
    deopt 41 [html2];
  L105():
    p5 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r13 = dyn Sys_getenv("_R_HELP_ENABLE_ENHANCED_HTML_", "TRUE");
      return r13;
    };
    r15 = dyn str2logical(p5);
    check L106() else D5();
  L120():
    html3 = force? html2;
    checkMissing(html3);
    c15 = `as.logical`(html3);
    if c15 then L121() else L19();
  D5():
    deopt 15 [r15];
  L19():
    goto L27();
  L27():
    find_package = ldf `find.package`;
    check L145() else D21();
  L106():
    st enhancedHTML = r15;
    sym1 = ldf interactive;
    base1 = ldf interactive in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L107() else L108();
  L121():
    __ = ldf `::`;
    check L122() else D11();
  D11():
    deopt 44 [];
  D21():
    deopt 88 [];
  L13(r17):
    r19 = `!`(r17);
    c2 = `as.logical`(r19);
    if c2 then L14(c2) else L110();
  L107():
    interactive = ldf interactive in base;
    r18 = dyn interactive();
    check L109() else D6();
  L108():
    r16 = dyn base1();
    goto L13(r16);
  L122():
    r25 = dyn __("tools", "startDynamicHelp");
    check L123() else D12();
  L145():
    p7 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p8 = prom<V +>{
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      return lib_loc4;
    };
    p9 = prom<V +>{
      verbose1 = ld verbose;
      verbose2 = force? verbose1;
      checkMissing(verbose2);
      return verbose2;
    };
    r47 = dyn find_package[, , verbose](p7, p8, p9);
    check L146() else D22();
  D6():
    deopt 20 [r18];
  D12():
    deopt 47 [r25];
  D22():
    deopt 93 [r47];
  L14(c3):
    c8 = `as.logical`(c3);
    if c8 then L15(c8) else L113();
  L109():
    goto L13(r18);
  L110():
    enhancedHTML = ld enhancedHTML;
    check L111() else D7();
  L123():
    checkFun.0(r25);
    r26 = r25 as cls;
    r27 = dyn r26(NA_LGL);
    check L124() else D13();
  L146():
    st paths = r47;
    paths = ld paths;
    check L147() else D23();
  D7():
    deopt 22 [c2, enhancedHTML];
  D13():
    deopt 50 [r27];
  D23():
    deopt 95 [paths];
  L15(c9):
    c14 = `as.logical`(c9);
    if c14 then L117() else L16();
  L111():
    enhancedHTML1 = force? enhancedHTML;
    checkMissing(enhancedHTML1);
    r20 = `!`(enhancedHTML1);
    c5 = `as.logical`(r20);
    c6 = `||`(c2, c5);
    goto L14(c6);
  L113():
    requireNamespace = ldf requireNamespace;
    check L114() else D8();
  L124():
    st port = r27;
    port = ld port;
    check L125() else D14();
  L147():
    paths1 = force? paths;
    checkMissing(paths1);
    c21 = `is.object`(paths1);
    if c21 then L148() else L149(paths1);
  D8():
    deopt 27 [c8];
  D14():
    deopt 52 [port];
  L16():
    goto L17(NULL);
  L17(r23):
    goto L18();
  L28(dx3):
    st paths = dx3;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L153() else L154();
  L114():
    r21 = dyn requireNamespace[, quietly]("knitr", TRUE);
    check L115() else D9();
  L117():
    st html = FALSE;
    goto L17(FALSE);
  L125():
    port1 = force? port;
    checkMissing(port1);
    r28 = `<=`(port1, 0);
    c16 = `as.logical`(r28);
    if c16 then L126() else L20();
  L148():
    dr2 = tryDispatchBuiltin.1("[", paths1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L150() else L149(dr2);
  L149(paths3):
    dir_exists = ldf `dir.exists`;
    check L151() else D24();
  D9():
    deopt 31 [c8, r21];
  D24():
    deopt 98 [paths3];
  L20():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L128() else L129();
  L21(r29):
    goto L27();
  L29(r54):
    c22 = `as.logical`(r54);
    if c22 then L155() else L30();
  L115():
    r22 = `!`(r21);
    c11 = `as.logical`(r22);
    c12 = `||`(c8, c11);
    goto L15(c12);
  L126():
    st html = FALSE;
    goto L21(FALSE);
  L150():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L28(dx2);
  L151():
    p11 = prom<V +>{
      file_path = ldf `file.path`;
      p10 = prom<V +>{
        paths4 = ld paths;
        paths5 = force? paths4;
        checkMissing(paths5);
        return paths5;
      };
      r49 = dyn file_path(p10, "demo");
      return r49;
    };
    r51 = dyn dir_exists(p11);
    check L152() else D25();
  L153():
    missing = ldf missing in base;
    r55 = dyn missing(<sym topic>);
    goto L29(r55);
  L154():
    r53 = dyn base4(<sym topic>);
    goto L29(r53);
  D25():
    deopt 100 [paths3, r51];
  L22(r31):
    r32 = `!`(r31);
    c18 = `as.logical`(r32);
    if c18 then L131() else L23();
  L30():
    character_only1 = ld `character.only`;
    check L202() else D52();
  L128():
    lib_loc1 = ld `lib.loc`;
    check L130() else D15();
  L129():
    r30 = dyn base2(<sym lib.loc>);
    goto L22(r30);
  L152():
    __1 = ldf `[` in base;
    r52 = dyn __1(paths3, r51);
    goto L28(r52);
  L155():
    html4 = ld html;
    check L156() else D26();
  D15():
    deopt 60 [lib_loc1];
  D26():
    deopt 106 [html4];
  D52():
    deopt 214 [character_only1];
  L23():
    goto L24();
  L24():
    _Platform = ld `.Platform`;
    check L133() else D16();
  L130():
    lib_loc2 = force? lib_loc1;
    checkMissing(lib_loc2);
    c17 = `==`(lib_loc2, NULL);
    goto L22(c17);
  L131():
    st `lib.loc` = NULL;
    goto L24();
  L156():
    html5 = force? html4;
    checkMissing(html5);
    c23 = `as.logical`(html5);
    if c23 then L157() else L31();
  L202():
    character_only2 = force? character_only1;
    checkMissing(character_only2);
    r116 = `!`(character_only2);
    c29 = `as.logical`(r116);
    if c29 then L203() else L46();
  D16():
    deopt 69 [_Platform];
  L31():
    matrix = ldf matrix;
    check L165() else D30();
  L46():
    goto L60();
  L60():
    character1 = ldf character;
    check L243() else D63();
  L133():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c19 = `is.object`(_Platform1);
    if c19 then L135() else L136(_Platform1);
  L157():
    browseURL = ldf browseURL;
    check L158() else D27();
  L203():
    sym9 = ldf substitute;
    base9 = ldf substitute in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L204() else L205();
  D27():
    deopt 109 [];
  D30():
    deopt 121 [];
  D63():
    deopt 273 [];
  L47(r118):
    st topic = r118;
    sym10 = ldf `is.call`;
    base10 = ldf `is.call` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L206() else L207();
  L134(dx1):
    r35 = `==`(dx1, "AQUA");
    c20 = `as.logical`(r35);
    if c20 then L138() else L25();
  L135():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L137() else L136(dr);
  L136(_Platform3):
    r34 = `$`(_Platform3, <sym GUI>);
    goto L134(r34);
  L158():
    p17 = prom<V +>{
      paste0 = ldf paste0;
      p12 = prom<V +>{
        port2 = ld port;
        port3 = force? port2;
        checkMissing(port3);
        return port3;
      };
      p16 = prom<V +>{
        paste1 = ldf paste;
        p15 = prom<V +>{
          unique = ldf unique;
          p14 = prom<V +>{
            basename = ldf basename;
            p13 = prom<V +>{
              paths6 = ld paths;
              paths7 = force? paths6;
              checkMissing(paths7);
              return paths7;
            };
            r58 = dyn basename(p13);
            return r58;
          };
          r60 = dyn unique(p14);
          return r60;
        };
        r62 = dyn paste1[, collapse](p15, ";");
        return r62;
      };
      r64 = dyn paste0("http://127.0.0.1:", p12, "/doc/html/Search?package=", p16, "&agrep=0&types.demo=1&pattern=");
      return r64;
    };
    p18 = prom<V +>{
      browser = ld browser;
      browser1 = force? browser;
      checkMissing(browser1);
      return browser1;
    };
    r67 = dyn browseURL(p17, p18);
    check L159() else D28();
  L165():
    p19 = prom<V +>{
      character = ldf character;
      r73 = dyn character();
      return r73;
    };
    r75 = dyn matrix[, nrow, ncol](p19, 0, 4);
    check L166() else D31();
  L204():
    substitute = ldf substitute in base;
    r119 = dyn substitute(<sym topic>);
    goto L47(r119);
  L205():
    r117 = dyn base9(<sym topic>);
    goto L47(r117);
  L243():
    r140 = dyn character1();
    check L244() else D64();
  D28():
    deopt 112 [r67];
  D31():
    deopt 127 [r75];
  D64():
    deopt 274 [r140];
  L25():
    getOption3 = ldf getOption;
    check L142() else D19();
  L26(r41):
    st browser = r41;
    goto L21(r41);
  L48(r121):
    c30 = `as.logical`(r121);
    if c30 then L210() else L49(c30);
  L137():
    dx = getTryDispatchBuiltinValue(dr);
    goto L134(dx);
  L138():
    get = ldf get;
    check L139() else D17();
  L159():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L160() else L161();
  L166():
    st db = r75;
    paths8 = ld paths;
    check L167() else D32();
  L206():
    topic1 = ld topic;
    check L208() else D53();
  L207():
    r120 = dyn base10(<sym topic>);
    goto L48(r120);
  L244():
    st available = r140;
    file_path2 = ldf `file.path`;
    check L245() else D65();
  D17():
    deopt 75 [];
  D19():
    deopt 81 [];
  D32():
    deopt 129 [paths8];
  D53():
    deopt 223 [topic1];
  D65():
    deopt 277 [];
  L32(r69):
    popenv;
    return r69;
  L49(c32):
    c59 = `as.logical`(c32);
    if c59 then L222() else L53();
  L139():
    p6 = prom<V +>{
      sym3 = ldf `as.environment`;
      base3 = ldf `as.environment` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      as_environment = ldf `as.environment` in base;
      r38 = dyn as_environment("tools:RGUI");
      goto L0(r38);
    L2():
      r36 = dyn base3("tools:RGUI");
      goto L0(r36);
    };
    r40 = dyn get[, envir]("aqua.browser", p6);
    check L140() else D18();
  L142():
    r42 = dyn getOption3("browser");
    check L143() else D20();
  L160():
    invisible = ldf invisible in base;
    r70 = dyn invisible();
    check L162() else D29();
  L161():
    r68 = dyn base5();
    goto L32(r68);
  L167():
    paths9 = force? paths8;
    checkMissing(paths9);
    s = toForSeq(paths9);
    l = length(s);
    i = 0;
    goto L34(i);
  L208():
    topic2 = force? topic1;
    checkMissing(topic2);
    is_call = ldf `is.call` in base;
    r122 = dyn is_call(topic2);
    check L209() else D54();
  L210():
    topic3 = ld topic;
    check L211() else D55();
  L245():
    p33 = prom<V +>{
      paths10 = ld paths;
      paths11 = force? paths10;
      checkMissing(paths11);
      return paths11;
    };
    r142 = dyn file_path2(p33, "demo");
    check L246() else D66();
  D18():
    deopt 79 [r40];
  D20():
    deopt 83 [r42];
  D29():
    deopt 116 [r70];
  D54():
    deopt 226 [r122];
  D55():
    deopt 227 [c30, topic3];
  D66():
    deopt 280 [r142];
  L34(i1):
    i2 = `+`.1(i1, 1);
    c24 = `<`.1(l, i2);
    if c24 then L168() else L39();
  L53():
    sym13 = ldf `as.character`;
    base13 = ldf `as.character` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L238() else L239();
  L58(r135):
    goto L60();
  L140():
    goto L26(r40);
  L143():
    goto L26(r42);
  L162():
    goto L32(r70);
  L209():
    goto L48(r122);
  L211():
    topic4 = force? topic3;
    checkMissing(topic4);
    c33 = `is.object`(topic4);
    if c33 then L212() else L213(c30, topic4);
  L222():
    sym11 = ldf `as.character`;
    base11 = ldf `as.character` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L223() else L224();
  L246():
    st paths = r142;
    paths12 = ld paths;
    check L247() else D67();
  D67():
    deopt 282 [paths12];
  L39():
    x = `[[`(s, i2, NULL, TRUE);
    st path = x;
    st entries = NULL;
    file_test = ldf file_test;
    check L169() else D33();
  L50(c37, dx5):
    r124 = `==`(dx5, "::");
    c38 = `as.logical`(r124);
    if c38 then L51(c37, c38) else L215();
  L54(r128):
    st package = r128;
    sym12 = ldf `as.character`;
    base12 = ldf `as.character` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L230() else L231();
  L59(r137):
    st topic = r137;
    goto L58(r137);
  L168():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L181() else L182();
  L212():
    dr4 = tryDispatchBuiltin.1("[[", topic4);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L214() else L213(c30, dr4);
  L213(c35, topic6):
    __2 = ldf `[[` in base;
    r123 = dyn __2(topic6, 1);
    goto L50(c35, r123);
  L223():
    topic11 = ld topic;
    check L225() else D57();
  L224():
    r127 = dyn base11(<lang `[[`(topic, 2)>);
    goto L54(r127);
  L238():
    topic19 = ld topic;
    check L240() else D61();
  L239():
    r136 = dyn base13(<sym topic>);
    goto L59(r136);
  L247():
    paths13 = force? paths12;
    checkMissing(paths13);
    s1 = toForSeq(paths13);
    l3 = length(s1);
    i11 = 0;
    goto L61(i11);
  D33():
    deopt 135 [i2];
  D57():
    deopt 245 [topic11];
  D61():
    deopt 265 [topic19];
  L40(r98):
    l1 = ld db;
    colnames__ = ldf `colnames<-`;
    check L184() else D42();
  L51(c39, c40):
    c56 = `as.logical`(c40);
    c57 = `&&`(c39, c56);
    goto L49(c57);
  L56(r132):
    st topic = r132;
    goto L58(r132);
  L61(i12):
    i13 = `+`.1(i12, 1);
    c62 = `<`.1(l3, i13);
    if c62 then L248() else L67();
  L169():
    p21 = prom<V +>{
      file_path1 = ldf `file.path`;
      p20 = prom<V +>{
        path = ld path;
        path1 = force? path;
        checkMissing(path1);
        return path1;
      };
      r77 = dyn file_path1(p20, "Meta", "demo.rds");
      st INDEX = r77;
      invisible.0();
      return r77;
    };
    r79 = dyn file_test("-f", p21);
    check L170() else D34();
  L181():
    c27 = ldf c in base;
    r99 = dyn c27("Package", "LibPath", "Item", "Title");
    check L183() else D41();
  L182():
    r97 = dyn base6("Package", "LibPath", "Item", "Title");
    goto L40(r97);
  L214():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L50(c30, dx4);
  L215():
    topic7 = ld topic;
    check L216() else D56();
  L225():
    topic12 = force? topic11;
    checkMissing(topic12);
    c60 = `is.object`(topic12);
    if c60 then L226() else L227(topic12);
  L230():
    topic15 = ld topic;
    check L232() else D59();
  L231():
    r131 = dyn base12(<lang `[[`(topic, 3)>);
    goto L56(r131);
  L240():
    topic20 = force? topic19;
    checkMissing(topic20);
    as_character2 = ldf `as.character` in base;
    r138 = dyn as_character2(topic20);
    check L241() else D62();
  D34():
    deopt 138 [i2, r79];
  D41():
    deopt 168 [r99];
  D42():
    deopt 170 [r98, l1, r98];
  D56():
    deopt 234 [c37, c38, topic7];
  D59():
    deopt 255 [topic15];
  D62():
    deopt 268 [r138];
  L55(dx9):
    as_character = ldf `as.character` in base;
    r130 = dyn as_character(dx9);
    check L229() else D58();
  L67():
    x1 = `[[`(s1, i13, NULL, TRUE);
    st p = x1;
    basename2 = ldf basename;
    check L249() else D68();
  L170():
    c25 = `as.logical`(r79);
    if c25 then L171() else L35();
  L183():
    goto L40(r99);
  L184():
    r100 = dyn colnames__(l1, NULL, r98);
    check L185() else D43();
  L216():
    topic8 = force? topic7;
    checkMissing(topic8);
    c43 = `is.object`(topic8);
    if c43 then L217() else L218(c37, c38, topic8);
  L226():
    dr8 = tryDispatchBuiltin.1("[[", topic12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L228() else L227(dr8);
  L227(topic14):
    __4 = ldf `[[` in base;
    r129 = dyn __4(topic14, 2);
    goto L55(r129);
  L232():
    topic16 = force? topic15;
    checkMissing(topic16);
    c61 = `is.object`(topic16);
    if c61 then L233() else L234(topic16);
  L241():
    goto L59(r138);
  L248():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L271() else L272();
  D43():
    deopt 172 [r98, r100];
  D58():
    deopt 251 [r130];
  D68():
    deopt 285 [i13];
  L35():
    goto L36(i2);
  L36(i7):
    NROW = ldf NROW;
    check L175() else D37();
  L52(c50, c51, dx7):
    r126 = `==`(dx7, ":::");
    c52 = `as.logical`(r126);
    c53 = `||`(c51, c52);
    goto L51(c50, c53);
  L57(dx11):
    as_character1 = ldf `as.character` in base;
    r134 = dyn as_character1(dx11);
    check L236() else D60();
  L68(r166):
    r168 = `==`(r166, 0);
    c66 = `as.logical`(r168);
    if c66 then L275() else L69();
  L171():
    readRDS = ldf readRDS;
    check L172() else D35();
  L185():
    st db = r100;
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L186() else L187();
  L217():
    dr6 = tryDispatchBuiltin.1("[[", topic8);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L219() else L218(c37, c38, dr6);
  L218(c46, c47, topic10):
    __3 = ldf `[[` in base;
    r125 = dyn __3(topic10, 1);
    goto L52(c46, c47, r125);
  L228():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L55(dx8);
  L229():
    goto L54(r130);
  L233():
    dr10 = tryDispatchBuiltin.1("[[", topic16);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L235() else L234(dr10);
  L234(topic18):
    __5 = ldf `[[` in base;
    r133 = dyn __5(topic18, 3);
    goto L57(r133);
  L249():
    p37 = prom<V +>{
      __6 = ldf `::`;
      r143 = dyn __6("tools", "list_files_with_type");
      checkFun.0(r143);
      r144 = r143 as cls;
      p36 = prom<V +>{
        p34 = ld p;
        p35 = force? p34;
        checkMissing(p35);
        return p35;
      };
      r146 = dyn r144(p36, "demo");
      return r146;
    };
    r148 = dyn basename2(p37);
    check L250() else D69();
  L271():
    available2 = ld available;
    check L273() else D81();
  L272():
    r165 = dyn base16(<sym available>);
    goto L68(r165);
  D35():
    deopt 140 [i2];
  D37():
    deopt 147 [i7];
  D60():
    deopt 261 [r134];
  D69():
    deopt 287 [i13, r148];
  D81():
    deopt 328 [available2];
  L41(r102):
    c28 = `as.logical`(r102);
    if c28 then L188() else L42();
  L69():
    goto L70();
  L70():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L279() else L280();
  L172():
    p22 = prom<V +>{
      INDEX = ld INDEX;
      INDEX1 = force? INDEX;
      checkMissing(INDEX1);
      return INDEX1;
    };
    r81 = dyn readRDS(p22);
    check L173() else D36();
  L175():
    p23 = prom<V +>{
      entries = ld entries;
      entries1 = force? entries;
      checkMissing(entries1);
      return entries1;
    };
    r84 = dyn NROW(p23);
    check L176() else D38();
  L186():
    missing1 = ldf missing in base;
    r103 = dyn missing1(<sym package>);
    goto L41(r103);
  L187():
    r101 = dyn base7(<sym package>);
    goto L41(r101);
  L219():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L52(c37, c38, dx6);
  L235():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L57(dx10);
  L236():
    goto L56(r134);
  L250():
    st files = r148;
    files = ld files;
    check L251() else D70();
  L273():
    available3 = force? available2;
    checkMissing(available3);
    length1 = ldf length in base;
    r167 = dyn length1(available3);
    check L274() else D82();
  L275():
    stop = ldf stop;
    check L276() else D83();
  D36():
    deopt 142 [i2, r81];
  D38():
    deopt 149 [i7, r84];
  D70():
    deopt 289 [i13, files];
  D82():
    deopt 331 [r167];
  D83():
    deopt 335 [];
  L42():
    goto L43(NULL);
  L43(r109):
    st footer = r109;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L192() else L193();
  L71(r177):
    r179 = `>`(r177, 1);
    c67 = `as.logical`(r179);
    if c67 then L283() else L72();
  L173():
    st entries = r81;
    goto L36(i2);
  L176():
    c26 = `as.logical`(r84);
    if c26 then L177() else L37();
  L188():
    paste2 = ldf paste0;
    check L189() else D44();
  L251():
    files1 = force? files;
    checkMissing(files1);
    c63 = `is.object`(files1);
    if c63 then L252() else L253(i13, files1);
  L274():
    goto L68(r167);
  L276():
    p45 = prom<V +>{
      gettextf = ldf gettextf;
      p44 = prom<V +>{
        sQuote1 = ldf sQuote;
        p43 = prom<V +>{
          topic23 = ld topic;
          topic24 = force? topic23;
          checkMissing(topic24);
          return topic24;
        };
        r170 = dyn sQuote1(p43);
        return r170;
      };
      r172 = dyn gettextf("No demo found for topic %s", p44);
      return r172;
    };
    r174 = dyn stop[, domain](p45, NA_LGL);
    check L277() else D84();
  L279():
    available4 = ld available;
    check L281() else D85();
  L280():
    r176 = dyn base17(<sym available>);
    goto L71(r176);
  D44():
    deopt 178 [];
  D84():
    deopt 339 [r174];
  D85():
    deopt 344 [available4];
  L37():
    goto L38(i7);
  L38(i10):
    goto L34(i10);
  L44(r111):
    st y = r111;
    l2 = ld y;
    class__ = ldf `class<-`;
    check L197() else D49();
  L62(i19, dx13):
    st files = dx13;
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L259() else L260();
  L72():
    goto L74();
  L74():
    dirname2 = ldf dirname;
    check L291() else D90();
  L177():
    rbind = ldf rbind;
    check L178() else D39();
  L189():
    p32 = prom<V +>{
      sQuote = ldf sQuote;
      p31 = prom<V +>{
        paste3 = ldf paste;
        r104 = dyn paste3("demo(package =", ".packages(all.available = TRUE))");
        return r104;
      };
      r106 = dyn sQuote(p31);
      return r106;
    };
    r108 = dyn paste2("Use ", p32, "\n", "to list the demos in all *available* packages.");
    check L190() else D45();
  L192():
    db2 = ld db;
    check L194() else D46();
  L193():
    r110 = dyn base8[title, header, results, footer]("Demos", NULL, <sym db>, <sym footer>);
    goto L44(r110);
  L252():
    dr12 = tryDispatchBuiltin.1("[", files1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L254() else L253(i13, dr12);
  L253(i17, files3):
    topic21 = ld topic;
    check L255() else D71();
  L277():
    goto L70();
  L281():
    available5 = force? available4;
    checkMissing(available5);
    length2 = ldf length in base;
    r178 = dyn length2(available5);
    check L282() else D86();
  L283():
    available6 = ld available;
    check L284() else D87();
  D39():
    deopt 151 [i7];
  D45():
    deopt 183 [r108];
  D46():
    deopt 193 [db2];
  D49():
    deopt 205 ["packageIQR", l2, "packageIQR"];
  D71():
    deopt 291 [i17, files3, topic21];
  D86():
    deopt 347 [r178];
  D87():
    deopt 350 [available6];
  D90():
    deopt 365 [];
  L63(i22, r156):
    c64 = `as.logical`(r156);
    if c64 then L263() else L64();
  L178():
    p24 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    p30 = prom<V +>{
      cbind = ldf cbind;
      p26 = prom<V +>{
        basename1 = ldf basename;
        p25 = prom<V +>{
          path2 = ld path;
          path3 = force? path2;
          checkMissing(path3);
          return path3;
        };
        r87 = dyn basename1(p25);
        return r87;
      };
      p28 = prom<V +>{
        dirname = ldf dirname;
        p27 = prom<V +>{
          path4 = ld path;
          path5 = force? path4;
          checkMissing(path5);
          return path5;
        };
        r90 = dyn dirname(p27);
        return r90;
      };
      p29 = prom<V +>{
        entries2 = ld entries;
        entries3 = force? entries2;
        checkMissing(entries3);
        return entries3;
      };
      r93 = dyn cbind(p26, p28, p29);
      return r93;
    };
    r95 = dyn rbind(p24, p30);
    check L179() else D40();
  L190():
    goto L43(r108);
  L194():
    db3 = force? db2;
    checkMissing(db3);
    footer = ld footer;
    check L195() else D47();
  L197():
    r113 = dyn class__(l2, NULL, "packageIQR");
    check L198() else D50();
  L254():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L62(i13, dx12);
  L255():
    topic22 = force? topic21;
    checkMissing(topic22);
    __7 = ldf `::`;
    check L256() else D72();
  L259():
    files6 = ld files;
    check L261() else D75();
  L260():
    r155 = dyn base14(<sym files>);
    goto L63(i19, r155);
  L282():
    goto L71(r178);
  L284():
    available7 = force? available6;
    checkMissing(available7);
    c68 = `is.object`(available7);
    if c68 then L285() else L286(available7);
  L291():
    p53 = prom<V +>{
      dirname3 = ldf dirname;
      p52 = prom<V +>{
        available14 = ld available;
        available15 = force? available14;
        checkMissing(available15);
        return available15;
      };
      r195 = dyn dirname3(p52);
      return r195;
    };
    r197 = dyn dirname2(p53);
    check L292() else D91();
  D40():
    deopt 154 [i7, r95];
  D47():
    deopt 196 [footer];
  D50():
    deopt 207 ["packageIQR", r113];
  D72():
    deopt 293 [i17, files3, topic22];
  D75():
    deopt 305 [i19, files6];
  D91():
    deopt 367 [r197];
  L64():
    goto L66(i22);
  L66(i28):
    goto L61(i28);
  L73(dx15):
    st available = dx15;
    warning = ldf warning;
    check L288() else D88();
  L179():
    st db = r95;
    goto L38(i7);
  L195():
    footer1 = force? footer;
    checkMissing(footer1);
    list = ldf list in base;
    r112 = dyn list("Demos", NULL, db3, footer1);
    check L196() else D48();
  L198():
    st y = r113;
    y = ld y;
    check L199() else D51();
  L256():
    r149 = dyn __7("tools", "file_path_sans_ext");
    check L257() else D73();
  L261():
    files7 = force? files6;
    checkMissing(files7);
    length = ldf length in base;
    r157 = dyn length(files7);
    check L262() else D76();
  L263():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L264() else L265();
  L285():
    dr14 = tryDispatchBuiltin.1("[", available7);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L287() else L286(dr14);
  L286(available9):
    __9 = ldf `[` in base;
    r180 = dyn __9(available9, 1);
    goto L73(r180);
  L292():
    st pkgpath = r197;
    html6 = ld html;
    check L293() else D92();
  D48():
    deopt 200 [r112];
  D51():
    deopt 209 [y];
  D73():
    deopt 296 [i17, files3, topic22, r149];
  D76():
    deopt 308 [i19, r157];
  D88():
    deopt 357 [];
  D92():
    deopt 369 [html6];
  L65(i27, r159):
    st available = r159;
    goto L66(i27);
  L196():
    goto L44(r112);
  L199():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  L257():
    checkFun.0(r149);
    r150 = r149 as cls;
    p38 = prom<V +>{
      files4 = ld files;
      files5 = force? files4;
      checkMissing(files5);
      return files5;
    };
    r152 = dyn r150(p38);
    check L258() else D74();
  L262():
    goto L63(i19, r157);
  L264():
    available = ld available;
    check L266() else D77();
  L265():
    r158 = dyn base15(<sym available>, <lang file.path(p, files)>);
    goto L65(i22, r158);
  L287():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L73(dx14);
  L288():
    p51 = prom<V +>{
      gettextf1 = ldf gettextf;
      p47 = prom<V +>{
        sQuote2 = ldf sQuote;
        p46 = prom<V +>{
          topic25 = ld topic;
          topic26 = force? topic25;
          checkMissing(topic26);
          return topic26;
        };
        r182 = dyn sQuote2(p46);
        return r182;
      };
      p50 = prom<V +>{
        sQuote3 = ldf sQuote;
        p49 = prom<V +>{
          dirname1 = ldf dirname;
          p48 = prom<V +>{
            available10 = ld available;
            available11 = force? available10;
            checkMissing(available11);
            c69 = `is.object`(available11);
            if c69 then L1() else L2(available11);
          L0(dx17):
            return dx17;
          L1():
            dr16 = tryDispatchBuiltin.1("[", available11);
            dc8 = getTryDispatchBuiltinDispatched(dr16);
            if dc8 then L3() else L2(dr16);
          L2(available13):
            __10 = ldf `[` in base;
            r184 = dyn __10(available13, 1);
            goto L0(r184);
          L3():
            dx16 = getTryDispatchBuiltinValue(dr16);
            goto L0(dx16);
          };
          r186 = dyn dirname1(p48);
          return r186;
        };
        r188 = dyn sQuote3(p49);
        return r188;
      };
      r190 = dyn gettextf1("Demo for topic %s' found more than once,\nusing the one found in %s", p47, p50);
      return r190;
    };
    r192 = dyn warning[, domain](p51, NA_LGL);
    check L289() else D89();
  L293():
    html7 = force? html6;
    checkMissing(html7);
    c70 = `as.logical`(html7);
    if c70 then L294() else L75();
  D74():
    deopt 299 [i17, files3, topic22, r152];
  D77():
    deopt 311 [i22, available];
  D89():
    deopt 361 [r192];
  L75():
    file_exists = ldf `file.exists`;
    check L302() else D96();
  L258():
    r153 = `==`(topic22, r152);
    __8 = ldf `[` in base;
    r154 = dyn __8(files3, r153);
    goto L62(i17, r154);
  L266():
    available1 = force? available;
    checkMissing(available1);
    file_path3 = ldf `file.path`;
    check L267() else D78();
  L289():
    goto L74();
  L294():
    browseURL1 = ldf browseURL;
    check L295() else D93();
  D78():
    deopt 314 [i22];
  D93():
    deopt 372 [];
  D96():
    deopt 384 [];
  L267():
    p41 = prom<V +>{
      p39 = ld p;
      p40 = force? p39;
      checkMissing(p40);
      return p40;
    };
    p42 = prom<V +>{
      files8 = ld files;
      files9 = force? files8;
      checkMissing(files9);
      return files9;
    };
    r162 = dyn file_path3(p41, p42);
    check L268() else D79();
  L295():
    p60 = prom<V +>{
      paste4 = ldf paste0;
      p54 = prom<V +>{
        port4 = ld port;
        port5 = force? port4;
        checkMissing(port5);
        return port5;
      };
      p56 = prom<V +>{
        basename3 = ldf basename;
        p55 = prom<V +>{
          pkgpath = ld pkgpath;
          pkgpath1 = force? pkgpath;
          checkMissing(pkgpath1);
          return pkgpath1;
        };
        r200 = dyn basename3(p55);
        return r200;
      };
      p59 = prom<V +>{
        __11 = ldf `::`;
        r202 = dyn __11("tools", "file_path_sans_ext");
        checkFun.0(r202);
        r203 = r202 as cls;
        p58 = prom<V +>{
          basename4 = ldf basename;
          p57 = prom<V +>{
            available16 = ld available;
            available17 = force? available16;
            checkMissing(available17);
            return available17;
          };
          r205 = dyn basename4(p57);
          return r205;
        };
        r207 = dyn r203(p58);
        return r207;
      };
      r209 = dyn paste4("http://127.0.0.1:", p54, "/library/", p56, "/Demo/", p59);
      return r209;
    };
    p61 = prom<V +>{
      browser2 = ld browser;
      browser3 = force? browser2;
      checkMissing(browser3);
      return browser3;
    };
    r212 = dyn browseURL1(p60, p61);
    check L296() else D94();
  L302():
    p63 = prom<V +>{
      file_path4 = ldf `file.path`;
      p62 = prom<V +>{
        pkgpath2 = ld pkgpath;
        pkgpath3 = force? pkgpath2;
        checkMissing(pkgpath3);
        return pkgpath3;
      };
      r219 = dyn file_path4(p62, "Meta", "package.rds");
      st file = r219;
      invisible.0();
      return r219;
    };
    r221 = dyn file_exists(p63);
    check L303() else D97();
  D79():
    deopt 317 [i22, r162];
  D94():
    deopt 375 [r212];
  D97():
    deopt 386 [r221];
  L268():
    c65 = ldf c in base;
    r163 = dyn c65(available1, r162);
    check L269() else D80();
  L296():
    sym18 = ldf invisible;
    base18 = ldf invisible in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L297() else L298();
  L303():
    c71 = `as.logical`(r221);
    if c71 then L304() else L78();
  D80():
    deopt 319 [i22, r163];
  L76(r214):
    popenv;
    return r214;
  L78():
    goto L86();
  L86():
    ask1 = ld ask;
    check L329() else D106();
  L269():
    goto L65(i22, r163);
  L297():
    invisible1 = ldf invisible in base;
    r215 = dyn invisible1();
    check L299() else D95();
  L298():
    r213 = dyn base18();
    goto L76(r213);
  L304():
    readRDS1 = ldf readRDS;
    check L305() else D98();
  D95():
    deopt 379 [r215];
  D98():
    deopt 388 [];
  D106():
    deopt 424 [ask1];
  L299():
    goto L76(r215);
  L305():
    p64 = prom<V +>{
      file = ld file;
      file1 = force? file;
      checkMissing(file1);
      return file1;
    };
    r223 = dyn readRDS1(p64);
    check L306() else D99();
  L329():
    ask2 = force? ask1;
    checkMissing(ask2);
    r242 = `==`(ask2, "default");
    c77 = `as.logical`(r242);
    if c77 then L330() else L87();
  D99():
    deopt 390 [r223];
  L87():
    goto L89();
  L89():
    _Device = ld `.Device`;
    check L338() else D111();
  L306():
    c72 = `is.object`(r223);
    if c72 then L308() else L309(r223);
  L330():
    echo1 = ld echo;
    check L331() else D107();
  D107():
    deopt 428 [echo1];
  D111():
    deopt 443 [_Device];
  L307(dx19):
    st desc = dx19;
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L311() else L312();
  L308():
    dr18 = tryDispatchBuiltin.1("$", r223);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L310() else L309(dr18);
  L309(r225):
    r226 = `$`(r225, <sym DESCRIPTION>);
    goto L307(r226);
  L331():
    echo2 = force? echo1;
    checkMissing(echo2);
    c78 = `as.logical`(echo2);
    if c78 then L332() else L88(c78);
  L338():
    _Device1 = force? _Device;
    checkMissing(_Device1);
    r246 = `!=`(_Device1, "null device");
    c85 = `as.logical`(r246);
    if c85 then L339() else L90();
  L79(r228):
    r230 = `==`(r228, 1);
    c73 = `as.logical`(r230);
    if c73 then L315() else L80();
  L88(c80):
    st ask = c80;
    goto L89();
  L90():
    goto L92();
  L92():
    options = ldf options;
    check L346() else D115();
  L310():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L307(dx18);
  L311():
    desc = ld desc;
    check L313() else D100();
  L312():
    r227 = dyn base19(<sym desc>);
    goto L79(r227);
  L332():
    __13 = ldf `::`;
    check L333() else D108();
  L339():
    __14 = ldf `::`;
    check L340() else D112();
  D100():
    deopt 395 [desc];
  D108():
    deopt 431 [c78];
  D112():
    deopt 448 [];
  D115():
    deopt 463 [];
  L80():
    goto L85(NULL);
  L85(r240):
    goto L86();
  L313():
    desc1 = force? desc;
    checkMissing(desc1);
    length3 = ldf length in base;
    r229 = dyn length3(desc1);
    check L314() else D101();
  L315():
    as_list = ldf `as.list`;
    check L316() else D102();
  L333():
    r243 = dyn __13("grDevices", "dev.interactive");
    check L334() else D109();
  L340():
    r247 = dyn __14("grDevices", "devAskNewPage");
    check L341() else D113();
  L346():
    p67 = prom<V +>{
      ask5 = ld ask;
      ask6 = force? ask5;
      checkMissing(ask6);
      return ask6;
    };
    r256 = dyn options[`device.ask.default`](p67);
    check L347() else D116();
  D101():
    deopt 398 [r229];
  D102():
    deopt 402 [];
  D109():
    deopt 434 [c78, r243];
  D113():
    deopt 451 [r247];
  D116():
    deopt 466 [r256];
  L314():
    goto L79(r229);
  L316():
    p65 = prom<V +>{
      desc2 = ld desc;
      desc3 = force? desc2;
      checkMissing(desc3);
      return desc3;
    };
    r232 = dyn as_list(p65);
    check L317() else D103();
  L334():
    checkFun.0(r243);
    r244 = r243 as cls;
    r245 = dyn r244[orNone](TRUE);
    check L335() else D110();
  L341():
    checkFun.0(r247);
    r248 = r247 as cls;
    p66 = prom<V +>{
      ask3 = ld ask;
      ask4 = force? ask3;
      checkMissing(ask4);
      return ask4;
    };
    r250 = dyn r248[ask](p66);
    check L342() else D114();
  L347():
    st op = r256;
    sym22 = ldf `on.exit`;
    base22 = ldf `on.exit` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L348() else L349();
  D103():
    deopt 404 [r232];
  D110():
    deopt 438 [c78, r245];
  D114():
    deopt 455 [r250];
  L93():
    echo3 = ld echo;
    check L350() else D117();
  L317():
    c74 = `is.object`(r232);
    if c74 then L318() else L319(r232);
  L335():
    c81 = `as.logical`(r245);
    c82 = `&&`(c78, c81);
    goto L88(c82);
  L342():
    st oldask = r250;
    sym21 = ldf `on.exit`;
    base21 = ldf `on.exit` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L343() else L344();
  L348():
    on_exit1 = ldf `on.exit` in base;
    r259 = dyn on_exit1(<lang options(op)>, TRUE);
    goto L93();
  L349():
    r257 = dyn base22[, add](<lang options(op)>, TRUE);
    goto L93();
  D117():
    deopt 471 [echo3];
  L81(dx21):
    st enc = dx21;
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L321() else L322();
  L91(r252):
    goto L92();
  L318():
    dr20 = tryDispatchBuiltin.1("[[", r232);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L320() else L319(dr20);
  L319(r234):
    __12 = ldf `[[` in base;
    r235 = dyn __12(r234, "Encoding");
    goto L81(r235);
  L343():
    on_exit = ldf `on.exit` in base;
    r253 = dyn on_exit(<lang `::`(grDevices, devAskNewPage)(oldask)>, TRUE);
    goto L91(r253);
  L344():
    r251 = dyn base21[, add](<lang `::`(grDevices, devAskNewPage)(oldask)>, TRUE);
    goto L91(r251);
  L350():
    echo4 = force? echo3;
    checkMissing(echo4);
    c86 = `as.logical`(echo4);
    if c86 then L351() else L94();
  L82(r237):
    r238 = `!`(r237);
    c76 = `as.logical`(r238);
    if c76 then L324() else L83();
  L94():
    goto L99();
  L99():
    source = ldf source;
    check L365() else D124();
  L320():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L81(dx20);
  L321():
    enc = ld enc;
    check L323() else D104();
  L322():
    r236 = dyn base20(<sym enc>);
    goto L82(r236);
  L351():
    cat = ldf cat;
    check L352() else D118();
  D104():
    deopt 410 [enc];
  D118():
    deopt 474 [];
  D124():
    deopt 501 [];
  L83():
    goto L84(NULL);
  L84(enc4):
    r239 = `!`(enc4);
    goto L85(r239);
  L323():
    enc1 = force? enc;
    checkMissing(enc1);
    c75 = `==`(enc1, NULL);
    goto L82(c75);
  L324():
    enc2 = ld enc;
    check L325() else D105();
  L352():
    p68 = prom<V +>{
      topic27 = ld topic;
      topic28 = force? topic27;
      checkMissing(topic28);
      return topic28;
    };
    p69 = prom<V +>{
      sym23 = ldf `rep.int`;
      base23 = ldf `rep.int` in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L2() else L3();
    L0(r262):
      return r262;
    L2():
      sym24 = ldf nchar;
      base24 = ldf nchar in base;
      guard24 = `==`.4(sym24, base24);
      if guard24 then L4() else L5();
    L3():
      r261 = dyn base23("~", <lang nchar(topic, type="w")>);
      goto L0(r261);
    L1(r264):
      rep_int = ldf `rep.int` in base;
      r266 = dyn rep_int("~", r264);
      goto L0(r266);
    L4():
      topic29 = ld topic;
      topic30 = force? topic29;
      checkMissing(topic30);
      nchar = ldf nchar in base;
      r265 = dyn nchar(topic30, "w", FALSE, NA_LGL);
      goto L1(r265);
    L5():
      r263 = dyn base24[, type](<sym topic>, "w");
      goto L1(r263);
    };
    r268 = dyn cat[, , , , , , , sep]("\n\n", "\tdemo(", p68, ")\n", "\t---- ", p69, "\n", "");
    check L353() else D119();
  L365():
    p70 = prom<V +>{
      available18 = ld available;
      available19 = force? available18;
      checkMissing(available19);
      return available19;
    };
    p71 = prom<V +>{
      echo5 = ld echo;
      echo6 = force? echo5;
      checkMissing(echo6);
      return echo6;
    };
    p72 = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    r278 = dyn source[, echo, `max.deparse.length`, `keep.source`, encoding](p70, p71, +Infinity, TRUE, p72);
    check L366() else D125();
  D105():
    deopt 414 [enc2];
  D119():
    deopt 484 [r268];
  D125():
    deopt 511 [r278];
  L325():
    enc3 = force? enc2;
    checkMissing(enc3);
    st encoding = enc3;
    goto L84(enc3);
  L353():
    ask7 = ld ask;
    check L354() else D120();
  L366():
    popenv;
    return r278;
  D120():
    deopt 485 [ask7];
  L354():
    ask8 = force? ask7;
    checkMissing(ask8);
    c87 = `as.logical`(ask8);
    if c87 then L355() else L95(c87);
  L95(c89):
    c96 = `as.logical`(c89);
    if c96 then L360() else L97();
  L355():
    sym25 = ldf interactive;
    base25 = ldf interactive in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L356() else L357();
  L96(c92, r270):
    c93 = `as.logical`(r270);
    c94 = `&&`(c92, c93);
    goto L95(c94);
  L97():
    goto L98(NULL);
  L98(r273):
    goto L99();
  L356():
    interactive1 = ldf interactive in base;
    r271 = dyn interactive1();
    check L358() else D121();
  L357():
    r269 = dyn base25();
    goto L96(c87, r269);
  L360():
    readline = ldf readline;
    check L361() else D122();
  D121():
    deopt 490 [c87, r271];
  D122():
    deopt 493 [];
  L358():
    goto L96(c87, r271);
  L361():
    r272 = dyn readline("\nType  <Return>\t to start : ");
    check L362() else D123();
  D123():
    deopt 495 [r272];
  L362():
    goto L98(r272);
  }
}