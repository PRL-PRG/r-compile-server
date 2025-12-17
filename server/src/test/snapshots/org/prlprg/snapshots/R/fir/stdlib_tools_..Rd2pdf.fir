fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4162098913;
    st `..Rd2pdf` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4162098913(args, quit) {
  (reg args:*, reg quit:*) -+> V { var args:*, reg args_isMissing:L, reg args_orDefault:*, var quit:*, reg quit_isMissing:L, reg quit_orDefault:*, reg r:cls, reg r1:cls, reg options:cls, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg args1:*, reg args2:V, reg c:V, reg c1:L, reg commandArgs:cls, reg r5:V, reg paste:cls, reg args3:*, reg args4:V, reg p:p(V +), reg r7:V, reg strsplit:cls, reg args5:*, reg args6:V, reg p1:p(V +), reg r9:V, reg c2:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg c3:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r13:V, reg getwd:cls, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg startdir:*, reg startdir1:V, reg c4:V, reg c5:L, reg stop:cls, reg r17:V, reg paste1:cls, reg Sys_getpid:cls, reg r19:V, reg p2:p(V +), reg r21:V, reg character:cls, reg r22:V, reg _Platform:*, reg _Platform1:V, reg c6:L, reg _Platform3:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg r23:V, reg r24:V, reg Sys_getenv:cls, reg WINDOWS:*, reg WINDOWS1:V, reg c7:L, reg p3:p(V +), reg r26:V, reg WINDOWS2:*, reg WINDOWS3:V, reg c8:L, reg r27:S, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg args7:*, reg args8:V, reg length:cls, reg r30:V, reg c9:L, reg args9:*, reg args10:V, reg c10:L, reg args12:V, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg __2:cls, reg r31:V, reg _in_:cls, reg a:*, reg a1:V, reg p4:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg c11:cls, reg r35:V, reg p5:p(V +), reg r37:V, reg c12:L, reg Usage:cls, reg r38:V, reg q:cls, reg r39:V, reg _in_1:cls, reg a2:*, reg a3:V, reg p6:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg r43:V, reg c13:cls, reg r44:V, reg p7:p(V +), reg r46:V, reg c14:L, reg cat:cls, reg R_version:*, reg R_version1:V, reg c15:L, reg R_version3:V, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg __3:cls, reg r47:V, reg p8:p(V +), reg R_version4:*, reg R_version5:V, reg c16:L, reg R_version7:V, reg dr10:V, reg dc5:L, reg dx13:V, reg dx14:V, reg __4:cls, reg r49:V, reg p9:p(V +), reg R_version8:*, reg R_version9:V, reg c17:L, reg R_version11:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg __5:cls, reg r51:V, reg p10:p(V +), reg r53:V, reg cat1:cls, reg _R_copyright_msg:cls, reg r54:V, reg p11:p(V +), reg r56:V, reg q1:cls, reg r57:V, reg a4:*, reg a5:V, reg r58:V, reg c18:L, reg _in_2:cls, reg a6:*, reg a7:V, reg p12:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r60:V, reg r61:V, reg c19:cls, reg r62:V, reg p13:p(V +), reg r64:V, reg c20:L, reg a8:*, reg a9:V, reg r65:V, reg c21:L, reg a10:*, reg a11:V, reg r66:V, reg c22:L, reg a12:*, reg a13:V, reg r67:V, reg c23:L, reg substr:cls, reg a14:*, reg a15:V, reg p14:p(V +), reg r69:V, reg r70:V, reg c24:L, reg substr1:cls, reg a16:*, reg a17:V, reg p15:p(V +), reg r72:V, reg a18:*, reg a19:V, reg r73:V, reg c25:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r74:V, reg r75:V, reg args13:*, reg args14:V, reg length1:cls, reg r76:V, reg r77:V, reg c26:L, reg args15:*, reg args16:V, reg c27:L, reg args18:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg __6:cls, reg r78:V, reg args19:*, reg args20:V, reg c28:L, reg args22:V, reg dr16:V, reg dc8:L, reg dx19:V, reg dx20:V, reg __7:cls, reg r79:V, reg dx21:V, reg stop1:cls, reg r80:V, reg substr2:cls, reg a20:*, reg a21:V, reg p16:p(V +), reg r82:V, reg r83:V, reg c29:L, reg substr3:cls, reg a22:*, reg a23:V, reg p17:p(V +), reg r85:V, reg a24:*, reg a25:V, reg r86:V, reg c30:L, reg a26:*, reg a27:V, reg r87:V, reg c31:L, reg _in_3:cls, reg substr4:cls, reg a28:*, reg a29:V, reg p18:p(V +), reg r89:V, reg p19:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r91:V, reg r92:V, reg c32:cls, reg r93:V, reg p20:p(V +), reg r95:V, reg c33:L, reg substr5:cls, reg a30:*, reg a31:V, reg p21:p(V +), reg r97:V, reg substr6:cls, reg a32:*, reg a33:V, reg p22:p(V +), reg r99:V, reg r100:V, reg c34:L, reg substr7:cls, reg a34:*, reg a35:V, reg p23:p(V +), reg r102:V, reg substr8:cls, reg a36:*, reg a37:V, reg p24:p(V +), reg r104:V, reg r105:V, reg c35:L, reg substr9:cls, reg a38:*, reg a39:V, reg p25:p(V +), reg r107:V, reg substr10:cls, reg a40:*, reg a41:V, reg p26:p(V +), reg r109:V, reg r110:V, reg c36:L, reg substr11:cls, reg a42:*, reg a43:V, reg p27:p(V +), reg r112:V, reg a44:*, reg a45:V, reg r113:V, reg c37:L, reg a46:*, reg a47:V, reg r114:V, reg c38:L, reg a48:*, reg a49:V, reg r115:V, reg c39:L, reg substr12:cls, reg a50:*, reg a51:V, reg p28:p(V +), reg r117:V, reg r118:V, reg c40:L, reg substr13:cls, reg a52:*, reg a53:V, reg p29:p(V +), reg r120:V, reg startsWith:cls, reg a54:*, reg a55:V, reg p30:p(V +), reg r122:V, reg c41:L, reg message:cls, reg sQuote:cls, reg a56:*, reg a57:V, reg p31:p(V +), reg r124:V, reg p32:p(V +), reg r126:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r127:V, reg r128:V, reg files:*, reg files1:V, reg a58:*, reg a59:V, reg c42:cls, reg r129:V, reg args23:*, reg args24:V, reg c43:L, reg args26:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg __8:cls, reg r130:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r131:V, reg r132:V, reg files2:*, reg files3:V, reg length2:cls, reg r133:V, reg r134:V, reg c44:L, reg message1:cls, reg r135:V, reg q2:cls, reg r136:V, reg WINDOWS4:*, reg WINDOWS5:V, reg c45:L, reg sub:cls, reg files4:*, reg files5:V, reg c46:L, reg files7:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg __9:cls, reg r138:V, reg p33:p(V +), reg r140:V, reg l:*, reg c47:L, reg r142:V, reg l2:*, reg dr22:V, reg dc11:L, reg dx26:V, reg r144:V, reg dx27:V, reg ___:cls, reg r145:V, reg dir_exists:cls, reg files8:*, reg files9:V, reg c48:L, reg files11:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg __10:cls, reg r147:V, reg p34:p(V +), reg r149:V, reg c49:L, reg file_exists:cls, reg file_path:cls, reg files12:*, reg files13:V, reg c50:L, reg files15:V, reg dr26:V, reg dc13:L, reg dx30:V, reg dx31:V, reg __11:cls, reg r150:V, reg p35:p(V +), reg r152:V, reg p36:p(V +), reg r154:V, reg c51:L, reg quiet:*, reg quiet1:V, reg r155:V, reg c52:L, reg cat2:cls, reg r156:V, reg files16:*, reg files17:V, reg c53:L, reg files19:V, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg __12:cls, reg r158:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r159:V, reg r160:V, reg output:*, reg output1:V, reg nzchar:cls, reg r161:V, reg r162:V, reg c54:L, reg paste2:cls, reg basename:cls, reg dir:*, reg dir1:V, reg p37:p(V +), reg r164:V, reg p38:p(V +), reg out_ext:*, reg out_ext1:V, reg p39:p(V +), reg r167:V, reg r168:V, reg r169:V, reg file_exists1:cls, reg file_path1:cls, reg files20:*, reg files21:V, reg c55:L, reg files23:V, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg __13:cls, reg r170:V, reg p40:p(V +), reg r172:V, reg p41:p(V +), reg r174:V, reg c56:L, reg c58:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r175:V, reg c61:L, reg r176:V, reg grepl:cls, reg readLines:cls, reg f:*, reg f1:V, reg p42:p(V +), reg r178:V, reg p43:p(V +), reg r180:V, reg any:cls, reg r181:V, reg c62:L, reg c63:V, reg c65:L, reg quiet2:*, reg quiet3:V, reg r182:V, reg c66:L, reg cat3:cls, reg r183:V, reg files24:*, reg files25:V, reg c67:L, reg files27:V, reg dr32:V, reg dc16:L, reg dx36:V, reg dx37:V, reg __14:cls, reg r185:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r186:V, reg r187:V, reg output2:*, reg output3:V, reg nzchar1:cls, reg r188:V, reg r189:V, reg c68:L, reg paste3:cls, reg basename1:cls, reg dir2:*, reg dir3:V, reg p44:p(V +), reg r191:V, reg p45:p(V +), reg out_ext2:*, reg out_ext3:V, reg p46:p(V +), reg r194:V, reg index:*, reg index1:V, reg c69:L, reg c71:V, reg basename2:cls, reg dir4:*, reg dir5:V, reg p47:p(V +), reg r197:V, reg r198:V, reg c72:L, reg c73:V, reg c75:L, reg quiet4:*, reg quiet5:V, reg r199:V, reg c76:L, reg cat4:cls, reg r200:V, reg r201:V, reg r202:V, reg dir_exists1:cls, reg file_path2:cls, reg files28:*, reg files29:V, reg c77:L, reg files31:V, reg dr34:V, reg dc17:L, reg dx38:V, reg dx39:V, reg __15:cls, reg r203:V, reg p48:p(V +), reg r205:V, reg p49:p(V +), reg r207:V, reg c78:L, reg d:*, reg d1:V, reg d2:V, reg files32:*, reg files33:V, reg c79:L, reg files35:V, reg dr36:V, reg dc18:L, reg dx40:V, reg __16:cls, reg r208:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r210:V, reg r211:V, reg files36:*, reg files37:V, reg length3:cls, reg r212:V, reg r213:V, reg c80:L, reg c82:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r214:V, reg c85:L, reg r215:V, reg output4:*, reg output5:V, reg nzchar2:cls, reg r216:V, reg r217:V, reg c86:L, reg c87:V, reg c89:L, reg paste4:cls, reg sub1:cls, reg basename3:cls, reg files38:*, reg files39:V, reg p50:p(V +), reg r219:V, reg p51:p(V +), reg r221:V, reg p52:p(V +), reg out_ext4:*, reg out_ext5:V, reg p53:p(V +), reg r224:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r225:V, reg r226:V, reg dir6:*, reg dir7:V, reg nzchar3:cls, reg r227:V, reg r228:V, reg c90:L, reg paste5:cls, reg files40:*, reg files41:V, reg p54:p(V +), reg r230:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r232:V, reg r233:V, reg output6:*, reg output7:V, reg nzchar4:cls, reg r234:V, reg r235:V, reg c91:L, reg paste6:cls, reg out_ext6:*, reg out_ext7:V, reg p55:p(V +), reg r237:V, reg file_exists2:cls, reg output8:*, reg output9:V, reg p56:p(V +), reg r240:V, reg c92:L, reg c94:V, reg force:*, reg force1:V, reg r241:V, reg c95:L, reg c96:V, reg c98:L, reg cat5:cls, reg sQuote1:cls, reg output10:*, reg output11:V, reg p57:p(V +), reg r243:V, reg p58:p(V +), reg r245:V, reg q3:cls, reg r246:V, reg dir_exists2:cls, reg build_dir:*, reg build_dir1:V, reg p59:p(V +), reg r249:V, reg c99:L, reg c101:V, reg unlink:cls, reg build_dir2:*, reg build_dir3:V, reg p60:p(V +), reg r251:V, reg c102:L, reg c103:V, reg c105:L, reg cat6:cls, reg r252:V, reg q4:cls, reg r253:V, reg dir_create:cls, reg build_dir4:*, reg build_dir5:V, reg p61:p(V +), reg r256:V, reg try:cls, reg _Rd2pdf:cls, reg files42:*, reg files43:V, reg c106:L, reg files45:V, reg dr38:V, reg dc19:L, reg dx41:V, reg dx42:V, reg __17:cls, reg r257:V, reg p62:p(V +), reg file_path3:cls, reg build_dir6:*, reg build_dir7:V, reg p63:p(V +), reg r260:V, reg p64:p(V +), reg title:*, reg title1:V, reg p65:p(V +), reg quiet6:*, reg quiet7:V, reg p66:p(V +), reg description:*, reg description1:V, reg p67:p(V +), reg only_meta:*, reg only_meta1:V, reg p68:p(V +), reg enc:*, reg enc1:V, reg p69:p(V +), reg outenc:*, reg outenc1:V, reg p70:p(V +), reg dir8:*, reg dir9:V, reg p71:p(V +), reg OSdir:*, reg OSdir1:V, reg p72:p(V +), reg internals:*, reg internals1:V, reg p73:p(V +), reg index2:*, reg index3:V, reg p74:p(V +), reg pkglist:*, reg pkglist1:V, reg p75:p(V +), reg r273:V, reg p76:p(V +), reg r275:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r276:V, reg r277:V, reg res:*, reg res1:V, reg inherits:cls, reg r278:V, reg c107:L, reg q5:cls, reg r279:V, reg quiet8:*, reg quiet9:V, reg r281:V, reg c108:L, reg cat7:cls, reg out_ext8:*, reg out_ext9:V, reg p77:p(V +), reg r283:V, reg setwd:cls, reg build_dir8:*, reg build_dir9:V, reg p78:p(V +), reg r286:V, reg try1:cls, reg texi2pdf:cls, reg quiet10:*, reg quiet11:V, reg p79:p(V +), reg index4:*, reg index5:V, reg p80:p(V +), reg r289:V, reg p81:p(V +), reg r291:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r292:V, reg r293:V, reg res2:*, reg res3:V, reg inherits1:cls, reg r294:V, reg c109:L, reg try2:cls, reg texi2pdf1:cls, reg quiet12:*, reg quiet13:V, reg p82:p(V +), reg index6:*, reg index7:V, reg p83:p(V +), reg r297:V, reg p84:p(V +), reg r299:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r300:V, reg r301:V, reg res4:*, reg res5:V, reg inherits2:cls, reg r302:V, reg c110:L, reg message2:cls, reg r303:V, reg do_cleanup:cls, reg r304:V, reg q6:cls, reg r305:V, reg r306:V, reg setwd1:cls, reg startdir2:*, reg startdir3:V, reg p85:p(V +), reg r309:V, reg quiet14:*, reg quiet15:V, reg r310:V, reg c111:L, reg cat8:cls, reg sQuote2:cls, reg output12:*, reg output13:V, reg p86:p(V +), reg r312:V, reg p87:p(V +), reg r314:V, reg file_copy:cls, reg file_path4:cls, reg build_dir10:*, reg build_dir11:V, reg p88:p(V +), reg paste7:cls, reg out_ext10:*, reg out_ext11:V, reg p89:p(V +), reg r318:V, reg p90:p(V +), reg r320:V, reg p91:p(V +), reg output14:*, reg output15:V, reg p92:p(V +), reg force2:*, reg force3:V, reg p93:p(V +), reg r324:V, reg quiet16:*, reg quiet17:V, reg r325:V, reg c112:L, reg cat9:cls, reg r326:V, reg do_cleanup1:cls, reg quiet18:*, reg quiet19:V, reg p94:p(V +), reg r329:V, reg preview:*, reg preview1:V, reg r330:V, reg c113:L, reg system:cls, reg paste8:cls, reg preview2:*, reg preview3:V, reg p95:p(V +), reg output16:*, reg output17:V, reg p96:p(V +), reg r333:V, reg p97:p(V +), reg r335:V, reg quit1:*, reg quit2:V, reg c114:L, reg q7:cls, reg r337:V |
    mkenv;
    args_isMissing = missing.0(args);
    if args_isMissing then L0(NULL) else L0(args);
  L0(args_orDefault):
    st args = args_orDefault;
    quit_isMissing = missing.0(quit);
    if quit_isMissing then L1(TRUE) else L1(quit);
  L1(quit_orDefault):
    st quit = quit_orDefault;
    r = clos inner2708490134;
    st do_cleanup = r;
    r1 = clos inner2708337952;
    st Usage = r1;
    options = ldf options;
    check L111() else D0();
  D0():
    deopt 7 [];
  L111():
    r2 = dyn options[showErrorCalls, warn](FALSE, 1.0);
    check L112() else D1();
  D1():
    deopt 12 [r2];
  L112():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L113() else L114();
  L2(r4):
    c1 = `as.logical`(r4);
    if c1 then L116() else L3();
  L113():
    args1 = ld args;
    check L115() else D2();
  L114():
    r3 = dyn base(<sym args>);
    goto L2(r3);
  D2():
    deopt 14 [args1];
  L3():
    goto L6();
  L6():
    getwd = ldf getwd;
    check L130() else D9();
  L115():
    args2 = force? args1;
    checkMissing(args2);
    c = `==`(args2, NULL);
    goto L2(c);
  L116():
    commandArgs = ldf commandArgs;
    check L117() else D3();
  D3():
    deopt 18 [];
  D9():
    deopt 46 [];
  L117():
    r5 = dyn commandArgs(TRUE);
    check L118() else D4();
  L130():
    r14 = dyn getwd();
    check L131() else D10();
  D4():
    deopt 20 [r5];
  D10():
    deopt 47 [r14];
  L118():
    st args = r5;
    paste = ldf paste;
    check L119() else D5();
  L131():
    st startdir = r14;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L132() else L133();
  D5():
    deopt 23 [];
  L7(r16):
    c5 = `as.logical`(r16);
    if c5 then L135() else L8();
  L119():
    p = prom<V +>{
      args3 = ld args;
      args4 = force? args3;
      checkMissing(args4);
      return args4;
    };
    r7 = dyn paste[, collapse](p, " ");
    check L120() else D6();
  L132():
    startdir = ld startdir;
    check L134() else D11();
  L133():
    r15 = dyn base1(<sym startdir>);
    goto L7(r15);
  D6():
    deopt 27 [r7];
  D11():
    deopt 50 [startdir];
  L8():
    goto L9();
  L9():
    paste1 = ldf paste0;
    check L139() else D14();
  L120():
    st args = r7;
    strsplit = ldf strsplit;
    check L121() else D7();
  L134():
    startdir1 = force? startdir;
    checkMissing(startdir1);
    c4 = `==`(startdir1, NULL);
    goto L7(c4);
  L135():
    stop = ldf stop;
    check L136() else D12();
  D7():
    deopt 30 [];
  D12():
    deopt 54 [];
  D14():
    deopt 60 [];
  L121():
    p1 = prom<V +>{
      args5 = ld args;
      args6 = force? args5;
      checkMissing(args6);
      return args6;
    };
    r9 = dyn strsplit[, , fixed](p1, "nextArg", TRUE);
    check L122() else D8();
  L136():
    r17 = dyn stop("current working directory cannot be ascertained");
    check L137() else D13();
  L139():
    p2 = prom<V +>{
      Sys_getpid = ldf `Sys.getpid`;
      r19 = dyn Sys_getpid();
      return r19;
    };
    r21 = dyn paste1(".Rd2pdf", p2);
    check L140() else D15();
  D8():
    deopt 35 [r9];
  D13():
    deopt 56 [r17];
  D15():
    deopt 63 [r21];
  L122():
    c2 = `is.object`(r9);
    if c2 then L123() else L124(r9);
  L137():
    goto L9();
  L140():
    st build_dir = r21;
    st title = "";
    st quiet = FALSE;
    st clean = TRUE;
    st only_meta = FALSE;
    st out_ext = "pdf";
    st output = "";
    st enc = "unknown";
    st outenc = "UTF-8";
    st index = TRUE;
    st description = TRUE;
    st internals = FALSE;
    character = ldf character;
    check L141() else D16();
  D16():
    deopt 99 [];
  L4(dx1):
    c3 = `is.object`(dx1);
    if c3 then L126() else L127(dx1);
  L123():
    dr = tryDispatchBuiltin.1("[[", r9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L125() else L124(dr);
  L124(r11):
    __ = ldf `[[` in base;
    r12 = dyn __(r11, 1);
    goto L4(r12);
  L141():
    r22 = dyn character();
    check L142() else D17();
  D17():
    deopt 100 [r22];
  L5(dx5):
    st args = dx5;
    goto L6();
  L125():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L126():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L128() else L127(dr2);
  L127(dx3):
    __1 = ldf `[` in base;
    r13 = dyn __1(dx3, -1);
    goto L5(r13);
  L142():
    st files = r22;
    st dir = "";
    st force = FALSE;
    st pkglist = NULL;
    _Platform = ld `.Platform`;
    check L143() else D18();
  D18():
    deopt 111 [_Platform];
  L128():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx4);
  L143():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c6 = `is.object`(_Platform1);
    if c6 then L145() else L146(_Platform1);
  L144(dx8):
    r24 = `==`(dx8, "windows");
    st WINDOWS = r24;
    Sys_getenv = ldf `Sys.getenv`;
    check L148() else D19();
  L145():
    dr4 = tryDispatchBuiltin.1("$", _Platform1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L147() else L146(dr4);
  L146(_Platform3):
    r23 = `$`(_Platform3, <sym OS.type>);
    goto L144(r23);
  D19():
    deopt 118 [];
  L147():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L144(dx7);
  L148():
    p3 = prom<V +>{
      WINDOWS = ld WINDOWS;
      WINDOWS1 = force? WINDOWS;
      checkMissing(WINDOWS1);
      c7 = `as.logical`(WINDOWS1);
      if c7 then L1() else L0();
    L0():
      return "false";
    L1():
      return "open";
    };
    r26 = dyn Sys_getenv("R_PDFVIEWER", p3);
    check L149() else D20();
  D20():
    deopt 121 [r26];
  L149():
    st preview = r26;
    WINDOWS2 = ld WINDOWS;
    check L150() else D21();
  D21():
    deopt 123 [WINDOWS2];
  L150():
    WINDOWS3 = force? WINDOWS2;
    checkMissing(WINDOWS3);
    c8 = `as.logical`(WINDOWS3);
    if c8 then L151() else L10();
  L10():
    goto L11("unix");
  L11(r27):
    st OSdir = r27;
    goto L44();
  L151():
    goto L11("windows");
  L44():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L153() else L154();
  L12(r29):
    c9 = `as.logical`(r29);
    if c9 then L157() else L13();
  L153():
    args7 = ld args;
    check L155() else D22();
  L154():
    r28 = dyn base2(<sym args>);
    goto L12(r28);
  D22():
    deopt 132 [args7];
  L13():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L288() else L289();
  L155():
    args8 = force? args7;
    checkMissing(args8);
    length = ldf length in base;
    r30 = dyn length(args8);
    check L156() else D23();
  L157():
    args9 = ld args;
    check L158() else D24();
  D23():
    deopt 135 [r30];
  D24():
    deopt 136 [args9];
  L45(r132):
    r134 = `!`(r132);
    c44 = `as.logical`(r134);
    if c44 then L292() else L46();
  L156():
    goto L12(r30);
  L158():
    args10 = force? args9;
    checkMissing(args10);
    c10 = `is.object`(args10);
    if c10 then L159() else L160(args10);
  L288():
    files2 = ld files;
    check L290() else D93();
  L289():
    r131 = dyn base9(<sym files>);
    goto L45(r131);
  D93():
    deopt 419 [files2];
  L14(dx10):
    st a = dx10;
    _in_ = ldf `%in%`;
    check L162() else D25();
  L46():
    goto L47();
  L47():
    WINDOWS4 = ld WINDOWS;
    check L298() else D99();
  L159():
    dr6 = tryDispatchBuiltin.1("[", args10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L161() else L160(dr6);
  L160(args12):
    __2 = ldf `[` in base;
    r31 = dyn __2(args12, 1);
    goto L14(r31);
  L290():
    files3 = force? files2;
    checkMissing(files3);
    length2 = ldf length in base;
    r133 = dyn length2(files3);
    check L291() else D94();
  L292():
    message1 = ldf message;
    check L293() else D95();
  D25():
    deopt 143 [];
  D94():
    deopt 422 [r133];
  D95():
    deopt 425 [];
  D99():
    deopt 438 [WINDOWS4];
  L161():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L14(dx9);
  L162():
    p4 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    p5 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      c11 = ldf c in base;
      r35 = dyn c11("-h", "--help");
      goto L0(r35);
    L2():
      r33 = dyn base3("-h", "--help");
      goto L0(r33);
    };
    r37 = dyn _in_(p4, p5);
    check L163() else D26();
  L291():
    goto L45(r133);
  L293():
    r135 = dyn message1("no inputs");
    check L294() else D96();
  L298():
    WINDOWS5 = force? WINDOWS4;
    checkMissing(WINDOWS5);
    c45 = `as.logical`(WINDOWS5);
    if c45 then L299() else L48();
  D26():
    deopt 146 [r37];
  D96():
    deopt 427 [r135];
  L48():
    goto L50();
  L50():
    dir_exists = ldf `dir.exists`;
    check L306() else D102();
  L163():
    c12 = `as.logical`(r37);
    if c12 then L164() else L15();
  L294():
    q2 = ldf q;
    check L295() else D97();
  L299():
    sub = ldf sub;
    check L300() else D100();
  D97():
    deopt 429 [];
  D100():
    deopt 441 [];
  D102():
    deopt 454 [];
  L15():
    _in_1 = ldf `%in%`;
    check L170() else D31();
  L16():
    args23 = ld args;
    check L283() else D92();
  L164():
    Usage = ldf Usage;
    check L165() else D27();
  L295():
    r136 = dyn q2[, status, runLast]("no", 1, FALSE);
    check L296() else D98();
  L300():
    p33 = prom<V +>{
      files4 = ld files;
      files5 = force? files4;
      checkMissing(files5);
      c46 = `is.object`(files5);
      if c46 then L1() else L2(files5);
    L0(dx25):
      return dx25;
    L1():
      dr20 = tryDispatchBuiltin.1("[", files5);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(files7):
      __9 = ldf `[` in base;
      r138 = dyn __9(files7, 1);
      goto L0(r138);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx24);
    };
    r140 = dyn sub("[\\/]$", "", p33);
    check L301() else D101();
  L306():
    p34 = prom<V +>{
      files8 = ld files;
      files9 = force? files8;
      checkMissing(files9);
      c48 = `is.object`(files9);
      if c48 then L1() else L2(files9);
    L0(dx29):
      return dx29;
    L1():
      dr24 = tryDispatchBuiltin.1("[", files9);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(files11):
      __10 = ldf `[` in base;
      r147 = dyn __10(files11, 1);
      goto L0(r147);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx28);
    };
    r149 = dyn dir_exists(p34);
    check L307() else D103();
  D27():
    deopt 148 [];
  D31():
    deopt 157 [];
  D92():
    deopt 408 [args23];
  D98():
    deopt 435 [r136];
  D101():
    deopt 445 [r140];
  D103():
    deopt 456 [r149];
  L165():
    r38 = dyn Usage();
    check L166() else D28();
  L170():
    p6 = prom<V +>{
      a2 = ld a;
      a3 = force? a2;
      checkMissing(a3);
      return a3;
    };
    p7 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      c13 = ldf c in base;
      r44 = dyn c13("-v", "--version");
      goto L0(r44);
    L2():
      r42 = dyn base4("-v", "--version");
      goto L0(r42);
    };
    r46 = dyn _in_1(p6, p7);
    check L171() else D32();
  L283():
    args24 = force? args23;
    checkMissing(args24);
    c43 = `is.object`(args24);
    if c43 then L284() else L285(args24);
  L296():
    goto L47();
  L301():
    l = ld files;
    c47 = `is.object`(l);
    if c47 then L302() else L303(r140, l);
  L307():
    c49 = `as.logical`(r149);
    if c49 then L308() else L51();
  D28():
    deopt 149 [r38];
  D32():
    deopt 160 [r46];
  L43(dx23):
    st args = dx23;
    goto L44();
  L49(r144, dx27):
    st files = dx27;
    goto L50();
  L51():
    st description = FALSE;
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L380() else L381();
  L76():
    sym15 = ldf nzchar;
    base15 = ldf nzchar in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L394() else L395();
  L166():
    q = ldf q;
    check L167() else D29();
  L171():
    c14 = `as.logical`(r46);
    if c14 then L172() else L17();
  L284():
    dr18 = tryDispatchBuiltin.1("[", args24);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L286() else L285(dr18);
  L285(args26):
    __8 = ldf `[` in base;
    r130 = dyn __8(args26, -1);
    goto L43(r130);
  L302():
    dr22 = tryDispatchBuiltin.0("[<-", l, r140);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L304() else L303(r140, dr22);
  L303(r142, l2):
    ___ = ldf `[<-` in base;
    r145 = dyn ___(l2, r140, 1);
    goto L49(r142, r145);
  L308():
    file_exists = ldf `file.exists`;
    check L309() else D104();
  D29():
    deopt 151 [];
  D104():
    deopt 458 [];
  L17():
    a4 = ld a;
    check L180() else D39();
  L77(r211):
    r213 = `==`(r211, 1);
    c80 = `as.logical`(r213);
    if c80 then L384() else L78(c80);
  L81(r226):
    r228 = `!`(r226);
    c90 = `as.logical`(r228);
    if c90 then L398() else L82();
  L167():
    r39 = dyn q[, runLast]("no", FALSE);
    check L168() else D30();
  L172():
    cat = ldf cat;
    check L173() else D33();
  L286():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L43(dx22);
  L304():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L49(r140, dx26);
  L309():
    p36 = prom<V +>{
      file_path = ldf `file.path`;
      p35 = prom<V +>{
        files12 = ld files;
        files13 = force? files12;
        checkMissing(files13);
        c50 = `is.object`(files13);
        if c50 then L1() else L2(files13);
      L0(dx31):
        return dx31;
      L1():
        dr26 = tryDispatchBuiltin.1("[", files13);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L3() else L2(dr26);
      L2(files15):
        __11 = ldf `[` in base;
        r150 = dyn __11(files15, 1);
        goto L0(r150);
      L3():
        dx30 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx30);
      };
      r152 = dyn file_path(p35, "DESCRIPTION");
      return r152;
    };
    r154 = dyn file_exists(p36);
    check L310() else D105();
  L380():
    files36 = ld files;
    check L382() else D137();
  L381():
    r210 = dyn base13(<sym files>);
    goto L77(r210);
  L394():
    dir6 = ld dir;
    check L396() else D143();
  L395():
    r225 = dyn base15(<sym dir>);
    goto L81(r225);
  D30():
    deopt 155 [r39];
  D33():
    deopt 162 [];
  D39():
    deopt 188 [a4];
  D105():
    deopt 460 [r154];
  D137():
    deopt 579 [files36];
  D143():
    deopt 605 [dir6];
  L78(c82):
    c89 = `as.logical`(c82);
    if c89 then L390() else L80();
  L82():
    goto L83();
  L83():
    sym16 = ldf nzchar;
    base16 = ldf nzchar in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L402() else L403();
  L168():
    goto L16();
  L173():
    p8 = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c15 = `is.object`(R_version1);
      if c15 then L1() else L2(R_version1);
    L0(dx12):
      return dx12;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", R_version1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(R_version3):
      __3 = ldf `[[` in base;
      r47 = dyn __3(R_version3, "major");
      goto L0(r47);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx11);
    };
    p9 = prom<V +>{
      R_version4 = ld `R.version`;
      R_version5 = force? R_version4;
      checkMissing(R_version5);
      c16 = `is.object`(R_version5);
      if c16 then L1() else L2(R_version5);
    L0(dx14):
      return dx14;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", R_version5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(R_version7):
      __4 = ldf `[[` in base;
      r49 = dyn __4(R_version7, "minor");
      goto L0(r49);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx13);
    };
    p10 = prom<V +>{
      R_version8 = ld `R.version`;
      R_version9 = force? R_version8;
      checkMissing(R_version9);
      c17 = `is.object`(R_version9);
      if c17 then L1() else L2(R_version9);
    L0(dx16):
      return dx16;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", R_version9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(R_version11):
      __5 = ldf `[[` in base;
      r51 = dyn __5(R_version11, "svn rev");
      goto L0(r51);
    L3():
      dx15 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx15);
    };
    r53 = dyn cat[, , , , , , , sep]("Rd2pdf: ", p8, ".", p9, " (r", p10, ")\n", "");
    check L174() else D34();
  L180():
    a5 = force? a4;
    checkMissing(a5);
    r58 = `==`(a5, "--batch");
    c18 = `as.logical`(r58);
    if c18 then L181() else L18();
  L310():
    c51 = `as.logical`(r154);
    if c51 then L311() else L52();
  L382():
    files37 = force? files36;
    checkMissing(files37);
    length3 = ldf length in base;
    r212 = dyn length3(files37);
    check L383() else D138();
  L384():
    sym14 = ldf nzchar;
    base14 = ldf nzchar in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L385() else L386();
  L396():
    dir7 = force? dir6;
    checkMissing(dir7);
    nzchar3 = ldf nzchar in base;
    r227 = dyn nzchar3(dir7);
    check L397() else D144();
  L398():
    paste5 = ldf paste;
    check L399() else D145();
  D34():
    deopt 172 [r53];
  D138():
    deopt 582 [r212];
  D144():
    deopt 608 [r227];
  D145():
    deopt 611 [];
  L18():
    _in_2 = ldf `%in%`;
    check L183() else D40();
  L52():
    file_exists1 = ldf `file.exists`;
    check L330() else D114();
  L59(r169):
    goto L76();
  L79(c85, r215):
    r217 = `!`(r215);
    c86 = `as.logical`(r217);
    c87 = `&&`(c85, c86);
    goto L78(c87);
  L80():
    goto L76();
  L84(r233):
    r235 = `!`(r233);
    c91 = `as.logical`(r235);
    if c91 then L406() else L85();
  L174():
    cat1 = ldf cat;
    check L175() else D35();
  L181():
    goto L16();
  L311():
    quiet = ld quiet;
    check L312() else D106();
  L383():
    goto L77(r212);
  L385():
    output4 = ld output;
    check L387() else D139();
  L386():
    r214 = dyn base14(<sym output>);
    goto L79(c80, r214);
  L390():
    paste4 = ldf paste;
    check L391() else D141();
  L397():
    goto L81(r227);
  L399():
    p54 = prom<V +>{
      files40 = ld files;
      files41 = force? files40;
      checkMissing(files41);
      return files41;
    };
    r230 = dyn paste5[, collapse](p54, " ");
    check L400() else D146();
  L402():
    output6 = ld output;
    check L404() else D147();
  L403():
    r232 = dyn base16(<sym output>);
    goto L84(r232);
  D35():
    deopt 174 [];
  D40():
    deopt 195 [];
  D106():
    deopt 461 [quiet];
  D114():
    deopt 494 [];
  D139():
    deopt 587 [c80, output4];
  D141():
    deopt 594 [];
  D146():
    deopt 615 [r230];
  D147():
    deopt 621 [output6];
  L85():
    goto L86();
  L86():
    file_exists2 = ldf `file.exists`;
    check L410() else D151();
  L175():
    p11 = prom<V +>{
      _R_copyright_msg = ldf `.R_copyright_msg`;
      r54 = dyn _R_copyright_msg(2000.0);
      return r54;
    };
    r56 = dyn cat1[, , , , sep]("", p11, "This is free software; see the GNU General Public License version 2", "or later for copying conditions.  There is NO warranty.", "\n");
    check L176() else D36();
  L183():
    p12 = prom<V +>{
      a6 = ld a;
      a7 = force? a6;
      checkMissing(a7);
      return a7;
    };
    p13 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r61):
      return r61;
    L1():
      c19 = ldf c in base;
      r62 = dyn c19("-q", "--quiet");
      goto L0(r62);
    L2():
      r60 = dyn base5("-q", "--quiet");
      goto L0(r60);
    };
    r64 = dyn _in_2(p12, p13);
    check L184() else D41();
  L312():
    quiet1 = force? quiet;
    checkMissing(quiet1);
    r155 = `!`(quiet1);
    c52 = `as.logical`(r155);
    if c52 then L313() else L53();
  L330():
    p41 = prom<V +>{
      file_path1 = ldf `file.path`;
      p40 = prom<V +>{
        files20 = ld files;
        files21 = force? files20;
        checkMissing(files21);
        c55 = `is.object`(files21);
        if c55 then L1() else L2(files21);
      L0(dx35):
        return dx35;
      L1():
        dr30 = tryDispatchBuiltin.1("[", files21);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L3() else L2(dr30);
      L2(files23):
        __13 = ldf `[` in base;
        r170 = dyn __13(files23, 1);
        goto L0(r170);
      L3():
        dx34 = getTryDispatchBuiltinValue(dr30);
        goto L0(dx34);
      };
      r172 = dyn file_path1(p40, "DESCRIPTION.in");
      st f = r172;
      invisible.0();
      return r172;
    };
    r174 = dyn file_exists1(p41);
    check L331() else D115();
  L387():
    output5 = force? output4;
    checkMissing(output5);
    nzchar2 = ldf nzchar in base;
    r216 = dyn nzchar2(output5);
    check L388() else D140();
  L391():
    p52 = prom<V +>{
      sub1 = ldf sub;
      p51 = prom<V +>{
        basename3 = ldf basename;
        p50 = prom<V +>{
          files38 = ld files;
          files39 = force? files38;
          checkMissing(files39);
          return files39;
        };
        r219 = dyn basename3(p50);
        return r219;
      };
      r221 = dyn sub1("[.][Rr]d$", "", p51);
      return r221;
    };
    p53 = prom<V +>{
      out_ext4 = ld out_ext;
      out_ext5 = force? out_ext4;
      checkMissing(out_ext5);
      return out_ext5;
    };
    r224 = dyn paste4[, , sep](p52, p53, ".");
    check L392() else D142();
  L400():
    st dir = r230;
    goto L83();
  L404():
    output7 = force? output6;
    checkMissing(output7);
    nzchar4 = ldf nzchar in base;
    r234 = dyn nzchar4(output7);
    check L405() else D148();
  L406():
    paste6 = ldf paste0;
    check L407() else D149();
  D36():
    deopt 181 [r56];
  D41():
    deopt 198 [r64];
  D115():
    deopt 496 [r174];
  D140():
    deopt 590 [c80, r216];
  D142():
    deopt 599 [r224];
  D148():
    deopt 624 [r234];
  D149():
    deopt 627 [];
  D151():
    deopt 635 [];
  L53():
    goto L54();
  L54():
    files16 = ld files;
    check L317() else D109();
  L176():
    q1 = ldf q;
    check L177() else D37();
  L184():
    c20 = `as.logical`(r64);
    if c20 then L185() else L19();
  L313():
    cat2 = ldf cat;
    check L314() else D107();
  L331():
    c56 = `as.logical`(r174);
    if c56 then L332() else L60(c56);
  L388():
    goto L79(c80, r216);
  L392():
    st output = r224;
    goto L76();
  L405():
    goto L84(r234);
  L407():
    p55 = prom<V +>{
      out_ext6 = ld out_ext;
      out_ext7 = force? out_ext6;
      checkMissing(out_ext7);
      return out_ext7;
    };
    r237 = dyn paste6("Rd2.", p55);
    check L408() else D150();
  L410():
    p56 = prom<V +>{
      output8 = ld output;
      output9 = force? output8;
      checkMissing(output9);
      return output9;
    };
    r240 = dyn file_exists2(p56);
    check L411() else D152();
  D37():
    deopt 183 [];
  D107():
    deopt 465 [];
  D109():
    deopt 470 [files16];
  D150():
    deopt 630 [r237];
  D152():
    deopt 637 [r240];
  L19():
    a8 = ld a;
    check L187() else D42();
  L60(c58):
    c65 = `as.logical`(c58);
    if c65 then L339() else L62();
  L177():
    r57 = dyn q1[, runLast]("no", FALSE);
    check L178() else D38();
  L185():
    st quiet = TRUE;
    goto L16();
  L314():
    r156 = dyn cat2("Hmm ... looks like a package\n");
    check L315() else D108();
  L317():
    files17 = force? files16;
    checkMissing(files17);
    c53 = `is.object`(files17);
    if c53 then L318() else L319(files17);
  L332():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L333() else L334();
  L408():
    st output = r237;
    goto L86();
  L411():
    c92 = `as.logical`(r240);
    if c92 then L412() else L87(c92);
  D38():
    deopt 187 [r57];
  D42():
    deopt 202 [a8];
  D108():
    deopt 467 [r156];
  L55(dx33):
    st dir = dx33;
    sym10 = ldf nzchar;
    base10 = ldf nzchar in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L321() else L322();
  L61(c61, r176):
    c62 = `as.logical`(r176);
    c63 = `&&`(c61, c62);
    goto L60(c63);
  L62():
    dir_exists1 = ldf `dir.exists`;
    check L370() else D133();
  L87(c94):
    c98 = `as.logical`(c94);
    if c98 then L415() else L88();
  L178():
    goto L16();
  L187():
    a9 = force? a8;
    checkMissing(a9);
    r65 = `==`(a9, "--no-clean");
    c21 = `as.logical`(r65);
    if c21 then L188() else L20();
  L315():
    goto L54();
  L318():
    dr28 = tryDispatchBuiltin.1("[", files17);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L320() else L319(dr28);
  L319(files19):
    __12 = ldf `[` in base;
    r158 = dyn __12(files19, 1);
    goto L55(r158);
  L333():
    grepl = ldf grepl;
    check L335() else D116();
  L334():
    r175 = dyn base11(<lang grepl("^Priority: *base", readLines(f))>);
    goto L61(c56, r175);
  L339():
    quiet2 = ld quiet;
    check L340() else D119();
  L412():
    force = ld force;
    check L413() else D153();
  D116():
    deopt 500 [c56];
  D119():
    deopt 507 [quiet2];
  D133():
    deopt 563 [];
  D153():
    deopt 638 [c92, force];
  L20():
    a10 = ld a;
    check L190() else D43();
  L56(r160):
    r162 = `!`(r160);
    c54 = `as.logical`(r162);
    if c54 then L325() else L57();
  L88():
    goto L89();
  L89():
    dir_exists2 = ldf `dir.exists`;
    check L421() else D158();
  L188():
    st clean = FALSE;
    goto L16();
  L320():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L55(dx32);
  L321():
    output = ld output;
    check L323() else D110();
  L322():
    r159 = dyn base10(<sym output>);
    goto L56(r159);
  L335():
    p43 = prom<V +>{
      readLines = ldf readLines;
      p42 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      r178 = dyn readLines(p42);
      return r178;
    };
    r180 = dyn grepl("^Priority: *base", p43);
    check L336() else D117();
  L340():
    quiet3 = force? quiet2;
    checkMissing(quiet3);
    r182 = `!`(quiet3);
    c66 = `as.logical`(r182);
    if c66 then L341() else L63();
  L370():
    p49 = prom<V +>{
      file_path2 = ldf `file.path`;
      p48 = prom<V +>{
        files28 = ld files;
        files29 = force? files28;
        checkMissing(files29);
        c77 = `is.object`(files29);
        if c77 then L1() else L2(files29);
      L0(dx39):
        return dx39;
      L1():
        dr34 = tryDispatchBuiltin.1("[", files29);
        dc17 = getTryDispatchBuiltinDispatched(dr34);
        if dc17 then L3() else L2(dr34);
      L2(files31):
        __15 = ldf `[` in base;
        r203 = dyn __15(files31, 1);
        goto L0(r203);
      L3():
        dx38 = getTryDispatchBuiltinValue(dr34);
        goto L0(dx38);
      };
      r205 = dyn file_path2(p48, "man");
      st d = r205;
      invisible.0();
      return r205;
    };
    r207 = dyn dir_exists1(p49);
    check L371() else D134();
  L413():
    force1 = force? force;
    checkMissing(force1);
    r241 = `!`(force1);
    c95 = `as.logical`(r241);
    c96 = `&&`(c92, c95);
    goto L87(c96);
  L415():
    cat5 = ldf cat;
    check L416() else D154();
  D43():
    deopt 209 [a10];
  D110():
    deopt 478 [output];
  D117():
    deopt 503 [c56, r180];
  D134():
    deopt 565 [r207];
  D154():
    deopt 643 [];
  D158():
    deopt 659 [];
  L57():
    goto L58(NULL);
  L58(r168):
    goto L59(r168);
  L63():
    goto L64();
  L64():
    files24 = ld files;
    check L345() else D122();
  L190():
    a11 = force? a10;
    checkMissing(a11);
    r66 = `==`(a11, "--no-preview");
    c22 = `as.logical`(r66);
    if c22 then L191() else L21();
  L323():
    output1 = force? output;
    checkMissing(output1);
    nzchar = ldf nzchar in base;
    r161 = dyn nzchar(output1);
    check L324() else D111();
  L325():
    paste2 = ldf paste;
    check L326() else D112();
  L336():
    any = ldf any in base;
    r181 = dyn any(r180);
    check L337() else D118();
  L341():
    cat3 = ldf cat;
    check L342() else D120();
  L371():
    c78 = `as.logical`(r207);
    if c78 then L372() else L74();
  L416():
    p58 = prom<V +>{
      sQuote1 = ldf sQuote;
      p57 = prom<V +>{
        output10 = ld output;
        output11 = force? output10;
        checkMissing(output11);
        return output11;
      };
      r243 = dyn sQuote1(p57);
      return r243;
    };
    r245 = dyn cat5("file", p58, "exists; please remove it first\n");
    check L417() else D155();
  L421():
    p59 = prom<V +>{
      build_dir = ld build_dir;
      build_dir1 = force? build_dir;
      checkMissing(build_dir1);
      return build_dir1;
    };
    r249 = dyn dir_exists2(p59);
    check L422() else D159();
  D111():
    deopt 481 [r161];
  D112():
    deopt 484 [];
  D118():
    deopt 505 [c56, r181];
  D120():
    deopt 511 [];
  D122():
    deopt 516 [files24];
  D155():
    deopt 647 [r245];
  D159():
    deopt 661 [r249];
  L21():
    a12 = ld a;
    check L193() else D44();
  L74():
    files32 = ld files;
    check L375() else D136();
  L75(d2):
    st dir = d2;
    goto L59(d2);
  L191():
    st preview = "false";
    goto L16();
  L324():
    goto L56(r161);
  L326():
    p38 = prom<V +>{
      basename = ldf basename;
      p37 = prom<V +>{
        dir = ld dir;
        dir1 = force? dir;
        checkMissing(dir1);
        return dir1;
      };
      r164 = dyn basename(p37);
      return r164;
    };
    p39 = prom<V +>{
      out_ext = ld out_ext;
      out_ext1 = force? out_ext;
      checkMissing(out_ext1);
      return out_ext1;
    };
    r167 = dyn paste2[, , sep](p38, p39, ".");
    check L327() else D113();
  L337():
    goto L61(c56, r181);
  L342():
    r183 = dyn cat3("Hmm ... looks like a package from the R distribution\n");
    check L343() else D121();
  L345():
    files25 = force? files24;
    checkMissing(files25);
    c67 = `is.object`(files25);
    if c67 then L346() else L347(files25);
  L372():
    d = ld d;
    check L373() else D135();
  L417():
    q3 = ldf q;
    check L418() else D156();
  L422():
    c99 = `as.logical`(r249);
    if c99 then L423() else L90(c99);
  D44():
    deopt 216 [a12];
  D113():
    deopt 489 [r167];
  D121():
    deopt 513 [r183];
  D135():
    deopt 566 [d];
  D136():
    deopt 568 [files32];
  D156():
    deopt 649 [];
  L65(dx37):
    st dir = dx37;
    sym12 = ldf nzchar;
    base12 = ldf nzchar in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L349() else L350();
  L90(c101):
    c105 = `as.logical`(c101);
    if c105 then L427() else L91();
  L193():
    a13 = force? a12;
    checkMissing(a13);
    r67 = `==`(a13, "--pdf");
    c23 = `as.logical`(r67);
    if c23 then L194() else L22();
  L327():
    st output = r167;
    goto L58(r167);
  L343():
    goto L64();
  L346():
    dr32 = tryDispatchBuiltin.1("[", files25);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L348() else L347(dr32);
  L347(files27):
    __14 = ldf `[` in base;
    r185 = dyn __14(files27, 1);
    goto L65(r185);
  L373():
    d1 = force? d;
    checkMissing(d1);
    goto L75(d1);
  L375():
    files33 = force? files32;
    checkMissing(files33);
    c79 = `is.object`(files33);
    if c79 then L376() else L377(files33);
  L418():
    r246 = dyn q3[, status, runLast]("no", 1, FALSE);
    check L419() else D157();
  L423():
    unlink = ldf unlink;
    check L424() else D160();
  D157():
    deopt 655 [r246];
  D160():
    deopt 663 [c99];
  L22():
    substr = ldf substr;
    check L196() else D45();
  L66(r187):
    r189 = `!`(r187);
    c68 = `as.logical`(r189);
    if c68 then L353() else L67();
  L91():
    goto L92();
  L92():
    dir_create = ldf `dir.create`;
    check L433() else D166();
  L194():
    goto L16();
  L348():
    dx36 = getTryDispatchBuiltinValue(dr32);
    goto L65(dx36);
  L349():
    output2 = ld output;
    check L351() else D123();
  L350():
    r186 = dyn base12(<sym output>);
    goto L66(r186);
  L376():
    dr36 = tryDispatchBuiltin.1("[", files33);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L378() else L377(dr36);
  L377(files35):
    __16 = ldf `[` in base;
    r208 = dyn __16(files35, 1);
    goto L75(r208);
  L419():
    goto L89();
  L424():
    p60 = prom<V +>{
      build_dir2 = ld build_dir;
      build_dir3 = force? build_dir2;
      checkMissing(build_dir3);
      return build_dir3;
    };
    r251 = dyn unlink[, recursive](p60, TRUE);
    check L425() else D161();
  L427():
    cat6 = ldf cat;
    check L428() else D162();
  D45():
    deopt 223 [];
  D123():
    deopt 524 [output2];
  D161():
    deopt 667 [c99, r251];
  D162():
    deopt 670 [];
  D166():
    deopt 684 [];
  L67():
    goto L68();
  L68():
    index = ld index;
    check L357() else D127();
  L196():
    p14 = prom<V +>{
      a14 = ld a;
      a15 = force? a14;
      checkMissing(a15);
      return a15;
    };
    r69 = dyn substr(p14, 1.0, 8.0);
    check L197() else D46();
  L351():
    output3 = force? output2;
    checkMissing(output3);
    nzchar1 = ldf nzchar in base;
    r188 = dyn nzchar1(output3);
    check L352() else D124();
  L353():
    paste3 = ldf paste;
    check L354() else D125();
  L378():
    dx40 = getTryDispatchBuiltinValue(dr36);
    goto L75(dx40);
  L425():
    c102 = `as.logical`(r251);
    c103 = `&&`(c99, c102);
    goto L90(c103);
  L428():
    r252 = dyn cat6("cannot write to build dir\n");
    check L429() else D163();
  L433():
    p61 = prom<V +>{
      build_dir4 = ld build_dir;
      build_dir5 = force? build_dir4;
      checkMissing(build_dir5);
      return build_dir5;
    };
    r256 = dyn dir_create(p61, FALSE);
    check L434() else D167();
  D46():
    deopt 227 [r69];
  D124():
    deopt 527 [r188];
  D125():
    deopt 530 [];
  D127():
    deopt 539 [index];
  D163():
    deopt 672 [r252];
  D167():
    deopt 687 [r256];
  L197():
    r70 = `==`(r69, "--title=");
    c24 = `as.logical`(r70);
    if c24 then L198() else L23();
  L352():
    goto L66(r188);
  L354():
    p45 = prom<V +>{
      basename1 = ldf basename;
      p44 = prom<V +>{
        dir2 = ld dir;
        dir3 = force? dir2;
        checkMissing(dir3);
        return dir3;
      };
      r191 = dyn basename1(p44);
      return r191;
    };
    p46 = prom<V +>{
      out_ext2 = ld out_ext;
      out_ext3 = force? out_ext2;
      checkMissing(out_ext3);
      return out_ext3;
    };
    r194 = dyn paste3[, , sep](p45, p46, ".");
    check L355() else D126();
  L357():
    index1 = force? index;
    checkMissing(index1);
    c69 = `as.logical`(index1);
    if c69 then L358() else L69(c69);
  L429():
    q4 = ldf q;
    check L430() else D164();
  L434():
    try = ldf try;
    check L435() else D168();
  D126():
    deopt 535 [r194];
  D164():
    deopt 674 [];
  D168():
    deopt 689 [];
  L23():
    a18 = ld a;
    check L202() else D49();
  L69(c71):
    c75 = `as.logical`(c71);
    if c75 then L362() else L70();
  L198():
    substr1 = ldf substr;
    check L199() else D47();
  L355():
    st output = r194;
    goto L68();
  L358():
    basename2 = ldf basename;
    check L359() else D128();
  L430():
    r253 = dyn q4[, status, runLast]("no", 2, FALSE);
    check L431() else D165();
  L435():
    p76 = prom<V +>{
      _Rd2pdf = ldf `.Rd2pdf`;
      p62 = prom<V +>{
        files42 = ld files;
        files43 = force? files42;
        checkMissing(files43);
        c106 = `is.object`(files43);
        if c106 then L1() else L2(files43);
      L0(dx42):
        return dx42;
      L1():
        dr38 = tryDispatchBuiltin.1("[", files43);
        dc19 = getTryDispatchBuiltinDispatched(dr38);
        if dc19 then L3() else L2(dr38);
      L2(files45):
        __17 = ldf `[` in base;
        r257 = dyn __17(files45, 1);
        goto L0(r257);
      L3():
        dx41 = getTryDispatchBuiltinValue(dr38);
        goto L0(dx41);
      };
      p64 = prom<V +>{
        file_path3 = ldf `file.path`;
        p63 = prom<V +>{
          build_dir6 = ld build_dir;
          build_dir7 = force? build_dir6;
          checkMissing(build_dir7);
          return build_dir7;
        };
        r260 = dyn file_path3(p63, "Rd2.tex");
        return r260;
      };
      p65 = prom<V +>{
        title = ld title;
        title1 = force? title;
        checkMissing(title1);
        return title1;
      };
      p66 = prom<V +>{
        quiet6 = ld quiet;
        quiet7 = force? quiet6;
        checkMissing(quiet7);
        return quiet7;
      };
      p67 = prom<V +>{
        description = ld description;
        description1 = force? description;
        checkMissing(description1);
        return description1;
      };
      p68 = prom<V +>{
        only_meta = ld only_meta;
        only_meta1 = force? only_meta;
        checkMissing(only_meta1);
        return only_meta1;
      };
      p69 = prom<V +>{
        enc = ld enc;
        enc1 = force? enc;
        checkMissing(enc1);
        return enc1;
      };
      p70 = prom<V +>{
        outenc = ld outenc;
        outenc1 = force? outenc;
        checkMissing(outenc1);
        return outenc1;
      };
      p71 = prom<V +>{
        dir8 = ld dir;
        dir9 = force? dir8;
        checkMissing(dir9);
        return dir9;
      };
      p72 = prom<V +>{
        OSdir = ld OSdir;
        OSdir1 = force? OSdir;
        checkMissing(OSdir1);
        return OSdir1;
      };
      p73 = prom<V +>{
        internals = ld internals;
        internals1 = force? internals;
        checkMissing(internals1);
        return internals1;
      };
      p74 = prom<V +>{
        index2 = ld index;
        index3 = force? index2;
        checkMissing(index3);
        return index3;
      };
      p75 = prom<V +>{
        pkglist = ld pkglist;
        pkglist1 = force? pkglist;
        checkMissing(pkglist1);
        return pkglist1;
      };
      r273 = dyn _Rd2pdf(p62, p64, p65, p66, p67, p68, p69, p70, p71, p72, p73, p74, p75);
      return r273;
    };
    r275 = dyn try(p76);
    check L436() else D169();
  D47():
    deopt 231 [];
  D49():
    deopt 237 [a18];
  D128():
    deopt 542 [c69];
  D165():
    deopt 680 [r253];
  D169():
    deopt 691 [r275];
  L70():
    goto L73(NULL);
  L73(r202):
    goto L59(r202);
  L199():
    p15 = prom<V +>{
      a16 = ld a;
      a17 = force? a16;
      checkMissing(a17);
      return a17;
    };
    r72 = dyn substr1(p15, 9.0, 1000.0);
    check L200() else D48();
  L202():
    a19 = force? a18;
    checkMissing(a19);
    r73 = `==`(a19, "-o");
    c25 = `as.logical`(r73);
    if c25 then L203() else L24();
  L359():
    p47 = prom<V +>{
      dir4 = ld dir;
      dir5 = force? dir4;
      checkMissing(dir5);
      return dir5;
    };
    r197 = dyn basename2(p47);
    check L360() else D129();
  L362():
    st index = FALSE;
    quiet4 = ld quiet;
    check L363() else D130();
  L431():
    goto L92();
  L436():
    st res = r275;
    sym17 = ldf inherits;
    base17 = ldf inherits in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L437() else L438();
  D48():
    deopt 235 [r72];
  D129():
    deopt 544 [c69, r197];
  D130():
    deopt 551 [quiet4];
  L24():
    substr2 = ldf substr;
    check L221() else D56();
  L93(r277):
    c107 = `as.logical`(r277);
    if c107 then L441() else L94();
  L200():
    st title = r72;
    goto L16();
  L203():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L204() else L205();
  L360():
    r198 = `==`(r197, "base");
    c72 = `as.logical`(r198);
    c73 = `&&`(c69, c72);
    goto L69(c73);
  L363():
    quiet5 = force? quiet4;
    checkMissing(quiet5);
    r199 = `!`(quiet5);
    c76 = `as.logical`(r199);
    if c76 then L364() else L71();
  L437():
    res = ld res;
    check L439() else D170();
  L438():
    r276 = dyn base17(<sym res>, "try-error");
    goto L93(r276);
  D56():
    deopt 268 [];
  D170():
    deopt 695 [res];
  L25(r75):
    r77 = `>=`(r75, 2);
    c26 = `as.logical`(r77);
    if c26 then L208() else L26();
  L71():
    goto L72(NULL);
  L72(r201):
    goto L73(r201);
  L94():
    goto L95();
  L95():
    quiet8 = ld quiet;
    check L445() else D174();
  L204():
    args13 = ld args;
    check L206() else D50();
  L205():
    r74 = dyn base6(<sym args>);
    goto L25(r74);
  L221():
    p16 = prom<V +>{
      a20 = ld a;
      a21 = force? a20;
      checkMissing(a21);
      return a21;
    };
    r82 = dyn substr2(p16, 1.0, 9.0);
    check L222() else D57();
  L364():
    cat4 = ldf cat;
    check L365() else D131();
  L439():
    res1 = force? res;
    checkMissing(res1);
    inherits = ldf inherits in base;
    r278 = dyn inherits(res1, "try-error", FALSE);
    check L440() else D171();
  L441():
    q5 = ldf q;
    check L442() else D172();
  D50():
    deopt 243 [args13];
  D57():
    deopt 272 [r82];
  D131():
    deopt 555 [];
  D171():
    deopt 700 [r278];
  D172():
    deopt 702 [];
  D174():
    deopt 711 [quiet8];
  L26():
    stop1 = ldf stop;
    check L218() else D54();
  L29(dx21):
    goto L16();
  L206():
    args14 = force? args13;
    checkMissing(args14);
    length1 = ldf length in base;
    r76 = dyn length1(args14);
    check L207() else D51();
  L208():
    args15 = ld args;
    check L209() else D52();
  L222():
    r83 = `==`(r82, "--output=");
    c29 = `as.logical`(r83);
    if c29 then L223() else L30();
  L365():
    r200 = dyn cat4("_not_ indexing 'base' package\n");
    check L366() else D132();
  L440():
    goto L93(r278);
  L442():
    r279 = dyn q5[, status, runLast]("no", 11, FALSE);
    check L443() else D173();
  L445():
    quiet9 = force? quiet8;
    checkMissing(quiet9);
    r281 = `!`(quiet9);
    c108 = `as.logical`(r281);
    if c108 then L446() else L96();
  D51():
    deopt 246 [r76];
  D52():
    deopt 249 [args15];
  D54():
    deopt 262 [];
  D132():
    deopt 557 [r200];
  D173():
    deopt 708 [r279];
  L30():
    a24 = ld a;
    check L227() else D60();
  L96():
    goto L97();
  L97():
    setwd = ldf setwd;
    check L450() else D177();
  L207():
    goto L25(r76);
  L209():
    args16 = force? args15;
    checkMissing(args16);
    c27 = `is.object`(args16);
    if c27 then L210() else L211(args16);
  L218():
    r80 = dyn stop1[, `call.`]("-o option without value", FALSE);
    check L219() else D55();
  L223():
    substr3 = ldf substr;
    check L224() else D58();
  L366():
    goto L72(r200);
  L443():
    goto L95();
  L446():
    cat7 = ldf cat;
    check L447() else D175();
  D55():
    deopt 266 [r80];
  D58():
    deopt 276 [];
  D60():
    deopt 282 [a24];
  D175():
    deopt 715 [];
  D177():
    deopt 723 [];
  L27(dx18):
    st output = dx18;
    args19 = ld args;
    check L213() else D53();
  L210():
    dr14 = tryDispatchBuiltin.1("[", args16);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L212() else L211(dr14);
  L211(args18):
    __6 = ldf `[` in base;
    r78 = dyn __6(args18, 2);
    goto L27(r78);
  L219():
    goto L29(r80);
  L224():
    p17 = prom<V +>{
      a22 = ld a;
      a23 = force? a22;
      checkMissing(a23);
      return a23;
    };
    r85 = dyn substr3(p17, 10.0, 1000.0);
    check L225() else D59();
  L227():
    a25 = force? a24;
    checkMissing(a25);
    r86 = `==`(a25, "--force");
    c30 = `as.logical`(r86);
    if c30 then L228() else L31();
  L447():
    p77 = prom<V +>{
      out_ext8 = ld out_ext;
      out_ext9 = force? out_ext8;
      checkMissing(out_ext9);
      return out_ext9;
    };
    r283 = dyn cat7("Creating", p77, "output from LaTeX ...\n");
    check L448() else D176();
  L450():
    p78 = prom<V +>{
      build_dir8 = ld build_dir;
      build_dir9 = force? build_dir8;
      checkMissing(build_dir9);
      return build_dir9;
    };
    r286 = dyn setwd(p78);
    check L451() else D178();
  D53():
    deopt 255 [args19];
  D59():
    deopt 280 [r85];
  D176():
    deopt 719 [r283];
  D178():
    deopt 725 [r286];
  L31():
    a26 = ld a;
    check L230() else D61();
  L212():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L27(dx17);
  L213():
    args20 = force? args19;
    checkMissing(args20);
    c28 = `is.object`(args20);
    if c28 then L214() else L215(args20);
  L225():
    st output = r85;
    goto L16();
  L228():
    st force = TRUE;
    goto L16();
  L448():
    goto L97();
  L451():
    try1 = ldf try;
    check L452() else D179();
  D61():
    deopt 289 [a26];
  D179():
    deopt 727 [];
  L28(dx20):
    st args = dx20;
    goto L29(dx20);
  L214():
    dr16 = tryDispatchBuiltin.1("[", args20);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L216() else L215(dr16);
  L215(args22):
    __7 = ldf `[` in base;
    r79 = dyn __7(args22, -1);
    goto L28(r79);
  L230():
    a27 = force? a26;
    checkMissing(a27);
    r87 = `==`(a27, "--only-meta");
    c31 = `as.logical`(r87);
    if c31 then L231() else L32();
  L452():
    p81 = prom<V +>{
      texi2pdf = ldf texi2pdf;
      p79 = prom<V +>{
        quiet10 = ld quiet;
        quiet11 = force? quiet10;
        checkMissing(quiet11);
        return quiet11;
      };
      p80 = prom<V +>{
        index4 = ld index;
        index5 = force? index4;
        checkMissing(index5);
        return index5;
      };
      r289 = dyn texi2pdf[, quiet, index]("Rd2.tex", p79, p80);
      return r289;
    };
    r291 = dyn try1(p81);
    check L453() else D180();
  D180():
    deopt 729 [r291];
  L32():
    _in_3 = ldf `%in%`;
    check L233() else D62();
  L216():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L28(dx19);
  L231():
    st only_meta = TRUE;
    goto L16();
  L453():
    st res = r291;
    sym18 = ldf inherits;
    base18 = ldf inherits in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L454() else L455();
  D62():
    deopt 297 [];
  L98(r293):
    c109 = `as.logical`(r293);
    if c109 then L458() else L99();
  L233():
    p19 = prom<V +>{
      substr4 = ldf substr;
      p18 = prom<V +>{
        a28 = ld a;
        a29 = force? a28;
        checkMissing(a29);
        return a29;
      };
      r89 = dyn substr4(p18, 1.0, 5.0);
      return r89;
    };
    p20 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r92):
      return r92;
    L1():
      c32 = ldf c in base;
      r93 = dyn c32("--os=", "--OS=");
      goto L0(r93);
    L2():
      r91 = dyn base7("--os=", "--OS=");
      goto L0(r91);
    };
    r95 = dyn _in_3(p19, p20);
    check L234() else D63();
  L454():
    res2 = ld res;
    check L456() else D181();
  L455():
    r292 = dyn base18(<sym res>, "try-error");
    goto L98(r292);
  D63():
    deopt 300 [r95];
  D181():
    deopt 733 [res2];
  L99():
    goto L103();
  L103():
    setwd1 = ldf setwd;
    check L474() else D193();
  L234():
    c33 = `as.logical`(r95);
    if c33 then L235() else L33();
  L456():
    res3 = force? res2;
    checkMissing(res3);
    inherits1 = ldf inherits in base;
    r294 = dyn inherits1(res3, "try-error", FALSE);
    check L457() else D182();
  L458():
    try2 = ldf try;
    check L459() else D183();
  D182():
    deopt 738 [r294];
  D183():
    deopt 740 [];
  D193():
    deopt 772 [];
  L33():
    substr6 = ldf substr;
    check L239() else D66();
  L235():
    substr5 = ldf substr;
    check L236() else D64();
  L457():
    goto L98(r294);
  L459():
    p84 = prom<V +>{
      texi2pdf1 = ldf texi2pdf;
      p82 = prom<V +>{
        quiet12 = ld quiet;
        quiet13 = force? quiet12;
        checkMissing(quiet13);
        return quiet13;
      };
      p83 = prom<V +>{
        index6 = ld index;
        index7 = force? index6;
        checkMissing(index7);
        return index7;
      };
      r297 = dyn texi2pdf1[, quiet, index]("Rd2.tex", p82, p83);
      return r297;
    };
    r299 = dyn try2(p84);
    check L460() else D184();
  L474():
    p85 = prom<V +>{
      startdir2 = ld startdir;
      startdir3 = force? startdir2;
      checkMissing(startdir3);
      return startdir3;
    };
    r309 = dyn setwd1(p85);
    check L475() else D194();
  D64():
    deopt 302 [];
  D66():
    deopt 309 [];
  D184():
    deopt 742 [r299];
  D194():
    deopt 774 [r309];
  L236():
    p21 = prom<V +>{
      a30 = ld a;
      a31 = force? a30;
      checkMissing(a31);
      return a31;
    };
    r97 = dyn substr5(p21, 6.0, 1000.0);
    check L237() else D65();
  L239():
    p22 = prom<V +>{
      a32 = ld a;
      a33 = force? a32;
      checkMissing(a33);
      return a33;
    };
    r99 = dyn substr6(p22, 1.0, 11.0);
    check L240() else D67();
  L460():
    st res = r299;
    sym19 = ldf inherits;
    base19 = ldf inherits in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L461() else L462();
  L475():
    quiet14 = ld quiet;
    check L476() else D195();
  D65():
    deopt 306 [r97];
  D67():
    deopt 313 [r99];
  D195():
    deopt 775 [quiet14];
  L100(r301):
    c110 = `as.logical`(r301);
    if c110 then L465() else L101();
  L237():
    st OSdir = r97;
    goto L16();
  L240():
    r100 = `==`(r99, "--encoding=");
    c34 = `as.logical`(r100);
    if c34 then L241() else L34();
  L461():
    res4 = ld res;
    check L463() else D185();
  L462():
    r300 = dyn base19(<sym res>, "try-error");
    goto L100(r300);
  L476():
    quiet15 = force? quiet14;
    checkMissing(quiet15);
    r310 = `!`(quiet15);
    c111 = `as.logical`(r310);
    if c111 then L477() else L104();
  D185():
    deopt 746 [res4];
  L34():
    substr8 = ldf substr;
    check L245() else D70();
  L101():
    goto L102(NULL);
  L102(r306):
    goto L103();
  L104():
    goto L105();
  L105():
    file_copy = ldf `file.copy`;
    check L481() else D198();
  L241():
    substr7 = ldf substr;
    check L242() else D68();
  L463():
    res5 = force? res4;
    checkMissing(res5);
    inherits2 = ldf inherits in base;
    r302 = dyn inherits2(res5, "try-error", FALSE);
    check L464() else D186();
  L465():
    message2 = ldf message;
    check L466() else D187();
  L477():
    cat8 = ldf cat;
    check L478() else D196();
  D68():
    deopt 317 [];
  D70():
    deopt 324 [];
  D186():
    deopt 751 [r302];
  D187():
    deopt 753 [];
  D196():
    deopt 779 [];
  D198():
    deopt 787 [];
  L242():
    p23 = prom<V +>{
      a34 = ld a;
      a35 = force? a34;
      checkMissing(a35);
      return a35;
    };
    r102 = dyn substr7(p23, 12.0, 1000.0);
    check L243() else D69();
  L245():
    p24 = prom<V +>{
      a36 = ld a;
      a37 = force? a36;
      checkMissing(a37);
      return a37;
    };
    r104 = dyn substr8(p24, 1.0, 17.0);
    check L246() else D71();
  L464():
    goto L100(r302);
  L466():
    r303 = dyn message2("Error in running tools::texi2pdf()");
    check L467() else D188();
  L478():
    p87 = prom<V +>{
      sQuote2 = ldf sQuote;
      p86 = prom<V +>{
        output12 = ld output;
        output13 = force? output12;
        checkMissing(output13);
        return output13;
      };
      r312 = dyn sQuote2(p86);
      return r312;
    };
    r314 = dyn cat8("Saving output to", p87, "...\n");
    check L479() else D197();
  L481():
    p91 = prom<V +>{
      file_path4 = ldf `file.path`;
      p88 = prom<V +>{
        build_dir10 = ld build_dir;
        build_dir11 = force? build_dir10;
        checkMissing(build_dir11);
        return build_dir11;
      };
      p90 = prom<V +>{
        paste7 = ldf paste0;
        p89 = prom<V +>{
          out_ext10 = ld out_ext;
          out_ext11 = force? out_ext10;
          checkMissing(out_ext11);
          return out_ext11;
        };
        r318 = dyn paste7("Rd2.", p89);
        return r318;
      };
      r320 = dyn file_path4(p88, p90);
      return r320;
    };
    p92 = prom<V +>{
      output14 = ld output;
      output15 = force? output14;
      checkMissing(output15);
      return output15;
    };
    p93 = prom<V +>{
      force2 = ld force;
      force3 = force? force2;
      checkMissing(force3);
      return force3;
    };
    r324 = dyn file_copy[, , overwrite](p91, p92, p93);
    check L482() else D199();
  D69():
    deopt 321 [r102];
  D71():
    deopt 328 [r104];
  D188():
    deopt 755 [r303];
  D197():
    deopt 783 [r314];
  D199():
    deopt 792 [r324];
  L243():
    st enc = r102;
    goto L16();
  L246():
    r105 = `==`(r104, "--outputEncoding=");
    c35 = `as.logical`(r105);
    if c35 then L247() else L35();
  L467():
    do_cleanup = ldf do_cleanup;
    check L468() else D189();
  L479():
    goto L105();
  L482():
    quiet16 = ld quiet;
    check L483() else D200();
  D189():
    deopt 757 [];
  D200():
    deopt 793 [quiet16];
  L35():
    substr10 = ldf substr;
    check L251() else D74();
  L247():
    substr9 = ldf substr;
    check L248() else D72();
  L468():
    r304 = dyn do_cleanup();
    check L469() else D190();
  L483():
    quiet17 = force? quiet16;
    checkMissing(quiet17);
    r325 = `!`(quiet17);
    c112 = `as.logical`(r325);
    if c112 then L484() else L106();
  D72():
    deopt 332 [];
  D74():
    deopt 339 [];
  D190():
    deopt 758 [r304];
  L106():
    goto L107();
  L107():
    do_cleanup1 = ldf do_cleanup;
    check L488() else D203();
  L248():
    p25 = prom<V +>{
      a38 = ld a;
      a39 = force? a38;
      checkMissing(a39);
      return a39;
    };
    r107 = dyn substr9(p25, 18.0, 1000.0);
    check L249() else D73();
  L251():
    p26 = prom<V +>{
      a40 = ld a;
      a41 = force? a40;
      checkMissing(a41);
      return a41;
    };
    r109 = dyn substr10(p26, 1.0, 12.0);
    check L252() else D75();
  L469():
    q6 = ldf q;
    check L470() else D191();
  L484():
    cat9 = ldf cat;
    check L485() else D201();
  D73():
    deopt 336 [r107];
  D75():
    deopt 343 [r109];
  D191():
    deopt 760 [];
  D201():
    deopt 797 [];
  D203():
    deopt 803 [];
  L249():
    st outenc = r107;
    goto L16();
  L252():
    r110 = `==`(r109, "--build-dir=");
    c36 = `as.logical`(r110);
    if c36 then L253() else L36();
  L470():
    r305 = dyn q6[, status, runLast]("no", 1, FALSE);
    check L471() else D192();
  L485():
    r326 = dyn cat9("Done\n");
    check L486() else D202();
  L488():
    p94 = prom<V +>{
      quiet18 = ld quiet;
      quiet19 = force? quiet18;
      checkMissing(quiet19);
      return quiet19;
    };
    r329 = dyn do_cleanup1(p94);
    check L489() else D204();
  D192():
    deopt 766 [r305];
  D202():
    deopt 799 [r326];
  D204():
    deopt 805 [r329];
  L36():
    a44 = ld a;
    check L257() else D78();
  L253():
    substr11 = ldf substr;
    check L254() else D76();
  L471():
    goto L102(r305);
  L486():
    goto L107();
  L489():
    preview = ld preview;
    check L490() else D205();
  D76():
    deopt 347 [];
  D78():
    deopt 353 [a44];
  D205():
    deopt 806 [preview];
  L254():
    p27 = prom<V +>{
      a42 = ld a;
      a43 = force? a42;
      checkMissing(a43);
      return a43;
    };
    r112 = dyn substr11(p27, 13.0, 1000.0);
    check L255() else D77();
  L257():
    a45 = force? a44;
    checkMissing(a45);
    r113 = `==`(a45, "--no-index");
    c37 = `as.logical`(r113);
    if c37 then L258() else L37();
  L490():
    preview1 = force? preview;
    checkMissing(preview1);
    r330 = `!=`(preview1, "false");
    c113 = `as.logical`(r330);
    if c113 then L491() else L108();
  D77():
    deopt 351 [r112];
  L37():
    a46 = ld a;
    check L260() else D79();
  L108():
    goto L109();
  L109():
    quit1 = ld quit;
    check L495() else D208();
  L255():
    st build_dir = r112;
    goto L16();
  L258():
    st index = FALSE;
    goto L16();
  L491():
    system = ldf system;
    check L492() else D206();
  D79():
    deopt 360 [a46];
  D206():
    deopt 811 [];
  D208():
    deopt 816 [quit1];
  L260():
    a47 = force? a46;
    checkMissing(a47);
    r114 = `==`(a47, "--no-description");
    c38 = `as.logical`(r114);
    if c38 then L261() else L38();
  L492():
    p97 = prom<V +>{
      paste8 = ldf paste;
      p95 = prom<V +>{
        preview2 = ld preview;
        preview3 = force? preview2;
        checkMissing(preview3);
        return preview3;
      };
      p96 = prom<V +>{
        output16 = ld output;
        output17 = force? output16;
        checkMissing(output17);
        return output17;
      };
      r333 = dyn paste8(p95, p96);
      return r333;
    };
    r335 = dyn system(p97);
    check L493() else D207();
  L495():
    quit2 = force? quit1;
    checkMissing(quit2);
    c114 = `as.logical`(quit2);
    if c114 then L496() else L110();
  D207():
    deopt 813 [r335];
  L38():
    a48 = ld a;
    check L263() else D80();
  L110():
    invisible.0();
    popenv;
    return NULL;
  L261():
    st description = FALSE;
    goto L16();
  L493():
    goto L109();
  L496():
    q7 = ldf q;
    check L497() else D209();
  D80():
    deopt 367 [a48];
  D209():
    deopt 819 [];
  L263():
    a49 = force? a48;
    checkMissing(a49);
    r115 = `==`(a49, "--internals");
    c39 = `as.logical`(r115);
    if c39 then L264() else L39();
  L497():
    r337 = dyn q7[, runLast]("no", FALSE);
    check L498() else D210();
  D210():
    deopt 823 [r337];
  L39():
    substr12 = ldf substr;
    check L266() else D81();
  L264():
    st internals = TRUE;
    goto L16();
  L498():
    popenv;
    return r337;
  D81():
    deopt 375 [];
  L266():
    p28 = prom<V +>{
      a50 = ld a;
      a51 = force? a50;
      checkMissing(a51);
      return a51;
    };
    r117 = dyn substr12(p28, 1.0, 11.0);
    check L267() else D82();
  D82():
    deopt 379 [r117];
  L267():
    r118 = `==`(r117, "--RdMacros=");
    c40 = `as.logical`(r118);
    if c40 then L268() else L40();
  L40():
    startsWith = ldf startsWith;
    check L272() else D85();
  L268():
    substr13 = ldf substr;
    check L269() else D83();
  D83():
    deopt 383 [];
  D85():
    deopt 390 [];
  L269():
    p29 = prom<V +>{
      a52 = ld a;
      a53 = force? a52;
      checkMissing(a53);
      return a53;
    };
    r120 = dyn substr13(p29, 12.0, 1000.0);
    check L270() else D84();
  L272():
    p30 = prom<V +>{
      a54 = ld a;
      a55 = force? a54;
      checkMissing(a55);
      return a55;
    };
    r122 = dyn startsWith(p30, "-");
    check L273() else D86();
  D84():
    deopt 387 [r120];
  D86():
    deopt 393 [r122];
  L270():
    st pkglist = r120;
    goto L16();
  L273():
    c41 = `as.logical`(r122);
    if c41 then L274() else L41();
  L41():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L278() else L279();
  L274():
    message = ldf message;
    check L275() else D87();
  D87():
    deopt 395 [];
  L42(r128):
    st files = r128;
    goto L16();
  L275():
    p32 = prom<V +>{
      sQuote = ldf sQuote;
      p31 = prom<V +>{
        a56 = ld a;
        a57 = force? a56;
        checkMissing(a57);
        return a57;
      };
      r124 = dyn sQuote(p31);
      return r124;
    };
    r126 = dyn message("Warning: unknown option ", p32);
    check L276() else D88();
  L278():
    files = ld files;
    check L280() else D89();
  L279():
    r127 = dyn base8(<sym files>, <sym a>);
    goto L42(r127);
  D88():
    deopt 398 [r126];
  D89():
    deopt 401 [files];
  L276():
    goto L16();
  L280():
    files1 = force? files;
    checkMissing(files1);
    a58 = ld a;
    check L281() else D90();
  D90():
    deopt 403 [a58];
  L281():
    a59 = force? a58;
    checkMissing(a59);
    c42 = ldf c in base;
    r129 = dyn c42(files1, a59);
    check L282() else D91();
  D91():
    deopt 406 [r129];
  L282():
    goto L42(r129);
  }
}
fun inner2708490134(quiet) {
  (reg quiet:*) -+> V { var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, reg clean:*, reg clean1:V, reg c:L, reg setwd:cls, reg startdir:*, reg startdir1:V, reg p:p(V +), reg r1:V, reg unlink:cls, reg build_dir:*, reg build_dir1:V, reg p1:p(V +), reg r3:V, reg quiet1:*, reg quiet2:V, reg r4:V, reg c1:L, reg cat:cls, reg build_dir2:*, reg build_dir3:V, reg p2:p(V +), reg r6:V |
    mkenv;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L0(FALSE) else L0(quiet);
  L0(quiet_orDefault):
    st quiet = quiet_orDefault;
    clean = ld clean;
    check L3() else D0();
  D0():
    deopt 0 [clean];
  L3():
    clean1 = force? clean;
    checkMissing(clean1);
    c = `as.logical`(clean1);
    if c then L4() else L1();
  L1():
    quiet1 = ld quiet;
    check L10() else D5();
  L4():
    setwd = ldf setwd;
    check L5() else D1();
  D1():
    deopt 3 [];
  D5():
    deopt 12 [quiet1];
  L5():
    p = prom<V +>{
      startdir = ld startdir;
      startdir1 = force? startdir;
      checkMissing(startdir1);
      return startdir1;
    };
    r1 = dyn setwd(p);
    check L6() else D2();
  L10():
    quiet2 = force? quiet1;
    checkMissing(quiet2);
    r4 = `!`(quiet2);
    c1 = `as.logical`(r4);
    if c1 then L11() else L2();
  D2():
    deopt 5 [r1];
  L2():
    invisible.0();
    popenv;
    return NULL;
  L6():
    unlink = ldf unlink;
    check L7() else D3();
  L11():
    cat = ldf cat;
    check L12() else D6();
  D3():
    deopt 7 [];
  D6():
    deopt 16 [];
  L7():
    p1 = prom<V +>{
      build_dir = ld build_dir;
      build_dir1 = force? build_dir;
      checkMissing(build_dir1);
      return build_dir1;
    };
    r3 = dyn unlink[, recursive](p1, TRUE);
    check L8() else D4();
  L12():
    p2 = prom<V +>{
      build_dir2 = ld build_dir;
      build_dir3 = force? build_dir2;
      checkMissing(build_dir3);
      return build_dir3;
    };
    r6 = dyn cat[, , , sep]("You may want to clean up by 'rm -Rf ", p2, "'\n", "");
    check L13() else D7();
  D4():
    deopt 11 [r3];
  D7():
    deopt 22 [r6];
  L8():
    popenv;
    return r3;
  L13():
    popenv;
    return r6;
  }
}
fun inner2708337952() {
  () -+> V { reg cat:cls, reg r:V |
    mkenv;
    cat = ldf cat;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn cat[, , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , , sep]("Usage: R CMD Rd2pdf [options] files", "", "Generate PDF output from the Rd sources specified by files, by", "either giving the paths to the files, or the path to a directory with", "the sources of a package, or an installed package.", "", "Unless specified via option '--output', the basename of the output file", "equals the basename of argument 'files' if this specifies a package", "or a single file, and 'Rd2' otherwise.", "", "The Rd sources are assumed to be ASCII unless they contain \\encoding", "declarations (which take priority) or --encoding is supplied or if using", "package sources, if the package DESCRIPTION file has an Encoding field.", "The output encoding defaults to 'UTF-8'.", "", "Files are listed in the order given: for a package they are in alphabetic", "order of the \\name sections.", "", "Options:", "  -h, --help\t\tprint short help message and exit", "  -v, --version\t\tprint version info and exit", "  -q, --quiet\t\tno output unless errors", "      --no-clean\tdo not remove created temporary files", "      --no-preview\tdo not preview generated PDF file", "      --encoding=enc    use 'enc' as the default input encoding", "      --outputEncoding=outenc", "                        use 'outenc' as the default output encoding", "      --os=NAME\t\tuse OS subdir 'NAME' (unix or windows)", "      --OS=NAME\t\tthe same as '--os'", "  -o, --output=FILE\twrite output to FILE", "      --force\t\toverwrite output file if it exists", "      --title=NAME\tuse NAME as the title of the document", "      --no-index\tdo not index output", "      --no-description\tdo not typeset the description of a package", "      --internals\ttypeset 'internal' documentation (usually skipped)", "      --build-dir=DIR\tuse DIR as the working directory", "      --RdMacros=pkglist", "             \t\tpackages from which to get Rd macros", "", "The output papersize is set by the environment variable R_PAPERSIZE.", "The PDF previewer is set by the environment variable R_PDFVIEWER.", "", "Report bugs at <https://bugs.R-project.org>.", "\n");
    check L1() else D1();
  D1():
    deopt 47 [r];
  L1():
    popenv;
    return r;
  }
}