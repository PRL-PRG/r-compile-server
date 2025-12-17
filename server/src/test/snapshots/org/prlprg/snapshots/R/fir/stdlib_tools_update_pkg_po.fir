fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3441002612;
    st update_pkg_po = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3441002612(pkgdir, pkg, version, pot_make, mo_make, verbose, mergeOpts, copyright, bugs) {
  (reg pkgdir:*, reg pkg:*, reg version:*, reg pot_make:*, reg mo_make:*, reg verbose:*, reg mergeOpts:*, reg copyright:*, reg bugs:*) -+> V { var pkgdir:*, var pkg:*, reg pkg_isMissing:L, reg pkg_orDefault:*, var version:*, reg version_isMissing:L, reg version_orDefault:*, var pot_make:*, reg pot_make_isMissing:L, reg pot_make_orDefault:*, var mo_make:*, reg mo_make_isMissing:L, reg mo_make_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var mergeOpts:*, reg mergeOpts_isMissing:L, reg mergeOpts_orDefault:*, var copyright:*, var bugs:*, reg r2:cls, reg getwd:cls, reg r3:V, reg Sys_getlocale:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg on_exit:cls, reg r7:V, reg Sys_setlocale:cls, reg r8:V, reg setwd:cls, reg pkgdir1:*, reg pkgdir2:V, reg p1:p(V +), reg r10:V, reg dir_create:cls, reg r11:V, reg dir:cls, reg r12:V, reg file_exists:cls, reg desc:*, reg desc1:V, reg p2:p(V +), reg r14:V, reg c:L, reg read_dcf:cls, reg desc2:*, reg desc3:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg c1:cls, reg r18:V, reg p4:p(V +), reg r20:V, reg desc4:*, reg desc5:V, reg c2:L, reg desc7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg pkg1:*, reg pkg2:V, reg c3:V, reg c4:L, reg name:*, reg name1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg version1:*, reg version2:V, reg c5:V, reg c6:L, reg desc8:*, reg desc9:V, reg c7:L, reg desc11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg missing:cls, reg r29:V, reg c8:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg missing1:cls, reg r33:V, reg c9:L, reg file_path:cls, reg r35:V, reg basename:cls, reg pkgdir3:*, reg pkgdir4:V, reg p5:p(V +), reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg getRversion:cls, reg r41:V, reg as_character:cls, reg r42:V, reg file_path1:cls, reg r43:V, reg pkg3:*, reg pkg4:V, reg r44:V, reg _in_:cls, reg paste0:cls, reg pkg5:*, reg pkg6:V, reg p6:p(V +), reg r46:V, reg p7:p(V +), reg files:*, reg files1:V, reg p8:p(V +), reg r49:V, reg paste1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg mergeOpts1:*, reg mergeOpts2:V, reg c10:L, reg c11:L, reg paste2:cls, reg mergeOpts3:*, reg mergeOpts4:V, reg p9:p(V +), reg r53:V, reg p10:p(V +), reg r55:V, reg pot_make1:*, reg pot_make2:V, reg c12:L, reg tempfile:cls, reg r56:V, reg verbose1:*, reg verbose2:V, reg c13:L, reg cat:cls, reg r57:V, reg xgettext2pot:cls, reg ofile:*, reg ofile1:V, reg p11:p(V +), reg name3:*, reg name4:V, reg p12:p(V +), reg version3:*, reg version4:V, reg p13:p(V +), reg bugs1:*, reg bugs2:V, reg p14:p(V +), reg r63:V, reg file_path2:cls, reg paste3:cls, reg pkg7:*, reg pkg8:V, reg p15:p(V +), reg r65:V, reg p16:p(V +), reg r67:V, reg file_exists1:cls, reg potfile:*, reg potfile1:V, reg p17:p(V +), reg r69:V, reg c14:L, reg c16:V, reg same:cls, reg potfile2:*, reg potfile3:V, reg p18:p(V +), reg ofile2:*, reg ofile3:V, reg p19:p(V +), reg r72:V, reg c17:L, reg c18:V, reg c20:L, reg verbose3:*, reg verbose4:V, reg c21:L, reg cat1:cls, reg r73:V, reg r74:V, reg r75:V, reg verbose5:*, reg verbose6:V, reg c22:L, reg cat2:cls, reg potfile4:*, reg potfile5:V, reg p20:p(V +), reg r77:V, reg file_copy:cls, reg ofile4:*, reg ofile5:V, reg p21:p(V +), reg potfile6:*, reg potfile7:V, reg p22:p(V +), reg r81:V, reg file_exists2:cls, reg file_path3:cls, reg paste4:cls, reg pkg9:*, reg pkg10:V, reg p23:p(V +), reg r84:V, reg p24:p(V +), reg r86:V, reg p25:p(V +), reg r88:V, reg r89:V, reg c23:L, reg stop:cls, reg gettextf:cls, reg potfile8:*, reg potfile9:V, reg p26:p(V +), reg r91:V, reg p27:p(V +), reg r93:V, reg dir1:cls, reg r94:V, reg pofiles:*, reg pofiles1:V, reg c24:L, reg pofiles3:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg pofiles4:*, reg pofiles5:V, reg r95:V, reg __2:cls, reg r96:V, reg pofiles6:*, reg pofiles7:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c25:L, reg x:V, reg sub:cls, reg basename1:cls, reg f:*, reg f1:V, reg p28:p(V +), reg r98:V, reg p29:p(V +), reg r100:V, reg paste5:cls, reg mergeCmd:*, reg mergeCmd1:V, reg p30:p(V +), reg f2:*, reg f3:V, reg p31:p(V +), reg shQuote:cls, reg potfile10:*, reg potfile11:V, reg p32:p(V +), reg r104:V, reg p33:p(V +), reg r106:V, reg verbose7:*, reg verbose8:V, reg c26:L, reg cat3:cls, reg cmd:*, reg cmd1:V, reg p34:p(V +), reg r108:V, reg i7:I, reg message:cls, reg lang:*, reg lang1:V, reg p35:p(V +), reg r111:V, reg system:cls, reg cmd2:*, reg cmd3:V, reg p36:p(V +), reg r113:V, reg r114:V, reg c27:L, reg warning:cls, reg sQuote:cls, reg f4:*, reg f5:V, reg p37:p(V +), reg r116:V, reg p38:p(V +), reg r118:V, reg checkPoFile:cls, reg f6:*, reg f7:V, reg p39:p(V +), reg r121:V, reg nrow:cls, reg res:*, reg res1:V, reg p40:p(V +), reg r123:V, reg c28:L, reg print:cls, reg res2:*, reg res3:V, reg p41:p(V +), reg r125:V, reg message1:cls, reg r126:V, reg mo_make1:*, reg mo_make2:V, reg r128:V, reg c29:L, reg file_path4:cls, reg stem:*, reg stem1:V, reg p42:p(V +), reg lang2:*, reg lang3:V, reg p43:p(V +), reg r132:V, reg dir_create1:cls, reg dest:*, reg dest1:V, reg p44:p(V +), reg r134:V, reg file_path5:cls, reg dest2:*, reg dest3:V, reg p45:p(V +), reg sprintf:cls, reg pkg11:*, reg pkg12:V, reg p46:p(V +), reg r137:V, reg p47:p(V +), reg r139:V, reg paste6:cls, reg shQuote1:cls, reg dest4:*, reg dest5:V, reg p48:p(V +), reg r141:V, reg p49:p(V +), reg shQuote2:cls, reg f8:*, reg f9:V, reg p50:p(V +), reg r144:V, reg p51:p(V +), reg r146:V, reg verbose9:*, reg verbose10:V, reg c30:L, reg cat4:cls, reg cmd4:*, reg cmd5:V, reg p52:p(V +), reg r148:V, reg i22:I, reg system1:cls, reg cmd6:*, reg cmd7:V, reg p53:p(V +), reg r151:V, reg r152:V, reg c31:L, reg warning1:cls, reg sprintf1:cls, reg basename2:cls, reg f10:*, reg f11:V, reg p54:p(V +), reg r154:V, reg p55:p(V +), reg r156:V, reg p56:p(V +), reg r158:V, reg i25:I, reg l10n_info:cls, reg r160:V, reg c32:L, reg r162:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __3:cls, reg r163:V, reg c33:L, reg c35:V, reg mo_make3:*, reg mo_make4:V, reg c36:L, reg c37:V, reg c39:L, reg message2:cls, reg lang4:*, reg lang5:V, reg p57:p(V +), reg r165:V, reg tempfile1:cls, reg r166:V, reg en_quote:cls, reg potfile12:*, reg potfile13:V, reg p58:p(V +), reg f12:*, reg f13:V, reg p59:p(V +), reg r169:V, reg file_path6:cls, reg stem2:*, reg stem3:V, reg p60:p(V +), reg lang6:*, reg lang7:V, reg p61:p(V +), reg r172:V, reg dir_create2:cls, reg dest6:*, reg dest7:V, reg p62:p(V +), reg r174:V, reg file_path7:cls, reg dest8:*, reg dest9:V, reg p63:p(V +), reg sprintf2:cls, reg pkg13:*, reg pkg14:V, reg p64:p(V +), reg r177:V, reg p65:p(V +), reg r179:V, reg paste7:cls, reg shQuote3:cls, reg dest10:*, reg dest11:V, reg p66:p(V +), reg r181:V, reg p67:p(V +), reg shQuote4:cls, reg f14:*, reg f15:V, reg p68:p(V +), reg r184:V, reg p69:p(V +), reg r186:V, reg verbose11:*, reg verbose12:V, reg c40:L, reg cat5:cls, reg cmd8:*, reg cmd9:V, reg p70:p(V +), reg r188:V, reg system2:cls, reg cmd10:*, reg cmd11:V, reg p71:p(V +), reg r191:V, reg r192:V, reg c41:L, reg warning2:cls, reg sprintf3:cls, reg basename3:cls, reg f16:*, reg f17:V, reg p72:p(V +), reg r194:V, reg p73:p(V +), reg r196:V, reg p74:p(V +), reg r198:V, reg r199:V, reg is_base:*, reg is_base1:V, reg c42:L, reg c43:V, reg have_src:*, reg have_src1:V, reg c45:L, reg c46:V, reg r201:V, reg c48:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r202:V, reg r203:V, reg invisible:cls, reg r204:V, reg pot_make3:*, reg pot_make4:V, reg c49:L, reg tempfile2:cls, reg r207:V, reg is_base2:*, reg is_base3:V, reg r208:V, reg c50:L, reg pkg15:*, reg pkg16:V, reg setwd1:cls, reg r209:V, reg dir2:cls, reg exts:*, reg exts1:V, reg p75:p(V +), reg r211:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r212:V, reg r213:V, reg c51:cls, reg r214:V, reg s1:V, reg l1:I, reg i26:I, reg i27:I, reg i28:I, reg c52:L, reg x1:V, reg dir_exists:cls, reg subdir:*, reg subdir1:V, reg p76:p(V +), reg r216:V, reg c53:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r217:V, reg i35:I, reg r218:V, reg cfiles:*, reg cfiles1:V, reg dir3:cls, reg subdir2:*, reg subdir3:V, reg p77:p(V +), reg exts2:*, reg exts3:V, reg p78:p(V +), reg r221:V, reg c54:cls, reg r222:V, reg i36:I, reg setwd2:cls, reg r224:V, reg filtergrep:cls, reg readLines:cls, reg r225:V, reg p79:p(V +), reg r227:V, reg sprintf4:cls, reg shQuote5:cls, reg ofile6:*, reg ofile7:V, reg p80:p(V +), reg r229:V, reg p81:p(V +), reg r231:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r232:V, reg r233:V, reg cmd12:*, reg cmd13:V, reg paste8:cls, reg name5:*, reg name6:V, reg p82:p(V +), reg r235:V, reg paste9:cls, reg version5:*, reg version6:V, reg p83:p(V +), reg r237:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r238:V, reg r239:V, reg copyright1:*, reg copyright2:V, reg c55:V, reg r240:V, reg c56:L, reg sprintf5:cls, reg copyright3:*, reg copyright4:V, reg p84:p(V +), reg r242:V, reg r243:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r244:V, reg r245:V, reg bugs3:*, reg bugs4:V, reg c57:V, reg r246:V, reg c58:L, reg sprintf6:cls, reg bugs5:*, reg bugs6:V, reg p85:p(V +), reg r248:V, reg r249:V, reg is_base4:*, reg is_base5:V, reg c59:L, reg r250:V, reg c60:cls, reg r251:V, reg paste10:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r252:V, reg r253:V, reg cmd14:*, reg cmd15:V, reg cfiles2:*, reg cfiles3:V, reg c61:cls, reg r254:V, reg p86:p(V +), reg r256:V, reg verbose13:*, reg verbose14:V, reg c62:L, reg cat6:cls, reg cmd16:*, reg cmd17:V, reg p87:p(V +), reg r258:V, reg system3:cls, reg cmd18:*, reg cmd19:V, reg p88:p(V +), reg r261:V, reg r262:V, reg c63:L, reg stop1:cls, reg r263:V, reg setwd3:cls, reg od:*, reg od1:V, reg p89:p(V +), reg r266:V, reg file_path8:cls, reg paste11:cls, reg dom:*, reg dom1:V, reg p90:p(V +), reg r268:V, reg p91:p(V +), reg r270:V, reg same1:cls, reg potfile14:*, reg potfile15:V, reg p92:p(V +), reg ofile8:*, reg ofile9:V, reg p93:p(V +), reg r273:V, reg r274:V, reg c64:L, reg file_copy1:cls, reg ofile10:*, reg ofile11:V, reg p94:p(V +), reg potfile16:*, reg potfile17:V, reg p95:p(V +), reg r277:V, reg r278:V, reg is_base6:*, reg is_base7:V, reg c65:L, reg r280:V, reg pkg17:*, reg pkg18:V, reg file_exists3:cls, reg file_path9:cls, reg paste12:cls, reg dom2:*, reg dom3:V, reg p96:p(V +), reg r282:V, reg p97:p(V +), reg r284:V, reg p98:p(V +), reg r286:V, reg r287:V, reg c66:L, reg stop2:cls, reg gettextf1:cls, reg potfile18:*, reg potfile19:V, reg p99:p(V +), reg r289:V, reg p100:p(V +), reg r291:V, reg dir4:cls, reg r292:V, reg pofiles8:*, reg pofiles9:V, reg c67:L, reg pofiles11:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg pofiles12:*, reg pofiles13:V, reg r293:V, reg __4:cls, reg r294:V, reg pofiles14:*, reg pofiles15:V, reg s2:V, reg l2:I, reg i38:I, reg i39:I, reg i40:I, reg c68:L, reg x2:V, reg sub1:cls, reg basename4:cls, reg f18:*, reg f19:V, reg p101:p(V +), reg r296:V, reg p102:p(V +), reg r298:V, reg paste13:cls, reg mergeCmd2:*, reg mergeCmd3:V, reg p103:p(V +), reg shQuote6:cls, reg f20:*, reg f21:V, reg p104:p(V +), reg r301:V, reg p105:p(V +), reg shQuote7:cls, reg potfile20:*, reg potfile21:V, reg p106:p(V +), reg r304:V, reg p107:p(V +), reg r306:V, reg verbose15:*, reg verbose16:V, reg c69:L, reg cat7:cls, reg cmd20:*, reg cmd21:V, reg p108:p(V +), reg r308:V, reg i45:I, reg message3:cls, reg lang8:*, reg lang9:V, reg p109:p(V +), reg r311:V, reg system4:cls, reg cmd22:*, reg cmd23:V, reg p110:p(V +), reg r313:V, reg r314:V, reg c70:L, reg warning3:cls, reg f22:*, reg f23:V, reg p111:p(V +), reg r316:V, reg checkPoFile1:cls, reg f24:*, reg f25:V, reg p112:p(V +), reg r319:V, reg nrow1:cls, reg res4:*, reg res5:V, reg p113:p(V +), reg r321:V, reg c71:L, reg print1:cls, reg res6:*, reg res7:V, reg p114:p(V +), reg r323:V, reg message4:cls, reg r324:V, reg mo_make5:*, reg mo_make6:V, reg r326:V, reg c72:L, reg file_path10:cls, reg stem4:*, reg stem5:V, reg p115:p(V +), reg lang10:*, reg lang11:V, reg p116:p(V +), reg r330:V, reg dir_create3:cls, reg dest12:*, reg dest13:V, reg p117:p(V +), reg r332:V, reg file_path11:cls, reg dest14:*, reg dest15:V, reg p118:p(V +), reg sprintf7:cls, reg dom4:*, reg dom5:V, reg p119:p(V +), reg r335:V, reg p120:p(V +), reg r337:V, reg paste14:cls, reg shQuote8:cls, reg dest16:*, reg dest17:V, reg p121:p(V +), reg r339:V, reg p122:p(V +), reg shQuote9:cls, reg f26:*, reg f27:V, reg p123:p(V +), reg r342:V, reg p124:p(V +), reg r344:V, reg verbose17:*, reg verbose18:V, reg c73:L, reg cat8:cls, reg cmd24:*, reg cmd25:V, reg p125:p(V +), reg r346:V, reg i60:I, reg system5:cls, reg cmd26:*, reg cmd27:V, reg p126:p(V +), reg r349:V, reg r350:V, reg c74:L, reg warning4:cls, reg sprintf8:cls, reg basename5:cls, reg f28:*, reg f29:V, reg p127:p(V +), reg r352:V, reg p128:p(V +), reg r354:V, reg p129:p(V +), reg r356:V, reg i63:I, reg l10n_info1:cls, reg r358:V, reg c75:L, reg r360:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg __5:cls, reg r361:V, reg c76:L, reg c78:V, reg mo_make7:*, reg mo_make8:V, reg c79:L, reg c80:V, reg c82:L, reg message5:cls, reg lang12:*, reg lang13:V, reg p130:p(V +), reg r363:V, reg tempfile3:cls, reg r364:V, reg en_quote1:cls, reg potfile22:*, reg potfile23:V, reg p131:p(V +), reg f30:*, reg f31:V, reg p132:p(V +), reg r367:V, reg file_path12:cls, reg stem6:*, reg stem7:V, reg p133:p(V +), reg lang14:*, reg lang15:V, reg p134:p(V +), reg r370:V, reg dir_create4:cls, reg dest18:*, reg dest19:V, reg p135:p(V +), reg r372:V, reg file_path13:cls, reg dest20:*, reg dest21:V, reg p136:p(V +), reg sprintf9:cls, reg dom6:*, reg dom7:V, reg p137:p(V +), reg r375:V, reg p138:p(V +), reg r377:V, reg paste15:cls, reg shQuote10:cls, reg dest22:*, reg dest23:V, reg p139:p(V +), reg r379:V, reg p140:p(V +), reg shQuote11:cls, reg f32:*, reg f33:V, reg p141:p(V +), reg r382:V, reg p142:p(V +), reg r384:V, reg verbose19:*, reg verbose20:V, reg c83:L, reg cat9:cls, reg cmd28:*, reg cmd29:V, reg p143:p(V +), reg r386:V, reg system6:cls, reg cmd30:*, reg cmd31:V, reg p144:p(V +), reg r389:V, reg r390:V, reg c84:L, reg warning5:cls, reg sprintf10:cls, reg basename6:cls, reg f34:*, reg f35:V, reg p145:p(V +), reg r392:V, reg p146:p(V +), reg r394:V, reg p147:p(V +), reg r396:V, reg r397:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r399:V, reg r400:V, reg invisible1:cls, reg r401:V |
    mkenv;
    st pkgdir = pkgdir;
    pkg_isMissing = missing.0(pkg);
    if pkg_isMissing then L0(NULL) else L0(pkg);
  L0(pkg_orDefault):
    st pkg = pkg_orDefault;
    version_isMissing = missing.0(version);
    if version_isMissing then L1(NULL) else L1(version);
  L1(version_orDefault):
    st version = version_orDefault;
    pot_make_isMissing = missing.0(pot_make);
    if pot_make_isMissing then L2(TRUE) else L2(pot_make);
  L2(pot_make_orDefault):
    st pot_make = pot_make_orDefault;
    mo_make_isMissing = missing.0(mo_make);
    if mo_make_isMissing then L3(TRUE) else L3(mo_make);
  L3(mo_make_orDefault):
    st mo_make = mo_make_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L4() else L5(verbose);
  L4():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("verbose");
      return r;
    };
    goto L5(p);
  L5(verbose_orDefault):
    st verbose = verbose_orDefault;
    mergeOpts_isMissing = missing.0(mergeOpts);
    if mergeOpts_isMissing then L6("") else L6(mergeOpts);
  L6(mergeOpts_orDefault):
    st mergeOpts = mergeOpts_orDefault;
    st copyright = copyright;
    st bugs = bugs;
    r2 = clos inner3950065357;
    st same = r2;
    getwd = ldf getwd;
    check L116() else D0();
  D0():
    deopt 4 [];
  L116():
    r3 = dyn getwd();
    check L117() else D1();
  D1():
    deopt 5 [r3];
  L117():
    st pwd = r3;
    Sys_getlocale = ldf `Sys.getlocale`;
    check L118() else D2();
  D2():
    deopt 8 [];
  L118():
    r4 = dyn Sys_getlocale("LC_COLLATE");
    check L119() else D3();
  D3():
    deopt 10 [r4];
  L119():
    st coll = r4;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L120() else L121();
  L7():
    Sys_setlocale = ldf `Sys.setlocale`;
    check L122() else D4();
  L120():
    on_exit = ldf `on.exit` in base;
    r7 = dyn on_exit(<lang {
      Sys.setlocale("LC_COLLATE", coll);
      setwd(pwd)
    }>);
    goto L7();
  L121():
    r5 = dyn base(<lang {
      Sys.setlocale("LC_COLLATE", coll);
      setwd(pwd)
    }>);
    goto L7();
  D4():
    deopt 16 [];
  L122():
    r8 = dyn Sys_setlocale("LC_COLLATE", "C");
    check L123() else D5();
  D5():
    deopt 19 [r8];
  L123():
    setwd = ldf setwd;
    check L124() else D6();
  D6():
    deopt 21 [];
  L124():
    p1 = prom<V +>{
      pkgdir1 = ld pkgdir;
      pkgdir2 = force? pkgdir1;
      checkMissing(pkgdir2);
      return pkgdir2;
    };
    r10 = dyn setwd(p1);
    check L125() else D7();
  D7():
    deopt 23 [r10];
  L125():
    dir_create = ldf `dir.create`;
    check L126() else D8();
  D8():
    deopt 25 [];
  L126():
    r11 = dyn dir_create("po", FALSE);
    check L127() else D9();
  D9():
    deopt 28 [r11];
  L127():
    dir = ldf dir;
    check L128() else D10();
  D10():
    deopt 30 [];
  L128():
    r12 = dyn dir("po");
    check L129() else D11();
  D11():
    deopt 32 [r12];
  L129():
    st files = r12;
    st desc = "DESCRIPTION";
    file_exists = ldf `file.exists`;
    check L130() else D12();
  D12():
    deopt 38 [];
  L130():
    p2 = prom<V +>{
      desc = ld desc;
      desc1 = force? desc;
      checkMissing(desc1);
      return desc1;
    };
    r14 = dyn file_exists(p2);
    check L131() else D13();
  D13():
    deopt 40 [r14];
  L131():
    c = `as.logical`(r14);
    if c then L132() else L8();
  L8():
    basename = ldf basename;
    check L165() else D23();
  L23():
    pkg3 = ld pkg;
    check L174() else D30();
  L132():
    read_dcf = ldf `read.dcf`;
    check L133() else D14();
  D14():
    deopt 42 [];
  D23():
    deopt 98 [];
  D30():
    deopt 126 [pkg3];
  L133():
    p3 = prom<V +>{
      desc2 = ld desc;
      desc3 = force? desc2;
      checkMissing(desc3);
      return desc3;
    };
    p4 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c1 = ldf c in base;
      r18 = dyn c1("Package", "Version");
      goto L0(r18);
    L2():
      r16 = dyn base1("Package", "Version");
      goto L0(r16);
    };
    r20 = dyn read_dcf[, fields](p3, p4);
    check L134() else D15();
  L165():
    p5 = prom<V +>{
      pkgdir3 = ld pkgdir;
      pkgdir4 = force? pkgdir3;
      checkMissing(pkgdir4);
      return pkgdir4;
    };
    r38 = dyn basename(p5);
    check L166() else D24();
  L174():
    pkg4 = force? pkg3;
    checkMissing(pkg4);
    r44 = `==`(pkg4, "base");
    st is_base = r44;
    _in_ = ldf `%in%`;
    check L175() else D31();
  D15():
    deopt 46 [r20];
  D24():
    deopt 100 [r38];
  D31():
    deopt 132 [];
  L134():
    st desc = r20;
    desc4 = ld desc;
    check L135() else D16();
  L166():
    st pkg = r38;
    st name = "R";
    sym6 = ldf `as.character`;
    base6 = ldf `as.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L167() else L168();
  L175():
    p7 = prom<V +>{
      paste0 = ldf paste0;
      p6 = prom<V +>{
        pkg5 = ld pkg;
        pkg6 = force? pkg5;
        checkMissing(pkg6);
        return pkg6;
      };
      r46 = dyn paste0(p6, ".pot");
      return r46;
    };
    p8 = prom<V +>{
      files = ld files;
      files1 = force? files;
      checkMissing(files1);
      return files1;
    };
    r49 = dyn _in_(p7, p8);
    check L176() else D32();
  D16():
    deopt 48 [desc4];
  D32():
    deopt 135 [r49];
  L24(r40):
    st version = r40;
    st copyright = "The R Core Team";
    st bugs = "bugs.r-project.org";
    file_path1 = ldf `file.path`;
    check L172() else D28();
  L135():
    desc5 = force? desc4;
    checkMissing(desc5);
    c2 = `is.object`(desc5);
    if c2 then L136() else L137(desc5);
  L167():
    getRversion = ldf getRversion;
    check L169() else D25();
  L168():
    r39 = dyn base6(<lang getRversion()>);
    goto L24(r39);
  L176():
    st have_src = r49;
    paste1 = ldf paste;
    check L177() else D33();
  D25():
    deopt 108 [];
  D28():
    deopt 120 [];
  D33():
    deopt 138 [];
  L9(dx1):
    st name = dx1;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L139() else L140();
  L136():
    dr = tryDispatchBuiltin.1("[", desc5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L138() else L137(dr);
  L137(desc7):
    __ = ldf `[` in base;
    r21 = dyn __(desc7, 1);
    goto L9(r21);
  L169():
    r41 = dyn getRversion();
    check L170() else D26();
  L172():
    r43 = dyn file_path1("..", "translations", "inst");
    check L173() else D29();
  L177():
    p10 = prom<V +>{
      sym7 = ldf `is.character`;
      base7 = ldf `is.character` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r51):
      c11 = `as.logical`(r51);
      if c11 then L4() else L1();
    L2():
      mergeOpts1 = ld mergeOpts;
      mergeOpts2 = force? mergeOpts1;
      checkMissing(mergeOpts2);
      c10 = `is.character`(mergeOpts2);
      goto L0(c10);
    L3():
      r50 = dyn base7(<sym mergeOpts>);
      goto L0(r50);
    L1():
      invisible.0();
      return NULL;
    L4():
      paste2 = ldf paste;
      p9 = prom<V +>{
        mergeOpts3 = ld mergeOpts;
        mergeOpts4 = force? mergeOpts3;
        checkMissing(mergeOpts4);
        return mergeOpts4;
      };
      r53 = dyn paste2("--update", p9);
      return r53;
    };
    r55 = dyn paste1("msgmerge", p10);
    check L178() else D34();
  D26():
    deopt 109 [r41];
  D29():
    deopt 124 [r43];
  D34():
    deopt 141 [r55];
  L10(r23):
    c4 = `as.logical`(r23);
    if c4 then L142() else L11();
  L138():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L139():
    pkg1 = ld pkg;
    check L141() else D17();
  L140():
    r22 = dyn base2(<sym pkg>);
    goto L10(r22);
  L170():
    as_character = ldf `as.character` in base;
    r42 = dyn as_character(r41);
    check L171() else D27();
  L173():
    st stem = r43;
    goto L23();
  L178():
    st mergeCmd = r55;
    pot_make1 = ld pot_make;
    check L179() else D35();
  D17():
    deopt 55 [pkg1];
  D27():
    deopt 111 [r42];
  D35():
    deopt 143 [pot_make1];
  L11():
    goto L12();
  L12():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L145() else L146();
  L141():
    pkg2 = force? pkg1;
    checkMissing(pkg2);
    c3 = `==`(pkg2, NULL);
    goto L10(c3);
  L142():
    name = ld name;
    check L143() else D18();
  L171():
    goto L24(r42);
  L179():
    pot_make2 = force? pot_make1;
    checkMissing(pot_make2);
    c12 = `as.logical`(pot_make2);
    if c12 then L180() else L25();
  D18():
    deopt 58 [name];
  L13(r25):
    c6 = `as.logical`(r25);
    if c6 then L148() else L14();
  L25():
    file_exists2 = ldf `file.exists`;
    check L213() else D57();
  L35():
    dir1 = ldf dir;
    check L219() else D61();
  L143():
    name1 = force? name;
    checkMissing(name1);
    st pkg = name1;
    goto L12();
  L145():
    version1 = ld version;
    check L147() else D19();
  L146():
    r24 = dyn base3(<sym version>);
    goto L13(r24);
  L180():
    tempfile = ldf tempfile;
    check L181() else D36();
  D19():
    deopt 64 [version1];
  D36():
    deopt 146 [];
  D57():
    deopt 207 [];
  D61():
    deopt 220 [];
  L14():
    goto L16();
  L16():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L154() else L155();
  L147():
    version2 = force? version1;
    checkMissing(version2);
    c5 = `==`(version2, NULL);
    goto L13(c5);
  L148():
    desc8 = ld desc;
    check L149() else D20();
  L181():
    r56 = dyn tempfile();
    check L182() else D37();
  L213():
    p25 = prom<V +>{
      file_path3 = ldf `file.path`;
      p24 = prom<V +>{
        paste4 = ldf paste0;
        p23 = prom<V +>{
          pkg9 = ld pkg;
          pkg10 = force? pkg9;
          checkMissing(pkg10);
          return pkg10;
        };
        r84 = dyn paste4("R-", p23, ".pot");
        return r84;
      };
      r86 = dyn file_path3("po", p24);
      st potfile = r86;
      invisible.0();
      return r86;
    };
    r88 = dyn file_exists2(p25);
    check L214() else D58();
  L219():
    r94 = dyn dir1[, pattern, `full.names`]("po", "R-.*[.]po$", TRUE);
    check L220() else D62();
  D20():
    deopt 67 [desc8];
  D37():
    deopt 147 [r56];
  D58():
    deopt 209 [r88];
  D62():
    deopt 226 [r94];
  L17(r28):
    c8 = `as.logical`(r28);
    if c8 then L156() else L18();
  L149():
    desc9 = force? desc8;
    checkMissing(desc9);
    c7 = `is.object`(desc9);
    if c7 then L150() else L151(desc9);
  L154():
    missing = ldf missing in base;
    r29 = dyn missing(<sym copyright>);
    goto L17(r29);
  L155():
    r27 = dyn base4(<sym copyright>);
    goto L17(r27);
  L182():
    st ofile = r56;
    verbose1 = ld verbose;
    check L183() else D38();
  L214():
    r89 = `!`(r88);
    c23 = `as.logical`(r89);
    if c23 then L215() else L36();
  L220():
    st pofiles = r94;
    pofiles = ld pofiles;
    check L221() else D63();
  D38():
    deopt 149 [verbose1];
  D63():
    deopt 228 [pofiles];
  L15(dx3):
    st version = dx3;
    goto L16();
  L18():
    goto L19();
  L19():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L158() else L159();
  L36():
    goto L35();
  L150():
    dr2 = tryDispatchBuiltin.1("[", desc9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L152() else L151(dr2);
  L151(desc11):
    __1 = ldf `[` in base;
    r26 = dyn __1(desc11, 2);
    goto L15(r26);
  L156():
    st copyright = NULL;
    goto L19();
  L183():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c13 = `as.logical`(verbose2);
    if c13 then L184() else L26();
  L215():
    stop = ldf stop;
    check L216() else D59();
  L221():
    pofiles1 = force? pofiles;
    checkMissing(pofiles1);
    c24 = `is.object`(pofiles1);
    if c24 then L222() else L223(pofiles1);
  D59():
    deopt 212 [];
  L20(r32):
    c9 = `as.logical`(r32);
    if c9 then L160() else L21();
  L26():
    goto L27();
  L27():
    xgettext2pot = ldf xgettext2pot;
    check L188() else D41();
  L37(dx6):
    st pofiles = dx6;
    pofiles6 = ld pofiles;
    check L226() else D65();
  L152():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  L158():
    missing1 = ldf missing in base;
    r33 = dyn missing1(<sym bugs>);
    goto L20(r33);
  L159():
    r31 = dyn base5(<sym bugs>);
    goto L20(r31);
  L184():
    cat = ldf cat;
    check L185() else D39();
  L216():
    p27 = prom<V +>{
      gettextf = ldf gettextf;
      p26 = prom<V +>{
        potfile8 = ld potfile;
        potfile9 = force? potfile8;
        checkMissing(potfile9);
        return potfile9;
      };
      r91 = dyn gettextf("file '%s' does not exist", p26);
      return r91;
    };
    r93 = dyn stop[, domain](p27, NA_LGL);
    check L217() else D60();
  L222():
    dr4 = tryDispatchBuiltin.1("[", pofiles1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L224() else L223(dr4);
  L223(pofiles3):
    pofiles4 = ld pofiles;
    check L225() else D64();
  D39():
    deopt 152 [];
  D41():
    deopt 158 [];
  D60():
    deopt 216 [r93];
  D64():
    deopt 230 [pofiles3, pofiles4];
  D65():
    deopt 236 [pofiles6];
  L21():
    goto L22();
  L22():
    file_path = ldf `file.path`;
    check L162() else D21();
  L160():
    st bugs = NULL;
    goto L22();
  L185():
    r57 = dyn cat("Creating pot: .. ");
    check L186() else D40();
  L188():
    p11 = prom<V +>{
      ofile = ld ofile;
      ofile1 = force? ofile;
      checkMissing(ofile1);
      return ofile1;
    };
    p12 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    p13 = prom<V +>{
      version3 = ld version;
      version4 = force? version3;
      checkMissing(version4);
      return version4;
    };
    p14 = prom<V +>{
      bugs1 = ld bugs;
      bugs2 = force? bugs1;
      checkMissing(bugs2);
      return bugs2;
    };
    r63 = dyn xgettext2pot(".", p11, p12, p13, p14);
    check L189() else D42();
  L217():
    goto L35();
  L224():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L37(dx5);
  L225():
    pofiles5 = force? pofiles4;
    checkMissing(pofiles5);
    r95 = `!=`(pofiles5, "po/R-en@quot.po");
    __2 = ldf `[` in base;
    r96 = dyn __2(pofiles3, r95);
    goto L37(r96);
  L226():
    pofiles7 = force? pofiles6;
    checkMissing(pofiles7);
    s = toForSeq(pofiles7);
    l = length(s);
    i = 0;
    goto L38(i);
  D21():
    deopt 92 [];
  D40():
    deopt 154 [r57];
  D42():
    deopt 164 [r63];
  L38(i1):
    i2 = `+`.1(i1, 1);
    c25 = `<`.1(l, i2);
    if c25 then L227() else L51();
  L162():
    r35 = dyn file_path("inst", "po");
    check L163() else D22();
  L186():
    goto L27();
  L189():
    file_path2 = ldf `file.path`;
    check L190() else D43();
  D22():
    deopt 95 [r35];
  D43():
    deopt 166 [];
  L51():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    sub = ldf sub;
    check L228() else D66();
  L163():
    st stem = r35;
    goto L23();
  L190():
    p16 = prom<V +>{
      paste3 = ldf paste0;
      p15 = prom<V +>{
        pkg7 = ld pkg;
        pkg8 = force? pkg7;
        checkMissing(pkg8);
        return pkg8;
      };
      r65 = dyn paste3("R-", p15, ".pot");
      return r65;
    };
    r67 = dyn file_path2("po", p16);
    check L191() else D44();
  L227():
    l10n_info = ldf l10n_info;
    check L280() else D103();
  D44():
    deopt 169 [r67];
  D66():
    deopt 239 [i2];
  D103():
    deopt 375 [];
  L191():
    st potfile = r67;
    file_exists1 = ldf `file.exists`;
    check L192() else D45();
  L228():
    p29 = prom<V +>{
      basename1 = ldf basename;
      p28 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      r98 = dyn basename1(p28);
      return r98;
    };
    r100 = dyn sub("^R-(.*)[.]po$", "\\1", p29);
    check L229() else D67();
  L280():
    r160 = dyn l10n_info();
    check L281() else D104();
  D45():
    deopt 172 [];
  D67():
    deopt 243 [i2, r100];
  D104():
    deopt 376 [r160];
  L192():
    p17 = prom<V +>{
      potfile = ld potfile;
      potfile1 = force? potfile;
      checkMissing(potfile1);
      return potfile1;
    };
    r69 = dyn file_exists1(p17);
    check L193() else D46();
  L229():
    st lang = r100;
    paste5 = ldf paste;
    check L230() else D68();
  L281():
    c32 = `is.object`(r160);
    if c32 then L282() else L283(r160);
  D46():
    deopt 174 [r69];
  D68():
    deopt 246 [i2];
  L52(dx8):
    c33 = `as.logical`(dx8);
    if c33 then L285() else L53(c33);
  L193():
    c14 = `as.logical`(r69);
    if c14 then L194() else L28(c14);
  L230():
    p30 = prom<V +>{
      mergeCmd = ld mergeCmd;
      mergeCmd1 = force? mergeCmd;
      checkMissing(mergeCmd1);
      return mergeCmd1;
    };
    p31 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p33 = prom<V +>{
      shQuote = ldf shQuote;
      p32 = prom<V +>{
        potfile10 = ld potfile;
        potfile11 = force? potfile10;
        checkMissing(potfile11);
        return potfile11;
      };
      r104 = dyn shQuote(p32);
      return r104;
    };
    r106 = dyn paste5(p30, p31, p33);
    check L231() else D69();
  L282():
    dr6 = tryDispatchBuiltin.1("[[", r160);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L284() else L283(dr6);
  L283(r162):
    __3 = ldf `[[` in base;
    r163 = dyn __3(r162, "UTF-8");
    goto L52(r163);
  D69():
    deopt 250 [i2, r106];
  L28(c16):
    c20 = `as.logical`(c16);
    if c20 then L198() else L29();
  L53(c35):
    c39 = `as.logical`(c35);
    if c39 then L288() else L54();
  L194():
    same = ldf same;
    check L195() else D47();
  L231():
    st cmd = r106;
    verbose7 = ld verbose;
    check L232() else D70();
  L284():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L52(dx7);
  L285():
    mo_make3 = ld mo_make;
    check L286() else D105();
  D47():
    deopt 176 [c14];
  D70():
    deopt 252 [i2, verbose7];
  D105():
    deopt 380 [c33, mo_make3];
  L29():
    verbose5 = ld verbose;
    check L205() else D52();
  L32(r75):
    goto L35();
  L54():
    goto L59();
  L59():
    is_base = ld is_base;
    check L315() else D127();
  L195():
    p18 = prom<V +>{
      potfile2 = ld potfile;
      potfile3 = force? potfile2;
      checkMissing(potfile3);
      return potfile3;
    };
    p19 = prom<V +>{
      ofile2 = ld ofile;
      ofile3 = force? ofile2;
      checkMissing(ofile3);
      return ofile3;
    };
    r72 = dyn same(p18, p19);
    check L196() else D48();
  L198():
    verbose3 = ld verbose;
    check L199() else D49();
  L232():
    verbose8 = force? verbose7;
    checkMissing(verbose8);
    c26 = `as.logical`(verbose8);
    if c26 then L233() else L39();
  L286():
    mo_make4 = force? mo_make3;
    checkMissing(mo_make4);
    c36 = `as.logical`(mo_make4);
    c37 = `&&`(c33, c36);
    goto L53(c37);
  L288():
    st lang = "en@quot";
    message2 = ldf message;
    check L289() else D106();
  D48():
    deopt 179 [c14, r72];
  D49():
    deopt 181 [verbose3];
  D52():
    deopt 189 [verbose5];
  D106():
    deopt 387 [];
  D127():
    deopt 457 [is_base];
  L39():
    message = ldf message;
    check L237() else D73();
  L40(i7):
    system = ldf system;
    check L239() else D75();
  L196():
    c17 = `as.logical`(r72);
    c18 = `&&`(c14, c17);
    goto L28(c18);
  L199():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c21 = `as.logical`(verbose4);
    if c21 then L200() else L30();
  L205():
    verbose6 = force? verbose5;
    checkMissing(verbose6);
    c22 = `as.logical`(verbose6);
    if c22 then L206() else L33();
  L233():
    cat3 = ldf cat;
    check L234() else D71();
  L289():
    p57 = prom<V +>{
      lang4 = ld lang;
      lang5 = force? lang4;
      checkMissing(lang5);
      return lang5;
    };
    r165 = dyn message2[, , , domain]("  R-", p57, ":", NA_LGL);
    check L290() else D107();
  L315():
    is_base1 = force? is_base;
    checkMissing(is_base1);
    c42 = `as.logical`(is_base1);
    if c42 then L60(c42) else L316();
  D71():
    deopt 255 [i2];
  D73():
    deopt 261 [i2];
  D75():
    deopt 271 [i7];
  D107():
    deopt 393 [r165];
  L30():
    goto L31(NULL);
  L31(r74):
    goto L32(r74);
  L33():
    goto L34();
  L34():
    file_copy = ldf `file.copy`;
    check L210() else D55();
  L60(c43):
    r201 = `!`(c43);
    c48 = `as.logical`(r201);
    if c48 then L319() else L61();
  L200():
    cat1 = ldf cat;
    check L201() else D50();
  L206():
    cat2 = ldf cat;
    check L207() else D53();
  L234():
    p34 = prom<V +>{
      cmd = ld cmd;
      cmd1 = force? cmd;
      checkMissing(cmd1);
      return cmd1;
    };
    r108 = dyn cat3("Running cmd", p34, ":\n");
    check L235() else D72();
  L237():
    p35 = prom<V +>{
      lang = ld lang;
      lang1 = force? lang;
      checkMissing(lang1);
      return lang1;
    };
    r111 = dyn message[, , , appendLF, domain]("  R-", p35, ":", FALSE, NA_LGL);
    check L238() else D74();
  L239():
    p36 = prom<V +>{
      cmd2 = ld cmd;
      cmd3 = force? cmd2;
      checkMissing(cmd3);
      return cmd3;
    };
    r113 = dyn system(p36);
    check L240() else D76();
  L290():
    tempfile1 = ldf tempfile;
    check L291() else D108();
  L316():
    have_src = ld have_src;
    check L317() else D128();
  D50():
    deopt 184 [];
  D53():
    deopt 192 [];
  D55():
    deopt 200 [];
  D72():
    deopt 259 [i2, r108];
  D74():
    deopt 269 [i2, r111];
  D76():
    deopt 273 [i7, r113];
  D108():
    deopt 395 [];
  D128():
    deopt 459 [c42, have_src];
  L61():
    pot_make3 = ld pot_make;
    check L325() else D130();
  L201():
    r73 = dyn cat1("the same() as previous: not copying.\n");
    check L202() else D51();
  L207():
    p20 = prom<V +>{
      potfile4 = ld potfile;
      potfile5 = force? potfile4;
      checkMissing(potfile5);
      return potfile5;
    };
    r77 = dyn cat2("copying to potfile", p20, "\n");
    check L208() else D54();
  L210():
    p21 = prom<V +>{
      ofile4 = ld ofile;
      ofile5 = force? ofile4;
      checkMissing(ofile5);
      return ofile5;
    };
    p22 = prom<V +>{
      potfile6 = ld potfile;
      potfile7 = force? potfile6;
      checkMissing(potfile7);
      return potfile7;
    };
    r81 = dyn file_copy[, , overwrite](p21, p22, TRUE);
    check L211() else D56();
  L235():
    goto L40(i2);
  L238():
    goto L40(i2);
  L240():
    r114 = `!=`(r113, 0);
    c27 = `as.logical`(r114);
    if c27 then L241() else L41();
  L291():
    r166 = dyn tempfile1();
    check L292() else D109();
  L317():
    have_src1 = force? have_src;
    checkMissing(have_src1);
    c45 = `as.logical`(have_src1);
    c46 = `||`(c42, c45);
    goto L60(c46);
  L319():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L320() else L321();
  D51():
    deopt 186 [r73];
  D54():
    deopt 196 [r77];
  D56():
    deopt 205 [r81];
  D109():
    deopt 396 [r166];
  D130():
    deopt 470 [pot_make3];
  L41():
    checkPoFile = ldf checkPoFile;
    check L246() else D79();
  L62(r203):
    popenv;
    return r203;
  L202():
    goto L31(r73);
  L208():
    goto L34();
  L211():
    goto L32(r81);
  L241():
    warning = ldf warning;
    check L242() else D77();
  L292():
    st f = r166;
    en_quote = ldf en_quote;
    check L293() else D110();
  L320():
    invisible = ldf invisible in base;
    r204 = dyn invisible();
    check L322() else D129();
  L321():
    r202 = dyn base8();
    goto L62(r202);
  L325():
    pot_make4 = force? pot_make3;
    checkMissing(pot_make4);
    c49 = `as.logical`(pot_make4);
    if c49 then L326() else L64();
  D77():
    deopt 277 [i7];
  D79():
    deopt 289 [i7];
  D110():
    deopt 399 [];
  D129():
    deopt 466 [r204];
  L64():
    is_base6 = ld is_base;
    check L406() else D182();
  L88():
    dir4 = ldf dir;
    check L416() else D188();
  L242():
    p38 = prom<V +>{
      sQuote = ldf sQuote;
      p37 = prom<V +>{
        f4 = ld f;
        f5 = force? f4;
        checkMissing(f5);
        return f5;
      };
      r116 = dyn sQuote(p37);
      return r116;
    };
    r118 = dyn warning[, , , domain]("running msgmerge on ", p38, " failed", NA_LGL);
    check L243() else D78();
  L246():
    p39 = prom<V +>{
      f6 = ld f;
      f7 = force? f6;
      checkMissing(f7);
      return f7;
    };
    r121 = dyn checkPoFile(p39, TRUE);
    check L247() else D80();
  L293():
    p58 = prom<V +>{
      potfile12 = ld potfile;
      potfile13 = force? potfile12;
      checkMissing(potfile13);
      return potfile13;
    };
    p59 = prom<V +>{
      f12 = ld f;
      f13 = force? f12;
      checkMissing(f13);
      return f13;
    };
    r169 = dyn en_quote(p58, p59);
    check L294() else D111();
  L322():
    goto L62(r204);
  L326():
    tempfile2 = ldf tempfile;
    check L327() else D131();
  D78():
    deopt 283 [i7, r118];
  D80():
    deopt 292 [i7, r121];
  D111():
    deopt 402 [r169];
  D131():
    deopt 473 [];
  D182():
    deopt 651 [is_base6];
  D188():
    deopt 672 [];
  L243():
    goto L38(i7);
  L247():
    st res = r121;
    nrow = ldf nrow;
    check L248() else D81();
  L294():
    file_path6 = ldf `file.path`;
    check L295() else D112();
  L327():
    r207 = dyn tempfile2();
    check L328() else D132();
  L406():
    is_base7 = force? is_base6;
    checkMissing(is_base7);
    c65 = `as.logical`(is_base7);
    if c65 then L407() else L89();
  L416():
    r292 = dyn dir4[, pattern, `full.names`]("po", "^[^R].*[.]po$", TRUE);
    check L417() else D189();
  D81():
    deopt 295 [i7];
  D112():
    deopt 404 [];
  D132():
    deopt 474 [r207];
  D189():
    deopt 678 [r292];
  L89():
    pkg17 = ld pkg;
    check L409() else D183();
  L90(r280):
    st dom = r280;
    file_exists3 = ldf `file.exists`;
    check L410() else D184();
  L248():
    p40 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      return res1;
    };
    r123 = dyn nrow(p40);
    check L249() else D82();
  L295():
    p60 = prom<V +>{
      stem2 = ld stem;
      stem3 = force? stem2;
      checkMissing(stem3);
      return stem3;
    };
    p61 = prom<V +>{
      lang6 = ld lang;
      lang7 = force? lang6;
      checkMissing(lang7);
      return lang7;
    };
    r172 = dyn file_path6(p60, p61, "LC_MESSAGES");
    check L296() else D113();
  L328():
    st ofile = r207;
    is_base2 = ld is_base;
    check L329() else D133();
  L407():
    goto L90("R");
  L417():
    st pofiles = r292;
    pofiles8 = ld pofiles;
    check L418() else D190();
  D82():
    deopt 297 [i7, r123];
  D113():
    deopt 408 [r172];
  D133():
    deopt 476 [is_base2];
  D183():
    deopt 655 [pkg17];
  D184():
    deopt 659 [];
  D190():
    deopt 680 [pofiles8];
  L249():
    c28 = `as.logical`(r123);
    if c28 then L250() else L43();
  L296():
    st dest = r172;
    dir_create2 = ldf `dir.create`;
    check L297() else D114();
  L329():
    is_base3 = force? is_base2;
    checkMissing(is_base3);
    r208 = `!`(is_base3);
    c50 = `as.logical`(r208);
    if c50 then L330() else L65();
  L409():
    pkg18 = force? pkg17;
    checkMissing(pkg18);
    goto L90(pkg18);
  L410():
    p98 = prom<V +>{
      file_path9 = ldf `file.path`;
      p97 = prom<V +>{
        paste12 = ldf paste0;
        p96 = prom<V +>{
          dom2 = ld dom;
          dom3 = force? dom2;
          checkMissing(dom3);
          return dom3;
        };
        r282 = dyn paste12(p96, ".pot");
        return r282;
      };
      r284 = dyn file_path9("po", p97);
      st potfile = r284;
      invisible.0();
      return r284;
    };
    r286 = dyn file_exists3(p98);
    check L411() else D185();
  L418():
    pofiles9 = force? pofiles8;
    checkMissing(pofiles9);
    c67 = `is.object`(pofiles9);
    if c67 then L419() else L420(pofiles9);
  D114():
    deopt 411 [];
  D185():
    deopt 661 [r286];
  L43():
    mo_make1 = ld mo_make;
    check L257() else D87();
  L65():
    st dom = "R";
    setwd2 = ldf setwd;
    check L351() else D146();
  L72():
    sprintf4 = ldf sprintf;
    check L355() else D150();
  L92(dx10):
    st pofiles = dx10;
    pofiles14 = ld pofiles;
    check L423() else D192();
  L250():
    print = ldf print;
    check L251() else D83();
  L297():
    p62 = prom<V +>{
      dest6 = ld dest;
      dest7 = force? dest6;
      checkMissing(dest7);
      return dest7;
    };
    r174 = dyn dir_create2(p62, FALSE, TRUE);
    check L298() else D115();
  L330():
    pkg15 = ld pkg;
    check L331() else D134();
  L411():
    r287 = `!`(r286);
    c66 = `as.logical`(r287);
    if c66 then L412() else L91();
  L419():
    dr8 = tryDispatchBuiltin.1("[", pofiles9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L421() else L420(dr8);
  L420(pofiles11):
    pofiles12 = ld pofiles;
    check L422() else D191();
  D83():
    deopt 299 [i7];
  D87():
    deopt 312 [i7, mo_make1];
  D115():
    deopt 415 [r174];
  D134():
    deopt 479 [pkg15];
  D146():
    deopt 531 [];
  D150():
    deopt 542 [];
  D191():
    deopt 682 [pofiles11, pofiles12];
  D192():
    deopt 688 [pofiles14];
  L91():
    goto L88();
  L251():
    p41 = prom<V +>{
      res2 = ld res;
      res3 = force? res2;
      checkMissing(res3);
      return res3;
    };
    r125 = dyn print(p41);
    check L252() else D84();
  L257():
    mo_make2 = force? mo_make1;
    checkMissing(mo_make2);
    r128 = `!`(mo_make2);
    c29 = `as.logical`(r128);
    if c29 then L258() else L45();
  L298():
    file_path7 = ldf `file.path`;
    check L299() else D116();
  L331():
    pkg16 = force? pkg15;
    checkMissing(pkg16);
    st dom = pkg16;
    setwd1 = ldf setwd;
    check L332() else D135();
  L351():
    r224 = dyn setwd2("../../..");
    check L352() else D147();
  L355():
    p81 = prom<V +>{
      shQuote5 = ldf shQuote;
      p80 = prom<V +>{
        ofile6 = ld ofile;
        ofile7 = force? ofile6;
        checkMissing(ofile7);
        return ofile7;
      };
      r229 = dyn shQuote5(p80);
      return r229;
    };
    r231 = dyn sprintf4("xgettext --keyword=_ --keyword=N_ -o %s", p81);
    check L356() else D151();
  L412():
    stop2 = ldf stop;
    check L413() else D186();
  L421():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L92(dx9);
  L422():
    pofiles13 = force? pofiles12;
    checkMissing(pofiles13);
    r293 = `!=`(pofiles13, "po/en@quot.po");
    __4 = ldf `[` in base;
    r294 = dyn __4(pofiles11, r293);
    goto L92(r294);
  L423():
    pofiles15 = force? pofiles14;
    checkMissing(pofiles15);
    s2 = toForSeq(pofiles15);
    l2 = length(s2);
    i38 = 0;
    goto L93(i38);
  D84():
    deopt 301 [i7, r125];
  D116():
    deopt 417 [];
  D135():
    deopt 483 [];
  D147():
    deopt 533 [r224];
  D151():
    deopt 545 [r231];
  D186():
    deopt 664 [];
  L45():
    file_path4 = ldf `file.path`;
    check L261() else D88();
  L93(i39):
    i40 = `+`.1(i39, 1);
    c68 = `<`.1(l2, i40);
    if c68 then L424() else L106();
  L252():
    message1 = ldf message;
    check L253() else D85();
  L258():
    goto L38(i7);
  L299():
    p63 = prom<V +>{
      dest8 = ld dest;
      dest9 = force? dest8;
      checkMissing(dest9);
      return dest9;
    };
    p65 = prom<V +>{
      sprintf2 = ldf sprintf;
      p64 = prom<V +>{
        pkg13 = ld pkg;
        pkg14 = force? pkg13;
        checkMissing(pkg14);
        return pkg14;
      };
      r177 = dyn sprintf2("R-%s.mo", p64);
      return r177;
    };
    r179 = dyn file_path7(p63, p65);
    check L300() else D117();
  L332():
    r209 = dyn setwd1("src");
    check L333() else D136();
  L352():
    st od = r224;
    filtergrep = ldf filtergrep;
    check L353() else D148();
  L356():
    st cmd = r231;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L357() else L358();
  L413():
    p100 = prom<V +>{
      gettextf1 = ldf gettextf;
      p99 = prom<V +>{
        potfile18 = ld potfile;
        potfile19 = force? potfile18;
        checkMissing(potfile19);
        return potfile19;
      };
      r289 = dyn gettextf1("file '%s' does not exist", p99);
      return r289;
    };
    r291 = dyn stop2[, domain](p100, NA_LGL);
    check L414() else D187();
  D85():
    deopt 303 [i7];
  D88():
    deopt 320 [i7];
  D117():
    deopt 420 [r179];
  D136():
    deopt 485 [r209];
  D148():
    deopt 536 [];
  D187():
    deopt 668 [r291];
  L73(r233):
    st cmd = r233;
    paste10 = ldf paste;
    check L382() else D165();
  L106():
    x2 = `[[`(s2, i40, NULL, TRUE);
    st f = x2;
    sub1 = ldf sub;
    check L425() else D193();
  L253():
    r126 = dyn message1[, domain]("not installing", NA_LGL);
    check L254() else D86();
  L261():
    p42 = prom<V +>{
      stem = ld stem;
      stem1 = force? stem;
      checkMissing(stem1);
      return stem1;
    };
    p43 = prom<V +>{
      lang2 = ld lang;
      lang3 = force? lang2;
      checkMissing(lang3);
      return lang3;
    };
    r132 = dyn file_path4(p42, p43, "LC_MESSAGES");
    check L262() else D89();
  L300():
    st dest = r179;
    paste7 = ldf paste;
    check L301() else D118();
  L333():
    st od = r209;
    st exts = "[.](c|cc|cpp|m|mm)$";
    dir2 = ldf dir;
    check L334() else D137();
  L353():
    p79 = prom<V +>{
      readLines = ldf readLines;
      r225 = dyn readLines("po/POTFILES");
      return r225;
    };
    r227 = dyn filtergrep("^#", p79);
    check L354() else D149();
  L357():
    cmd12 = ld cmd;
    check L359() else D152();
  L358():
    r232 = dyn base11(<sym cmd>, <lang paste0("--package-name=", name)>, <lang paste0("--package-version=", version)>, "--add-comments=TRANSLATORS:", <lang if(`!`(is.null(copyright)), sprintf("--copyright-holder=\"%s\"", copyright))>, <lang if(`!`(is.null(bugs)), sprintf("--msgid-bugs-address=\"%s\"", bugs))>, <lang if(is_base, "-C")>);
    goto L73(r232);
  L414():
    goto L88();
  L424():
    l10n_info1 = ldf l10n_info;
    check L477() else D230();
  D86():
    deopt 307 [i7, r126];
  D89():
    deopt 324 [i7, r132];
  D118():
    deopt 423 [];
  D137():
    deopt 491 [];
  D149():
    deopt 539 [r227];
  D152():
    deopt 549 [cmd12];
  D165():
    deopt 596 [];
  D193():
    deopt 691 [i40];
  D230():
    deopt 825 [];
  L254():
    goto L38(i7);
  L262():
    st dest = r132;
    dir_create1 = ldf `dir.create`;
    check L263() else D90();
  L301():
    p67 = prom<V +>{
      shQuote3 = ldf shQuote;
      p66 = prom<V +>{
        dest10 = ld dest;
        dest11 = force? dest10;
        checkMissing(dest11);
        return dest11;
      };
      r181 = dyn shQuote3(p66);
      return r181;
    };
    p69 = prom<V +>{
      shQuote4 = ldf shQuote;
      p68 = prom<V +>{
        f14 = ld f;
        f15 = force? f14;
        checkMissing(f15);
        return f15;
      };
      r184 = dyn shQuote4(p68);
      return r184;
    };
    r186 = dyn paste7("msgfmt -c --statistics -o", p67, p69);
    check L302() else D119();
  L334():
    p75 = prom<V +>{
      exts = ld exts;
      exts1 = force? exts;
      checkMissing(exts1);
      return exts1;
    };
    r211 = dyn dir2[, pattern](".", p75);
    check L335() else D138();
  L354():
    st cfiles = r227;
    goto L72();
  L359():
    cmd13 = force? cmd12;
    checkMissing(cmd13);
    paste8 = ldf paste0;
    check L360() else D153();
  L382():
    p86 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r253):
      return r253;
    L1():
      cmd14 = ld cmd;
      cmd15 = force? cmd14;
      checkMissing(cmd15);
      cfiles2 = ld cfiles;
      cfiles3 = force? cfiles2;
      checkMissing(cfiles3);
      c61 = ldf c in base;
      r254 = dyn c61(cmd15, cfiles3);
      goto L0(r254);
    L2():
      r252 = dyn base14(<sym cmd>, <sym cfiles>);
      goto L0(r252);
    };
    r256 = dyn paste10[, collapse](p86, " ");
    check L383() else D166();
  L425():
    p102 = prom<V +>{
      basename4 = ldf basename;
      p101 = prom<V +>{
        f18 = ld f;
        f19 = force? f18;
        checkMissing(f19);
        return f19;
      };
      r296 = dyn basename4(p101);
      return r296;
    };
    r298 = dyn sub1("[.]po", "", p102);
    check L426() else D194();
  L477():
    r358 = dyn l10n_info1();
    check L478() else D231();
  D90():
    deopt 327 [i7];
  D119():
    deopt 427 [r186];
  D138():
    deopt 495 [r211];
  D153():
    deopt 552 [];
  D166():
    deopt 600 [r256];
  D194():
    deopt 695 [i40, r298];
  D231():
    deopt 826 [r358];
  L263():
    p44 = prom<V +>{
      dest = ld dest;
      dest1 = force? dest;
      checkMissing(dest1);
      return dest1;
    };
    r134 = dyn dir_create1(p44, FALSE, TRUE);
    check L264() else D91();
  L302():
    st cmd = r186;
    verbose11 = ld verbose;
    check L303() else D120();
  L335():
    st cfiles = r211;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L336() else L337();
  L360():
    p82 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    r235 = dyn paste8("--package-name=", p82);
    check L361() else D154();
  L383():
    st cmd = r256;
    verbose13 = ld verbose;
    check L384() else D167();
  L426():
    st lang = r298;
    paste13 = ldf paste;
    check L427() else D195();
  L478():
    c75 = `is.object`(r358);
    if c75 then L479() else L480(r358);
  D91():
    deopt 331 [i7, r134];
  D120():
    deopt 429 [verbose11];
  D154():
    deopt 555 [r235];
  D167():
    deopt 602 [verbose13];
  D195():
    deopt 698 [i40];
  L66(r213):
    s1 = toForSeq(r213);
    l1 = length(s1);
    i26 = 0;
    goto L67(i26);
  L107(dx12):
    c76 = `as.logical`(dx12);
    if c76 then L482() else L108(c76);
  L264():
    file_path5 = ldf `file.path`;
    check L265() else D92();
  L303():
    verbose12 = force? verbose11;
    checkMissing(verbose12);
    c40 = `as.logical`(verbose12);
    if c40 then L304() else L55();
  L336():
    c51 = ldf c in base;
    r214 = dyn c51("windows", "cairo");
    check L338() else D139();
  L337():
    r212 = dyn base9("windows", "cairo");
    goto L66(r212);
  L361():
    paste9 = ldf paste0;
    check L362() else D155();
  L384():
    verbose14 = force? verbose13;
    checkMissing(verbose14);
    c62 = `as.logical`(verbose14);
    if c62 then L385() else L82();
  L427():
    p103 = prom<V +>{
      mergeCmd2 = ld mergeCmd;
      mergeCmd3 = force? mergeCmd2;
      checkMissing(mergeCmd3);
      return mergeCmd3;
    };
    p105 = prom<V +>{
      shQuote6 = ldf shQuote;
      p104 = prom<V +>{
        f20 = ld f;
        f21 = force? f20;
        checkMissing(f21);
        return f21;
      };
      r301 = dyn shQuote6(p104);
      return r301;
    };
    p107 = prom<V +>{
      shQuote7 = ldf shQuote;
      p106 = prom<V +>{
        potfile20 = ld potfile;
        potfile21 = force? potfile20;
        checkMissing(potfile21);
        return potfile21;
      };
      r304 = dyn shQuote7(p106);
      return r304;
    };
    r306 = dyn paste13(p103, p105, p107);
    check L428() else D196();
  L479():
    dr10 = tryDispatchBuiltin.1("[[", r358);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L481() else L480(dr10);
  L480(r360):
    __5 = ldf `[[` in base;
    r361 = dyn __5(r360, "UTF-8");
    goto L107(r361);
  D92():
    deopt 333 [i7];
  D139():
    deopt 502 [r214];
  D155():
    deopt 557 [];
  D196():
    deopt 702 [i40, r306];
  L55():
    goto L56();
  L56():
    system2 = ldf system;
    check L308() else D123();
  L67(i27):
    i28 = `+`.1(i27, 1);
    c52 = `<`.1(l1, i28);
    if c52 then L339() else L71();
  L82():
    goto L83();
  L83():
    system3 = ldf system;
    check L389() else D170();
  L108(c78):
    c82 = `as.logical`(c78);
    if c82 then L485() else L109();
  L265():
    p45 = prom<V +>{
      dest2 = ld dest;
      dest3 = force? dest2;
      checkMissing(dest3);
      return dest3;
    };
    p47 = prom<V +>{
      sprintf = ldf sprintf;
      p46 = prom<V +>{
        pkg11 = ld pkg;
        pkg12 = force? pkg11;
        checkMissing(pkg12);
        return pkg12;
      };
      r137 = dyn sprintf("R-%s.mo", p46);
      return r137;
    };
    r139 = dyn file_path5(p45, p47);
    check L266() else D93();
  L304():
    cat5 = ldf cat;
    check L305() else D121();
  L338():
    goto L66(r214);
  L362():
    p83 = prom<V +>{
      version5 = ld version;
      version6 = force? version5;
      checkMissing(version6);
      return version6;
    };
    r237 = dyn paste9("--package-version=", p83);
    check L363() else D156();
  L385():
    cat6 = ldf cat;
    check L386() else D168();
  L428():
    st cmd = r306;
    verbose15 = ld verbose;
    check L429() else D197();
  L481():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L107(dx11);
  L482():
    mo_make7 = ld mo_make;
    check L483() else D232();
  D93():
    deopt 336 [i7, r139];
  D121():
    deopt 432 [];
  D123():
    deopt 440 [];
  D156():
    deopt 560 [r237];
  D168():
    deopt 605 [];
  D170():
    deopt 613 [];
  D197():
    deopt 704 [i40, verbose15];
  D232():
    deopt 830 [c76, mo_make7];
  L71():
    x1 = `[[`(s1, i28, NULL, TRUE);
    st subdir = x1;
    dir_exists = ldf `dir.exists`;
    check L340() else D140();
  L109():
    goto L114();
  L114():
    sym15 = ldf invisible;
    base15 = ldf invisible in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L512() else L513();
  L266():
    st dest = r139;
    paste6 = ldf paste;
    check L267() else D94();
  L305():
    p70 = prom<V +>{
      cmd8 = ld cmd;
      cmd9 = force? cmd8;
      checkMissing(cmd9);
      return cmd9;
    };
    r188 = dyn cat5("Running cmd", p70, ":\n");
    check L306() else D122();
  L308():
    p71 = prom<V +>{
      cmd10 = ld cmd;
      cmd11 = force? cmd10;
      checkMissing(cmd11);
      return cmd11;
    };
    r191 = dyn system2(p71);
    check L309() else D124();
  L339():
    goto L72();
  L363():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L364() else L365();
  L386():
    p87 = prom<V +>{
      cmd16 = ld cmd;
      cmd17 = force? cmd16;
      checkMissing(cmd17);
      return cmd17;
    };
    r258 = dyn cat6("Running cmd", p87, ":\n");
    check L387() else D169();
  L389():
    p88 = prom<V +>{
      cmd18 = ld cmd;
      cmd19 = force? cmd18;
      checkMissing(cmd19);
      return cmd19;
    };
    r261 = dyn system3(p88);
    check L390() else D171();
  L429():
    verbose16 = force? verbose15;
    checkMissing(verbose16);
    c69 = `as.logical`(verbose16);
    if c69 then L430() else L94();
  L483():
    mo_make8 = force? mo_make7;
    checkMissing(mo_make8);
    c79 = `as.logical`(mo_make8);
    c80 = `&&`(c76, c79);
    goto L108(c80);
  L485():
    st lang = "en@quot";
    message5 = ldf message;
    check L486() else D233();
  D94():
    deopt 339 [i7];
  D122():
    deopt 436 [r188];
  D124():
    deopt 442 [r191];
  D140():
    deopt 504 [i28];
  D169():
    deopt 609 [r258];
  D171():
    deopt 615 [r261];
  D233():
    deopt 837 [];
  L74(r239):
    r240 = `!`(r239);
    c56 = `as.logical`(r240);
    if c56 then L367() else L75();
  L94():
    message3 = ldf message;
    check L434() else D200();
  L95(i45):
    system4 = ldf system;
    check L436() else D202();
  L115(r400):
    popenv;
    return r400;
  L267():
    p49 = prom<V +>{
      shQuote1 = ldf shQuote;
      p48 = prom<V +>{
        dest4 = ld dest;
        dest5 = force? dest4;
        checkMissing(dest5);
        return dest5;
      };
      r141 = dyn shQuote1(p48);
      return r141;
    };
    p51 = prom<V +>{
      shQuote2 = ldf shQuote;
      p50 = prom<V +>{
        f8 = ld f;
        f9 = force? f8;
        checkMissing(f9);
        return f9;
      };
      r144 = dyn shQuote2(p50);
      return r144;
    };
    r146 = dyn paste6("msgfmt -c --statistics -o", p49, p51);
    check L268() else D95();
  L306():
    goto L56();
  L309():
    r192 = `!=`(r191, 0);
    c41 = `as.logical`(r192);
    if c41 then L310() else L57();
  L340():
    p76 = prom<V +>{
      subdir = ld subdir;
      subdir1 = force? subdir;
      checkMissing(subdir1);
      return subdir1;
    };
    r216 = dyn dir_exists(p76);
    check L341() else D141();
  L364():
    copyright1 = ld copyright;
    check L366() else D157();
  L365():
    r238 = dyn base12(<sym copyright>);
    goto L74(r238);
  L387():
    goto L83();
  L390():
    r262 = `!=`(r261, 0);
    c63 = `as.logical`(r262);
    if c63 then L391() else L84();
  L430():
    cat7 = ldf cat;
    check L431() else D198();
  L486():
    p130 = prom<V +>{
      lang12 = ld lang;
      lang13 = force? lang12;
      checkMissing(lang13);
      return lang13;
    };
    r363 = dyn message5[, , , domain]("  ", p130, ":", NA_LGL);
    check L487() else D234();
  L512():
    invisible1 = ldf invisible in base;
    r401 = dyn invisible1();
    check L514() else D254();
  L513():
    r399 = dyn base15();
    goto L115(r399);
  D95():
    deopt 343 [i7, r146];
  D141():
    deopt 506 [i28, r216];
  D157():
    deopt 563 [copyright1];
  D198():
    deopt 707 [i40];
  D200():
    deopt 713 [i40];
  D202():
    deopt 723 [i45];
  D234():
    deopt 843 [r363];
  D254():
    deopt 908 [r401];
  L57():
    goto L58(NULL);
  L58(r199):
    goto L59();
  L75():
    goto L76(NULL);
  L76(r243):
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L371() else L372();
  L84():
    goto L85();
  L85():
    setwd3 = ldf setwd;
    check L395() else D174();
  L268():
    st cmd = r146;
    verbose9 = ld verbose;
    check L269() else D96();
  L310():
    warning2 = ldf warning;
    check L311() else D125();
  L341():
    c53 = `as.logical`(r216);
    if c53 then L342() else L68();
  L366():
    copyright2 = force? copyright1;
    checkMissing(copyright2);
    c55 = `==`(copyright2, NULL);
    goto L74(c55);
  L367():
    sprintf5 = ldf sprintf;
    check L368() else D158();
  L391():
    stop1 = ldf stop;
    check L392() else D172();
  L431():
    p108 = prom<V +>{
      cmd20 = ld cmd;
      cmd21 = force? cmd20;
      checkMissing(cmd21);
      return cmd21;
    };
    r308 = dyn cat7("Running cmd", p108, ":\n");
    check L432() else D199();
  L434():
    p109 = prom<V +>{
      lang8 = ld lang;
      lang9 = force? lang8;
      checkMissing(lang9);
      return lang9;
    };
    r311 = dyn message3[, , , appendLF, domain]("  ", p109, ":", FALSE, NA_LGL);
    check L435() else D201();
  L436():
    p110 = prom<V +>{
      cmd22 = ld cmd;
      cmd23 = force? cmd22;
      checkMissing(cmd23);
      return cmd23;
    };
    r313 = dyn system4(p110);
    check L437() else D203();
  L487():
    tempfile3 = ldf tempfile;
    check L488() else D235();
  L514():
    goto L115(r401);
  D96():
    deopt 345 [i7, verbose9];
  D125():
    deopt 446 [];
  D158():
    deopt 568 [];
  D172():
    deopt 619 [];
  D174():
    deopt 627 [];
  D199():
    deopt 711 [i40, r308];
  D201():
    deopt 721 [i40, r311];
  D203():
    deopt 725 [i45, r313];
  D235():
    deopt 845 [];
  L68():
    goto L70(i28);
  L70(i36):
    goto L67(i36);
  L77(r245):
    r246 = `!`(r245);
    c58 = `as.logical`(r246);
    if c58 then L374() else L78();
  L269():
    verbose10 = force? verbose9;
    checkMissing(verbose10);
    c30 = `as.logical`(verbose10);
    if c30 then L270() else L47();
  L311():
    p74 = prom<V +>{
      sprintf3 = ldf sprintf;
      p73 = prom<V +>{
        basename3 = ldf basename;
        p72 = prom<V +>{
          f16 = ld f;
          f17 = force? f16;
          checkMissing(f17);
          return f17;
        };
        r194 = dyn basename3(p72);
        return r194;
      };
      r196 = dyn sprintf3("running msgfmt on %s failed", p73);
      return r196;
    };
    r198 = dyn warning2[, domain, `immediate.`](p74, NA_LGL, TRUE);
    check L312() else D126();
  L342():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L343() else L344();
  L368():
    p84 = prom<V +>{
      copyright3 = ld copyright;
      copyright4 = force? copyright3;
      checkMissing(copyright4);
      return copyright4;
    };
    r242 = dyn sprintf5("--copyright-holder=\"%s\"", p84);
    check L369() else D159();
  L371():
    bugs3 = ld bugs;
    check L373() else D160();
  L372():
    r244 = dyn base13(<sym bugs>);
    goto L77(r244);
  L392():
    r263 = dyn stop1[, domain]("running xgettext failed", NA_LGL);
    check L393() else D173();
  L395():
    p89 = prom<V +>{
      od = ld od;
      od1 = force? od;
      checkMissing(od1);
      return od1;
    };
    r266 = dyn setwd3(p89);
    check L396() else D175();
  L432():
    goto L95(i40);
  L435():
    goto L95(i40);
  L437():
    r314 = `!=`(r313, 0);
    c70 = `as.logical`(r314);
    if c70 then L438() else L96();
  L488():
    r364 = dyn tempfile3();
    check L489() else D236();
  D126():
    deopt 452 [r198];
  D159():
    deopt 571 [r242];
  D160():
    deopt 575 [bugs3];
  D173():
    deopt 623 [r263];
  D175():
    deopt 629 [r266];
  D236():
    deopt 846 [r364];
  L47():
    goto L48(i7);
  L48(i22):
    system1 = ldf system;
    check L274() else D99();
  L69(i35, r218):
    st cfiles = r218;
    goto L70(i35);
  L78():
    goto L79(NULL);
  L79(r249):
    is_base4 = ld is_base;
    check L378() else D163();
  L96():
    checkPoFile1 = ldf checkPoFile;
    check L443() else D206();
  L270():
    cat4 = ldf cat;
    check L271() else D97();
  L312():
    goto L58(r198);
  L343():
    cfiles = ld cfiles;
    check L345() else D142();
  L344():
    r217 = dyn base10(<sym cfiles>, <lang dir(subdir, pattern=exts, full.names=TRUE)>);
    goto L69(i28, r217);
  L369():
    goto L76(r242);
  L373():
    bugs4 = force? bugs3;
    checkMissing(bugs4);
    c57 = `==`(bugs4, NULL);
    goto L77(c57);
  L374():
    sprintf6 = ldf sprintf;
    check L375() else D161();
  L393():
    goto L85();
  L396():
    file_path8 = ldf `file.path`;
    check L397() else D176();
  L438():
    warning3 = ldf warning;
    check L439() else D204();
  L489():
    st f = r364;
    en_quote1 = ldf en_quote;
    check L490() else D237();
  D97():
    deopt 348 [i7];
  D99():
    deopt 356 [i22];
  D142():
    deopt 509 [i28, cfiles];
  D161():
    deopt 580 [];
  D163():
    deopt 586 [is_base4];
  D176():
    deopt 631 [];
  D204():
    deopt 729 [i45];
  D206():
    deopt 741 [i45];
  D237():
    deopt 849 [];
  L271():
    p52 = prom<V +>{
      cmd4 = ld cmd;
      cmd5 = force? cmd4;
      checkMissing(cmd5);
      return cmd5;
    };
    r148 = dyn cat4("Running cmd", p52, ":\n");
    check L272() else D98();
  L274():
    p53 = prom<V +>{
      cmd6 = ld cmd;
      cmd7 = force? cmd6;
      checkMissing(cmd7);
      return cmd7;
    };
    r151 = dyn system1(p53);
    check L275() else D100();
  L345():
    cfiles1 = force? cfiles;
    checkMissing(cfiles1);
    dir3 = ldf dir;
    check L346() else D143();
  L375():
    p85 = prom<V +>{
      bugs5 = ld bugs;
      bugs6 = force? bugs5;
      checkMissing(bugs6);
      return bugs6;
    };
    r248 = dyn sprintf6("--msgid-bugs-address=\"%s\"", p85);
    check L376() else D162();
  L378():
    is_base5 = force? is_base4;
    checkMissing(is_base5);
    c59 = `as.logical`(is_base5);
    if c59 then L379() else L80();
  L397():
    p91 = prom<V +>{
      paste11 = ldf paste0;
      p90 = prom<V +>{
        dom = ld dom;
        dom1 = force? dom;
        checkMissing(dom1);
        return dom1;
      };
      r268 = dyn paste11(p90, ".pot");
      return r268;
    };
    r270 = dyn file_path8("po", p91);
    check L398() else D177();
  L439():
    p111 = prom<V +>{
      f22 = ld f;
      f23 = force? f22;
      checkMissing(f23);
      return f23;
    };
    r316 = dyn warning3[, , , domain]("running msgmerge on ", p111, " failed", NA_LGL);
    check L440() else D205();
  L443():
    p112 = prom<V +>{
      f24 = ld f;
      f25 = force? f24;
      checkMissing(f25);
      return f25;
    };
    r319 = dyn checkPoFile1(p112, TRUE);
    check L444() else D207();
  L490():
    p131 = prom<V +>{
      potfile22 = ld potfile;
      potfile23 = force? potfile22;
      checkMissing(potfile23);
      return potfile23;
    };
    p132 = prom<V +>{
      f30 = ld f;
      f31 = force? f30;
      checkMissing(f31);
      return f31;
    };
    r367 = dyn en_quote1(p131, p132);
    check L491() else D238();
  D98():
    deopt 352 [i7, r148];
  D100():
    deopt 358 [i22, r151];
  D143():
    deopt 512 [i28];
  D162():
    deopt 583 [r248];
  D177():
    deopt 634 [r270];
  D205():
    deopt 735 [i45, r316];
  D207():
    deopt 744 [i45, r319];
  D238():
    deopt 852 [r367];
  L80():
    goto L81(NULL);
  L81(r250):
    c60 = ldf c in base;
    r251 = dyn c60(cmd13, r235, r237, "--add-comments=TRANSLATORS:", r243, r249, r250);
    check L381() else D164();
  L272():
    goto L48(i7);
  L275():
    r152 = `!=`(r151, 0);
    c31 = `as.logical`(r152);
    if c31 then L276() else L49();
  L346():
    p77 = prom<V +>{
      subdir2 = ld subdir;
      subdir3 = force? subdir2;
      checkMissing(subdir3);
      return subdir3;
    };
    p78 = prom<V +>{
      exts2 = ld exts;
      exts3 = force? exts2;
      checkMissing(exts3);
      return exts3;
    };
    r221 = dyn dir3[, pattern, `full.names`](p77, p78, TRUE);
    check L347() else D144();
  L376():
    goto L79(r248);
  L379():
    goto L81("-C");
  L398():
    st potfile = r270;
    same1 = ldf same;
    check L399() else D178();
  L440():
    goto L93(i45);
  L444():
    st res = r319;
    nrow1 = ldf nrow;
    check L445() else D208();
  L491():
    file_path12 = ldf `file.path`;
    check L492() else D239();
  D144():
    deopt 518 [i28, r221];
  D164():
    deopt 593 [r251];
  D178():
    deopt 637 [];
  D208():
    deopt 747 [i45];
  D239():
    deopt 854 [];
  L49():
    goto L50(i22);
  L50(i25):
    goto L38(i25);
  L276():
    warning1 = ldf warning;
    check L277() else D101();
  L347():
    c54 = ldf c in base;
    r222 = dyn c54(cfiles1, r221);
    check L348() else D145();
  L381():
    goto L73(r251);
  L399():
    p92 = prom<V +>{
      potfile14 = ld potfile;
      potfile15 = force? potfile14;
      checkMissing(potfile15);
      return potfile15;
    };
    p93 = prom<V +>{
      ofile8 = ld ofile;
      ofile9 = force? ofile8;
      checkMissing(ofile9);
      return ofile9;
    };
    r273 = dyn same1(p92, p93);
    check L400() else D179();
  L445():
    p113 = prom<V +>{
      res4 = ld res;
      res5 = force? res4;
      checkMissing(res5);
      return res5;
    };
    r321 = dyn nrow1(p113);
    check L446() else D209();
  L492():
    p133 = prom<V +>{
      stem6 = ld stem;
      stem7 = force? stem6;
      checkMissing(stem7);
      return stem7;
    };
    p134 = prom<V +>{
      lang14 = ld lang;
      lang15 = force? lang14;
      checkMissing(lang15);
      return lang15;
    };
    r370 = dyn file_path12(p133, p134, "LC_MESSAGES");
    check L493() else D240();
  D101():
    deopt 362 [i22];
  D145():
    deopt 520 [i28, r222];
  D179():
    deopt 640 [r273];
  D209():
    deopt 749 [i45, r321];
  D240():
    deopt 858 [r370];
  L277():
    p56 = prom<V +>{
      sprintf1 = ldf sprintf;
      p55 = prom<V +>{
        basename2 = ldf basename;
        p54 = prom<V +>{
          f10 = ld f;
          f11 = force? f10;
          checkMissing(f11);
          return f11;
        };
        r154 = dyn basename2(p54);
        return r154;
      };
      r156 = dyn sprintf1("running msgfmt on %s failed", p55);
      return r156;
    };
    r158 = dyn warning1[, domain, `immediate.`](p56, NA_LGL, TRUE);
    check L278() else D102();
  L348():
    goto L69(i28, r222);
  L400():
    r274 = `!`(r273);
    c64 = `as.logical`(r274);
    if c64 then L401() else L86();
  L446():
    c71 = `as.logical`(r321);
    if c71 then L447() else L98();
  L493():
    st dest = r370;
    dir_create4 = ldf `dir.create`;
    check L494() else D241();
  D102():
    deopt 368 [i22, r158];
  D241():
    deopt 861 [];
  L86():
    goto L87(NULL);
  L87(r278):
    goto L88();
  L98():
    mo_make5 = ld mo_make;
    check L454() else D214();
  L278():
    goto L50(i22);
  L401():
    file_copy1 = ldf `file.copy`;
    check L402() else D180();
  L447():
    print1 = ldf print;
    check L448() else D210();
  L494():
    p135 = prom<V +>{
      dest18 = ld dest;
      dest19 = force? dest18;
      checkMissing(dest19);
      return dest19;
    };
    r372 = dyn dir_create4(p135, FALSE, TRUE);
    check L495() else D242();
  D180():
    deopt 643 [];
  D210():
    deopt 751 [i45];
  D214():
    deopt 764 [i45, mo_make5];
  D242():
    deopt 865 [r372];
  L402():
    p94 = prom<V +>{
      ofile10 = ld ofile;
      ofile11 = force? ofile10;
      checkMissing(ofile11);
      return ofile11;
    };
    p95 = prom<V +>{
      potfile16 = ld potfile;
      potfile17 = force? potfile16;
      checkMissing(potfile17);
      return potfile17;
    };
    r277 = dyn file_copy1[, , overwrite](p94, p95, TRUE);
    check L403() else D181();
  L448():
    p114 = prom<V +>{
      res6 = ld res;
      res7 = force? res6;
      checkMissing(res7);
      return res7;
    };
    r323 = dyn print1(p114);
    check L449() else D211();
  L454():
    mo_make6 = force? mo_make5;
    checkMissing(mo_make6);
    r326 = `!`(mo_make6);
    c72 = `as.logical`(r326);
    if c72 then L455() else L100();
  L495():
    file_path13 = ldf `file.path`;
    check L496() else D243();
  D181():
    deopt 648 [r277];
  D211():
    deopt 753 [i45, r323];
  D243():
    deopt 867 [];
  L100():
    file_path10 = ldf `file.path`;
    check L458() else D215();
  L403():
    goto L87(r277);
  L449():
    message4 = ldf message;
    check L450() else D212();
  L455():
    goto L93(i45);
  L496():
    p136 = prom<V +>{
      dest20 = ld dest;
      dest21 = force? dest20;
      checkMissing(dest21);
      return dest21;
    };
    p138 = prom<V +>{
      sprintf9 = ldf sprintf;
      p137 = prom<V +>{
        dom6 = ld dom;
        dom7 = force? dom6;
        checkMissing(dom7);
        return dom7;
      };
      r375 = dyn sprintf9("%s.mo", p137);
      return r375;
    };
    r377 = dyn file_path13(p136, p138);
    check L497() else D244();
  D212():
    deopt 755 [i45];
  D215():
    deopt 772 [i45];
  D244():
    deopt 870 [r377];
  L450():
    r324 = dyn message4[, domain]("not installing", NA_LGL);
    check L451() else D213();
  L458():
    p115 = prom<V +>{
      stem4 = ld stem;
      stem5 = force? stem4;
      checkMissing(stem5);
      return stem5;
    };
    p116 = prom<V +>{
      lang10 = ld lang;
      lang11 = force? lang10;
      checkMissing(lang11);
      return lang11;
    };
    r330 = dyn file_path10(p115, p116, "LC_MESSAGES");
    check L459() else D216();
  L497():
    st dest = r377;
    paste15 = ldf paste;
    check L498() else D245();
  D213():
    deopt 759 [i45, r324];
  D216():
    deopt 776 [i45, r330];
  D245():
    deopt 873 [];
  L451():
    goto L93(i45);
  L459():
    st dest = r330;
    dir_create3 = ldf `dir.create`;
    check L460() else D217();
  L498():
    p140 = prom<V +>{
      shQuote10 = ldf shQuote;
      p139 = prom<V +>{
        dest22 = ld dest;
        dest23 = force? dest22;
        checkMissing(dest23);
        return dest23;
      };
      r379 = dyn shQuote10(p139);
      return r379;
    };
    p142 = prom<V +>{
      shQuote11 = ldf shQuote;
      p141 = prom<V +>{
        f32 = ld f;
        f33 = force? f32;
        checkMissing(f33);
        return f33;
      };
      r382 = dyn shQuote11(p141);
      return r382;
    };
    r384 = dyn paste15("msgfmt -c --statistics -o", p140, p142);
    check L499() else D246();
  D217():
    deopt 779 [i45];
  D246():
    deopt 877 [r384];
  L460():
    p117 = prom<V +>{
      dest12 = ld dest;
      dest13 = force? dest12;
      checkMissing(dest13);
      return dest13;
    };
    r332 = dyn dir_create3(p117, FALSE, TRUE);
    check L461() else D218();
  L499():
    st cmd = r384;
    verbose19 = ld verbose;
    check L500() else D247();
  D218():
    deopt 783 [i45, r332];
  D247():
    deopt 879 [verbose19];
  L461():
    file_path11 = ldf `file.path`;
    check L462() else D219();
  L500():
    verbose20 = force? verbose19;
    checkMissing(verbose20);
    c83 = `as.logical`(verbose20);
    if c83 then L501() else L110();
  D219():
    deopt 785 [i45];
  L110():
    goto L111();
  L111():
    system6 = ldf system;
    check L505() else D250();
  L462():
    p118 = prom<V +>{
      dest14 = ld dest;
      dest15 = force? dest14;
      checkMissing(dest15);
      return dest15;
    };
    p120 = prom<V +>{
      sprintf7 = ldf sprintf;
      p119 = prom<V +>{
        dom4 = ld dom;
        dom5 = force? dom4;
        checkMissing(dom5);
        return dom5;
      };
      r335 = dyn sprintf7("%s.mo", p119);
      return r335;
    };
    r337 = dyn file_path11(p118, p120);
    check L463() else D220();
  L501():
    cat9 = ldf cat;
    check L502() else D248();
  D220():
    deopt 788 [i45, r337];
  D248():
    deopt 882 [];
  D250():
    deopt 890 [];
  L463():
    st dest = r337;
    paste14 = ldf paste;
    check L464() else D221();
  L502():
    p143 = prom<V +>{
      cmd28 = ld cmd;
      cmd29 = force? cmd28;
      checkMissing(cmd29);
      return cmd29;
    };
    r386 = dyn cat9("Running cmd", p143, ":\n");
    check L503() else D249();
  L505():
    p144 = prom<V +>{
      cmd30 = ld cmd;
      cmd31 = force? cmd30;
      checkMissing(cmd31);
      return cmd31;
    };
    r389 = dyn system6(p144);
    check L506() else D251();
  D221():
    deopt 791 [i45];
  D249():
    deopt 886 [r386];
  D251():
    deopt 892 [r389];
  L464():
    p122 = prom<V +>{
      shQuote8 = ldf shQuote;
      p121 = prom<V +>{
        dest16 = ld dest;
        dest17 = force? dest16;
        checkMissing(dest17);
        return dest17;
      };
      r339 = dyn shQuote8(p121);
      return r339;
    };
    p124 = prom<V +>{
      shQuote9 = ldf shQuote;
      p123 = prom<V +>{
        f26 = ld f;
        f27 = force? f26;
        checkMissing(f27);
        return f27;
      };
      r342 = dyn shQuote9(p123);
      return r342;
    };
    r344 = dyn paste14("msgfmt -c --statistics -o", p122, p124);
    check L465() else D222();
  L503():
    goto L111();
  L506():
    r390 = `!=`(r389, 0);
    c84 = `as.logical`(r390);
    if c84 then L507() else L112();
  D222():
    deopt 795 [i45, r344];
  L112():
    goto L113(NULL);
  L113(r397):
    goto L114();
  L465():
    st cmd = r344;
    verbose17 = ld verbose;
    check L466() else D223();
  L507():
    warning5 = ldf warning;
    check L508() else D252();
  D223():
    deopt 797 [i45, verbose17];
  D252():
    deopt 896 [];
  L466():
    verbose18 = force? verbose17;
    checkMissing(verbose18);
    c73 = `as.logical`(verbose18);
    if c73 then L467() else L102();
  L508():
    p147 = prom<V +>{
      sprintf10 = ldf sprintf;
      p146 = prom<V +>{
        basename6 = ldf basename;
        p145 = prom<V +>{
          f34 = ld f;
          f35 = force? f34;
          checkMissing(f35);
          return f35;
        };
        r392 = dyn basename6(p145);
        return r392;
      };
      r394 = dyn sprintf10("running msgfmt on %s failed", p146);
      return r394;
    };
    r396 = dyn warning5[, domain](p147, NA_LGL);
    check L509() else D253();
  D253():
    deopt 900 [r396];
  L102():
    goto L103(i45);
  L103(i60):
    system5 = ldf system;
    check L471() else D226();
  L467():
    cat8 = ldf cat;
    check L468() else D224();
  L509():
    goto L113(r396);
  D224():
    deopt 800 [i45];
  D226():
    deopt 808 [i60];
  L468():
    p125 = prom<V +>{
      cmd24 = ld cmd;
      cmd25 = force? cmd24;
      checkMissing(cmd25);
      return cmd25;
    };
    r346 = dyn cat8("Running cmd", p125, ":\n");
    check L469() else D225();
  L471():
    p126 = prom<V +>{
      cmd26 = ld cmd;
      cmd27 = force? cmd26;
      checkMissing(cmd27);
      return cmd27;
    };
    r349 = dyn system5(p126);
    check L472() else D227();
  D225():
    deopt 804 [i45, r346];
  D227():
    deopt 810 [i60, r349];
  L469():
    goto L103(i45);
  L472():
    r350 = `!=`(r349, 0);
    c74 = `as.logical`(r350);
    if c74 then L473() else L104();
  L104():
    goto L105(i60);
  L105(i63):
    goto L93(i63);
  L473():
    warning4 = ldf warning;
    check L474() else D228();
  D228():
    deopt 814 [i60];
  L474():
    p129 = prom<V +>{
      sprintf8 = ldf sprintf;
      p128 = prom<V +>{
        basename5 = ldf basename;
        p127 = prom<V +>{
          f28 = ld f;
          f29 = force? f28;
          checkMissing(f29);
          return f29;
        };
        r352 = dyn basename5(p127);
        return r352;
      };
      r354 = dyn sprintf8("running msgfmt on %s failed", p128);
      return r354;
    };
    r356 = dyn warning4[, domain](p129, NA_LGL);
    check L475() else D229();
  D229():
    deopt 818 [i60, r356];
  L475():
    goto L105(i60);
  }
}
fun inner3950065357(a, b) {
  (reg a:*, reg b:*) -+> V { var a:*, var b:*, reg readLines:cls, reg a1:*, reg a2:V, reg p:p(V +), reg r1:V, reg readLines1:cls, reg b1:*, reg b2:V, reg p1:p(V +), reg r3:V, reg filtergrep:cls, reg tmpa:*, reg tmpa1:V, reg p2:p(V +), reg r5:V, reg filtergrep1:cls, reg tmpb:*, reg tmpb1:V, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg tmpa2:*, reg tmpa3:V, reg tmpb2:*, reg tmpb3:V, reg identical:cls, reg r10:V |
    mkenv;
    st a = a;
    st b = b;
    readLines = ldf readLines;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      a1 = ld a;
      a2 = force? a1;
      checkMissing(a2);
      return a2;
    };
    r1 = dyn readLines(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    st tmpa = r1;
    readLines1 = ldf readLines;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p1 = prom<V +>{
      b1 = ld b;
      b2 = force? b1;
      checkMissing(b2);
      return b2;
    };
    r3 = dyn readLines1(p1);
    check L4() else D3();
  D3():
    deopt 8 [r3];
  L4():
    st tmpb = r3;
    filtergrep = ldf filtergrep;
    check L5() else D4();
  D4():
    deopt 11 [];
  L5():
    p2 = prom<V +>{
      tmpa = ld tmpa;
      tmpa1 = force? tmpa;
      checkMissing(tmpa1);
      return tmpa1;
    };
    r5 = dyn filtergrep("^\"POT-Creation-Date:", p2);
    check L6() else D5();
  D5():
    deopt 14 [r5];
  L6():
    st tmpa = r5;
    filtergrep1 = ldf filtergrep;
    check L7() else D6();
  D6():
    deopt 17 [];
  L7():
    p3 = prom<V +>{
      tmpb = ld tmpb;
      tmpb1 = force? tmpb;
      checkMissing(tmpb1);
      return tmpb1;
    };
    r7 = dyn filtergrep1("^\"POT-Creation-Date:", p3);
    check L8() else D7();
  D7():
    deopt 20 [r7];
  L8():
    st tmpb = r7;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r9):
    popenv;
    return r9;
  L9():
    tmpa2 = ld tmpa;
    check L11() else D8();
  L10():
    r8 = dyn base(<sym tmpa>, <sym tmpb>);
    goto L0(r8);
  D8():
    deopt 24 [tmpa2];
  L11():
    tmpa3 = force? tmpa2;
    checkMissing(tmpa3);
    tmpb2 = ld tmpb;
    check L12() else D9();
  D9():
    deopt 26 [tmpb2];
  L12():
    tmpb3 = force? tmpb2;
    checkMissing(tmpb3);
    identical = ldf identical in base;
    r10 = dyn identical(tmpa3, tmpb3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L13() else D10();
  D10():
    deopt 36 [r10];
  L13():
    goto L0(r10);
  }
}