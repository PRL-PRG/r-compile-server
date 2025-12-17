fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2583114445;
    st `add1.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2583114445(object, scope, scale, test, x, k, `...`) {
  (reg object:*, reg scope:*, reg scale:*, reg test:*, reg x:*, reg k:*, reg ddd:dots) -+> V { var object:*, var scope:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var test:*, reg test_isMissing:L, reg test_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var x:*, reg x_isMissing:L, reg x_orDefault:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, var `...`:dots?, reg r4:cls, reg match_arg:cls, reg test1:*, reg test2:V, reg p1:p(V +), reg r6:V, reg test3:*, reg test4:V, reg r7:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg scope1:*, reg scope2:V, reg c2:L, reg r11:V, reg c3:L, reg add_scope:cls, reg object1:*, reg object2:V, reg p2:p(V +), reg update_formula:cls, reg object3:*, reg object4:V, reg p3:p(V +), reg scope3:*, reg scope4:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg scope5:*, reg scope6:V, reg length:cls, reg r21:V, reg r22:V, reg c4:L, reg stop:cls, reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg object5:*, reg object6:V, reg c5:L, reg object8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r27:V, reg attr:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg object9:*, reg object10:V, reg c6:L, reg object12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r31:V, reg attr1:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg scope7:*, reg scope8:V, reg length1:cls, reg r35:V, reg numeric:cls, reg ns:*, reg ns1:V, reg r36:V, reg p6:p(V +), reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg scope9:*, reg scope10:V, reg c7:cls, reg r41:V, reg l:*, reg names__:cls, reg r42:V, reg dfs:*, reg dfs1:V, reg eval:cls, reg str2lang:cls, reg paste:cls, reg paste1:cls, reg scope11:*, reg scope12:V, reg p7:p(V +), reg r44:V, reg p8:p(V +), reg r46:V, reg p9:p(V +), reg r48:V, reg p10:p(V +), reg r50:V, reg update_formula1:cls, reg object13:*, reg object14:V, reg p11:p(V +), reg add_rhs:*, reg add_rhs1:V, reg p12:p(V +), reg r53:V, reg terms:cls, reg new_form:*, reg new_form1:V, reg p13:p(V +), reg r55:V, reg object15:*, reg object16:V, reg c8:L, reg object18:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r56:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r57:V, reg r58:V, reg x1:*, reg x2:V, reg c9:V, reg c10:L, reg object19:*, reg object20:V, reg c11:L, reg object22:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r59:V, reg Terms:*, reg Terms1:V, reg l1:*, reg c12:L, reg Terms3:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r60:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r61:V, reg r62:V, reg fc:*, reg fc1:V, reg Terms6:*, reg Terms7:V, reg list:cls, reg r63:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r64:V, reg r65:V, reg object23:*, reg object24:V, reg oldClass:cls, reg r66:V, reg l4:*, reg class__:cls, reg r67:V, reg model_frame:cls, reg fob:*, reg fob1:V, reg p14:p(V +), reg object25:*, reg object26:V, reg c13:L, reg object28:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r69:V, reg p15:p(V +), reg r71:V, reg model_offset:cls, reg m:*, reg m1:V, reg p16:p(V +), reg r73:V, reg model_weights:cls, reg m2:*, reg m3:V, reg p17:p(V +), reg r75:V, reg model_matrix:cls, reg Terms8:*, reg Terms9:V, reg p18:p(V +), reg m4:*, reg m5:V, reg p19:p(V +), reg object29:*, reg object30:V, reg c14:L, reg object32:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r78:V, reg p20:p(V +), reg r80:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r81:V, reg r82:V, reg y:*, reg y1:V, reg length2:cls, reg r83:V, reg model_response:cls, reg m6:*, reg m7:V, reg p21:p(V +), reg r85:V, reg is_factor:cls, reg y2:*, reg y3:V, reg p22:p(V +), reg r87:V, reg r88:V, reg c15:L, reg l5:*, reg storage_mode__:cls, reg r89:V, reg NCOL:cls, reg y4:*, reg y5:V, reg p23:p(V +), reg r92:V, reg r93:V, reg c16:L, reg y6:*, reg y7:V, reg c17:L, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __:cls, reg r94:V, reg y10:*, reg y11:V, reg c18:L, reg dx17:V, reg dr16:V, reg dc8:L, reg dx19:V, reg dx20:V, reg dx21:V, reg __1:cls, reg r95:V, reg r96:V, reg ifelse:cls, reg n:*, reg n1:V, reg r97:V, reg p24:p(V +), reg y14:*, reg y15:V, reg c19:L, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg __2:cls, reg r99:V, reg n2:*, reg n3:V, reg r100:V, reg p25:p(V +), reg r102:V, reg ____:cls, reg wt:*, reg wt1:V, reg p26:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r104:V, reg r105:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r106:V, reg r107:V, reg y18:*, reg y19:V, reg length3:cls, reg r108:V, reg rep_int:cls, reg r109:V, reg p27:p(V +), reg r111:V, reg n4:*, reg n5:V, reg r112:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r114:V, reg r115:V, reg y20:*, reg y21:V, reg length4:cls, reg r116:V, reg newn:*, reg newn1:V, reg oldn:*, reg oldn1:V, reg r117:V, reg c20:L, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg newn2:*, reg newn3:V, reg p28:p(V +), reg r119:V, reg p29:p(V +), reg newn4:*, reg newn5:V, reg p30:p(V +), reg oldn2:*, reg oldn3:V, reg p31:p(V +), reg r123:V, reg p32:p(V +), reg r125:V, reg r126:V, reg object33:*, reg object34:V, reg c21:L, reg object36:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg r128:V, reg object37:*, reg object38:V, reg c22:L, reg object40:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg r129:V, reg nrow:cls, reg x3:*, reg x4:V, reg p33:p(V +), reg r131:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r132:V, reg r133:V, reg wt2:*, reg wt3:V, reg c23:V, reg c24:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r134:V, reg r135:V, reg n6:*, reg n7:V, reg rep_int1:cls, reg r136:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r138:V, reg r139:V, reg Terms10:*, reg Terms11:V, reg attr2:cls, reg r140:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r141:V, reg r142:V, reg x5:*, reg x6:V, reg attr3:cls, reg r143:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r144:V, reg r145:V, reg asgn:*, reg asgn1:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r146:V, reg r147:V, reg oTerms:*, reg oTerms1:V, reg Terms12:*, reg Terms13:V, reg match:cls, reg r148:V, reg match1:cls, reg r149:V, reg r150:V, reg int:*, reg int1:V, reg c25:L, reg l6:*, reg c26:L, reg r152:L, reg l8:*, reg dr24:V, reg dc12:L, reg dx28:V, reg r154:L, reg dx29:V, reg ___:cls, reg r155:V, reg x7:*, reg x8:V, reg c27:L, reg x10:V, reg dr26:V, reg dc13:L, reg dx30:V, reg dx31:V, reg ousex:*, reg ousex1:V, reg __3:cls, reg r157:V, reg glm_fit:cls, reg X:*, reg X1:V, reg p34:p(V +), reg y22:*, reg y23:V, reg p35:p(V +), reg wt4:*, reg wt5:V, reg p36:p(V +), reg offset:*, reg offset1:V, reg p37:p(V +), reg object41:*, reg object42:V, reg c28:L, reg object44:V, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg r162:V, reg p38:p(V +), reg object45:*, reg object46:V, reg c29:L, reg object48:V, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg r164:V, reg p39:p(V +), reg r166:V, reg z:*, reg z1:V, reg c30:L, reg z3:V, reg dr32:V, reg dc16:L, reg dx36:V, reg dx37:V, reg r167:V, reg l9:*, reg c31:L, reg dx39:V, reg l11:*, reg dr34:V, reg dc17:L, reg dx41:V, reg dx43:V, reg ___1:cls, reg r168:V, reg z4:*, reg z5:V, reg c32:L, reg z7:V, reg dr36:V, reg dc18:L, reg dx44:V, reg dx45:V, reg r169:V, reg l12:*, reg c33:L, reg dx47:V, reg l14:*, reg dr38:V, reg dc19:L, reg dx49:V, reg dx51:V, reg ___2:cls, reg r170:V, reg z8:*, reg z9:V, reg c34:L, reg z11:V, reg dr40:V, reg dc20:L, reg dx52:V, reg dx53:V, reg r171:V, reg z12:*, reg z13:V, reg c35:L, reg z15:V, reg dr42:V, reg dc21:L, reg dx54:V, reg dx55:V, reg r172:V, reg sapply:cls, reg strsplit:cls, reg Terms14:*, reg Terms15:V, reg p40:p(V +), reg r174:V, reg p41:p(V +), reg r176:cls, reg p42:p(V +), reg r178:V, reg scope13:*, reg scope14:V, reg s:V, reg l15:I, reg i:I, reg i1:I, reg i2:I, reg c36:L, reg x11:V, reg paste2:cls, reg sort:cls, reg strsplit1:cls, reg tt:*, reg tt1:V, reg p43:p(V +), reg r180:V, reg c37:L, reg r182:V, reg dr44:V, reg dc22:L, reg dx56:V, reg dx57:V, reg __4:cls, reg r183:V, reg p44:p(V +), reg r185:V, reg p45:p(V +), reg r187:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r188:V, reg i7:I, reg r189:V, reg asgn2:*, reg asgn3:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r190:V, reg i10:I, reg r191:V, reg stt:*, reg stt1:V, reg sTerms:*, reg sTerms1:V, reg match2:cls, reg r192:V, reg match3:cls, reg r193:V, reg r194:V, reg x12:*, reg x13:V, reg c38:L, reg i12:I, reg x15:V, reg dr46:V, reg dc23:L, reg dx58:V, reg i14:I, reg dx59:V, reg usex:*, reg usex1:V, reg ousex2:*, reg ousex3:V, reg r195:V, reg __5:cls, reg r196:V, reg glm_fit1:cls, reg X2:*, reg X3:V, reg p46:p(V +), reg y24:*, reg y25:V, reg p47:p(V +), reg wt6:*, reg wt7:V, reg p48:p(V +), reg offset2:*, reg offset3:V, reg p49:p(V +), reg object49:*, reg object50:V, reg c39:L, reg object52:V, reg dr48:V, reg dc24:L, reg dx60:V, reg dx61:V, reg r201:V, reg p50:p(V +), reg object53:*, reg object54:V, reg c40:L, reg object56:V, reg dr50:V, reg dc25:L, reg dx62:V, reg dx63:V, reg r203:V, reg p51:p(V +), reg r205:V, reg z16:*, reg z17:V, reg c41:L, reg i16:I, reg z19:V, reg dr52:V, reg dc26:L, reg dx64:V, reg i18:I, reg dx65:V, reg r206:V, reg l16:*, reg c42:L, reg i20:I, reg dx67:V, reg l18:*, reg dr54:V, reg dc27:L, reg dx69:V, reg i22:I, reg dx71:V, reg tt2:*, reg tt3:V, reg ___3:cls, reg r207:V, reg z20:*, reg z21:V, reg c43:L, reg i24:I, reg z23:V, reg dr56:V, reg dc28:L, reg dx72:V, reg i26:I, reg dx73:V, reg r208:V, reg l19:*, reg c44:L, reg i28:I, reg dx75:V, reg l21:*, reg dr58:V, reg dc29:L, reg dx77:V, reg i30:I, reg dx79:V, reg tt4:*, reg tt5:V, reg ___4:cls, reg r209:V, reg test5:*, reg test6:V, reg r210:V, reg c45:L, reg glm_fit2:cls, reg X4:*, reg X5:V, reg p52:p(V +), reg r212:*, reg r213:V, reg p53:p(V +), reg w:*, reg w1:V, reg p54:p(V +), reg offset4:*, reg offset5:V, reg p55:p(V +), reg r217:V, reg zz:*, reg zz1:V, reg c46:L, reg i34:I, reg zz3:V, reg dr60:V, reg dc30:L, reg dx80:V, reg i36:I, reg dx81:V, reg r218:V, reg zz4:*, reg zz5:V, reg c47:L, reg i38:I, reg dx83:V, reg zz7:V, reg dr62:V, reg dc31:L, reg dx85:V, reg i40:I, reg dx86:V, reg dx87:V, reg r219:V, reg r220:V, reg l22:*, reg c48:L, reg i42:I, reg r222:V, reg l24:*, reg dr64:V, reg dc32:L, reg dx88:V, reg i44:I, reg r224:V, reg dx89:V, reg tt6:*, reg tt7:V, reg ___5:cls, reg r225:V, reg i45:I, reg scale1:*, reg scale2:V, reg r227:V, reg c49:L, reg summary:cls, reg object57:*, reg object58:V, reg p56:p(V +), reg r229:V, reg c50:L, reg r231:V, reg dr66:V, reg dc33:L, reg dx90:V, reg dx91:V, reg r232:V, reg dx92:V, reg scale3:*, reg scale4:V, reg object59:*, reg object60:V, reg c51:L, reg object62:V, reg dr68:V, reg dc34:L, reg dx93:V, reg dx94:V, reg r233:V, reg c52:L, reg dx96:V, reg dr70:V, reg dc35:L, reg dx97:V, reg dx98:V, reg r234:V, reg fam:*, reg fam1:V, reg r235:V, reg c53:L, reg scale5:*, reg scale6:V, reg r236:V, reg c54:L, reg dev:*, reg dev1:V, reg scale7:*, reg scale8:V, reg r237:V, reg n8:*, reg n9:V, reg r238:V, reg r239:V, reg n10:*, reg n11:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r240:V, reg n14:V, reg r241:V, reg dev2:*, reg dev3:V, reg n15:*, reg n16:V, reg r242:V, reg r243:V, reg r244:V, reg r245:V, reg dev4:*, reg dev5:V, reg dispersion:*, reg dispersion1:V, reg r246:V, reg loglik:*, reg loglik1:V, reg k1:*, reg k2:V, reg dfs2:*, reg dfs3:V, reg r247:V, reg r248:V, reg aic:*, reg aic1:V, reg extractAIC:cls, reg object63:*, reg object64:V, reg p57:p(V +), reg k3:*, reg k4:V, reg p58:p(V +), reg r251:V, reg c55:L, reg aic3:V, reg r253:V, reg dr72:V, reg dc36:L, reg dx99:V, reg aic5:V, reg dx100:V, reg __6:cls, reg r254:V, reg aic6:*, reg aic7:V, reg c56:L, reg aic10:V, reg dx102:V, reg aic11:V, reg dr74:V, reg dc37:L, reg dx104:V, reg aic13:V, reg dx105:V, reg dx106:V, reg __7:cls, reg r255:V, reg r256:V, reg r257:V, reg dfs4:*, reg dfs5:V, reg dfs6:*, reg dfs7:V, reg c57:L, reg dfs10:V, reg dfs11:V, reg dr76:V, reg dc38:L, reg dx107:V, reg dfs13:V, reg dx108:V, reg __8:cls, reg r258:V, reg r259:V, reg l25:*, reg c58:L, reg r261:L, reg l27:*, reg dr78:V, reg dc39:L, reg dx109:V, reg dx110:V, reg ___6:cls, reg r264:V, reg data_frame:cls, reg dfs14:*, reg dfs15:V, reg p59:p(V +), reg dev6:*, reg dev7:V, reg p60:p(V +), reg aic14:*, reg aic15:V, reg p61:p(V +), reg sym23:cls, reg base23:cls, reg guard23:L, reg r268:V, reg r269:V, reg dfs16:*, reg dfs17:V, reg names:cls, reg r270:V, reg p62:p(V +), reg r272:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r273:V, reg r274:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r275:V, reg r276:V, reg aic16:*, reg aic17:V, reg is_na:cls, reg r277:V, reg all:cls, reg r278:V, reg c59:L, reg aod:*, reg aod1:V, reg c60:L, reg dr80:V, reg dc40:L, reg dx111:V, reg dx112:V, reg __9:cls, reg r279:V, reg match_arg1:cls, reg test7:*, reg test8:V, reg p63:p(V +), reg r281:V, reg test9:*, reg test10:V, reg r282:V, reg c61:L, reg pmax:cls, reg loglik2:*, reg loglik3:V, reg c62:L, reg loglik5:V, reg dr82:V, reg dc41:L, reg dx114:V, reg dx115:V, reg __10:cls, reg r283:V, reg loglik6:*, reg loglik7:V, reg r284:V, reg p64:p(V +), reg r286:V, reg l28:*, reg c63:L, reg r288:L, reg l30:*, reg dr84:V, reg dc42:L, reg dx116:V, reg dx117:V, reg ___7:cls, reg r291:V, reg dispersion2:*, reg dispersion3:V, reg r292:V, reg c64:L, reg r293:S, reg dev8:*, reg dev9:V, reg l31:*, reg c65:L, reg dev11:V, reg l33:*, reg dr86:V, reg dc43:L, reg dx118:V, reg dx119:V, reg LRT:*, reg LRT1:V, reg ___8:cls, reg r294:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r295:V, reg r296:V, reg dev14:*, reg dev15:V, reg is_na1:cls, reg r297:V, reg r298:V, reg safe_pchisq:cls, reg dev16:*, reg dev17:V, reg c66:L, reg dev19:V, reg dr88:V, reg dc44:L, reg dx120:V, reg dx121:V, reg nas:*, reg nas1:V, reg __11:cls, reg r299:V, reg p65:p(V +), reg aod4:*, reg aod5:V, reg c67:L, reg aod7:V, reg dr90:V, reg dc45:L, reg dx122:V, reg dx123:V, reg r301:V, reg c68:L, reg dx125:V, reg dr92:V, reg dc46:L, reg dx126:V, reg dx127:V, reg nas2:*, reg nas3:V, reg __12:cls, reg r302:V, reg p66:p(V +), reg r304:V, reg l34:*, reg c69:L, reg r306:V, reg l36:*, reg dr94:V, reg dc47:L, reg dx128:V, reg dx129:V, reg nas4:*, reg nas5:V, reg ___9:cls, reg r309:V, reg dev20:*, reg dev21:V, reg l37:*, reg c70:L, reg dev23:V, reg dr96:V, reg dc48:L, reg dx130:V, reg dev25:V, reg dx131:V, reg ___10:cls, reg r310:V, reg test11:*, reg test12:V, reg r311:V, reg c71:L, reg pmax1:cls, reg score:*, reg score1:V, reg p67:p(V +), reg r313:V, reg l40:*, reg c72:L, reg r315:L, reg l42:*, reg dr98:V, reg dc49:L, reg dx132:V, reg dx133:V, reg ___11:cls, reg r318:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r319:V, reg r320:V, reg dev27:*, reg dev28:V, reg is_na2:cls, reg r321:V, reg r322:V, reg dispersion4:*, reg dispersion5:V, reg r323:V, reg c73:L, reg r324:S, reg dev29:*, reg dev30:V, reg dispersion6:*, reg dispersion7:V, reg r325:V, reg dev31:*, reg dev32:V, reg l43:*, reg c74:L, reg dev34:V, reg l45:*, reg dr100:V, reg dc50:L, reg dx134:V, reg dx135:V, reg SC:*, reg SC1:V, reg ___12:cls, reg r326:V, reg safe_pchisq1:cls, reg dev37:*, reg dev38:V, reg c75:L, reg dev40:V, reg dr102:V, reg dc51:L, reg dx136:V, reg dx137:V, reg nas6:*, reg nas7:V, reg __13:cls, reg r327:V, reg p68:p(V +), reg aod8:*, reg aod9:V, reg c76:L, reg aod11:V, reg dr104:V, reg dc52:L, reg dx138:V, reg dx139:V, reg r329:V, reg c77:L, reg dx141:V, reg dr106:V, reg dc53:L, reg dx142:V, reg dx143:V, reg nas8:*, reg nas9:V, reg __14:cls, reg r330:V, reg p69:p(V +), reg r332:V, reg l46:*, reg c78:L, reg r334:V, reg l48:*, reg dr108:V, reg dc54:L, reg dx144:V, reg dx145:V, reg nas10:*, reg nas11:V, reg ___13:cls, reg r337:V, reg dev41:*, reg dev42:V, reg l49:*, reg c79:L, reg dev44:V, reg dr110:V, reg dc55:L, reg dx146:V, reg dev46:V, reg dx147:V, reg ___14:cls, reg r338:V, reg test13:*, reg test14:V, reg r339:V, reg c80:L, reg fam2:*, reg fam3:V, reg r340:V, reg c81:L, reg c82:V, reg fam4:*, reg fam5:V, reg r341:V, reg c84:L, reg c85:V, reg c87:L, reg warning1:cls, reg gettextf:cls, reg fam6:*, reg fam7:V, reg p70:p(V +), reg r343:V, reg p71:p(V +), reg r345:V, reg object65:*, reg object66:V, reg c88:L, reg object68:V, reg dr112:V, reg dc56:L, reg dx148:V, reg dx149:V, reg r347:V, reg Fstat:cls, reg aod12:*, reg aod13:V, reg p72:p(V +), reg rdf:*, reg rdf1:V, reg p73:p(V +), reg r350:V, reg l52:*, reg c89:L, reg r352:V, reg l54:*, reg dr114:V, reg dc57:L, reg dx150:V, reg r354:V, reg dx151:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r359:V, reg r360:V, reg r361:V, reg r362:V, reg c90:cls, reg r363:V, reg ___15:cls, reg r364:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r365:V, reg r366:V, reg deparse:cls, reg formula:cls, reg object69:*, reg object70:V, reg p74:p(V +), reg r368:V, reg p75:p(V +), reg r370:V, reg scale9:*, reg scale10:V, reg r371:V, reg c91:L, reg paste3:cls, reg format:cls, reg scale11:*, reg scale12:V, reg p76:p(V +), reg r373:V, reg p77:p(V +), reg r375:V, reg r376:V, reg c92:cls, reg r377:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r378:V, reg r379:V, reg c93:cls, reg r380:V, reg l58:*, reg class__1:cls, reg r381:V, reg head:*, reg head1:V, reg l59:*, reg attr__:cls, reg r382:V, reg aod14:*, reg aod15:V |
    mkenv;
    st object = object;
    st scope = scope;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L0(0.0) else L0(scale);
  L0(scale_orDefault):
    st scale = scale_orDefault;
    test_isMissing = missing.0(test);
    if test_isMissing then L1() else L2(test);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("none", "Rao", "LRT", "Chisq", "F");
      goto L0(r2);
    L2():
      r = dyn base("none", "Rao", "LRT", "Chisq", "F");
      goto L0(r);
    };
    goto L2(p);
  L2(test_orDefault):
    st test = test_orDefault;
    x_isMissing = missing.0(x);
    if x_isMissing then L3(NULL) else L3(x);
  L3(x_orDefault):
    st x = x_orDefault;
    k_isMissing = missing.0(k);
    if k_isMissing then L4(2.0) else L4(k);
  L4(k_orDefault):
    st k = k_orDefault;
    st `...` = ddd;
    r4 = clos inner1812945554;
    st Fstat = r4;
    match_arg = ldf `match.arg`;
    check L99() else D0();
  D0():
    deopt 4 [];
  L99():
    p1 = prom<V +>{
      test1 = ld test;
      test2 = force? test1;
      checkMissing(test2);
      return test2;
    };
    r6 = dyn match_arg(p1);
    check L100() else D1();
  D1():
    deopt 6 [r6];
  L100():
    st test = r6;
    test3 = ld test;
    check L101() else D2();
  D2():
    deopt 8 [test3];
  L101():
    test4 = force? test3;
    checkMissing(test4);
    r7 = `==`(test4, "Chisq");
    c1 = `as.logical`(r7);
    if c1 then L102() else L5();
  L5():
    goto L6();
  L6():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L104() else L105();
  L102():
    st test = "LRT";
    goto L6();
  L7(r10):
    r11 = `!`(r10);
    c3 = `as.logical`(r11);
    if c3 then L107() else L8();
  L104():
    scope1 = ld scope;
    check L106() else D3();
  L105():
    r9 = dyn base1(<sym scope>);
    goto L7(r9);
  D3():
    deopt 18 [scope1];
  L8():
    goto L9();
  L9():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L111() else L112();
  L106():
    scope2 = force? scope1;
    checkMissing(scope2);
    c2 = `is.character`(scope2);
    goto L7(c2);
  L107():
    add_scope = ldf `add.scope`;
    check L108() else D4();
  D4():
    deopt 23 [];
  L10(r20):
    r22 = `!`(r20);
    c4 = `as.logical`(r22);
    if c4 then L115() else L11();
  L108():
    p2 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    p5 = prom<V +>{
      update_formula = ldf `update.formula`;
      p3 = prom<V +>{
        object3 = ld object;
        object4 = force? object3;
        checkMissing(object4);
        return object4;
      };
      p4 = prom<V +>{
        scope3 = ld scope;
        scope4 = force? scope3;
        checkMissing(scope4);
        return scope4;
      };
      r15 = dyn update_formula(p3, p4);
      return r15;
    };
    r17 = dyn add_scope(p2, p5);
    check L109() else D5();
  L111():
    scope5 = ld scope;
    check L113() else D6();
  L112():
    r19 = dyn base2(<sym scope>);
    goto L10(r19);
  D5():
    deopt 26 [r17];
  D6():
    deopt 32 [scope5];
  L11():
    goto L12();
  L12():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L119() else L120();
  L109():
    st scope = r17;
    goto L9();
  L113():
    scope6 = force? scope5;
    checkMissing(scope6);
    length = ldf length in base;
    r21 = dyn length(scope6);
    check L114() else D7();
  L115():
    stop = ldf stop;
    check L116() else D8();
  D7():
    deopt 35 [r21];
  D8():
    deopt 38 [];
  L13(r26):
    st oTerms = r26;
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L127() else L128();
  L114():
    goto L10(r21);
  L116():
    r23 = dyn stop("no terms in scope for adding to object");
    check L117() else D9();
  L119():
    object5 = ld object;
    check L121() else D10();
  L120():
    r25 = dyn base3(<lang `$`(object, terms)>, "term.labels");
    goto L13(r25);
  D9():
    deopt 40 [r23];
  D10():
    deopt 45 [object5];
  L14(r30):
    st int = r30;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L135() else L136();
  L117():
    goto L12();
  L121():
    object6 = force? object5;
    checkMissing(object6);
    c5 = `is.object`(object6);
    if c5 then L123() else L124(object6);
  L127():
    object9 = ld object;
    check L129() else D12();
  L128():
    r29 = dyn base4(<lang `$`(object, terms)>, "intercept");
    goto L14(r29);
  D12():
    deopt 54 [object9];
  L15(r34):
    st ns = r34;
    numeric = ldf numeric;
    check L139() else D16();
  L122(dx1):
    attr = ldf attr in base;
    r28 = dyn attr(dx1, "term.labels");
    check L126() else D11();
  L123():
    dr = tryDispatchBuiltin.1("$", object6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L125() else L124(dr);
  L124(object8):
    r27 = `$`(object8, <sym terms>);
    goto L122(r27);
  L129():
    object10 = force? object9;
    checkMissing(object10);
    c6 = `is.object`(object10);
    if c6 then L131() else L132(object10);
  L135():
    scope7 = ld scope;
    check L137() else D14();
  L136():
    r33 = dyn base5(<sym scope>);
    goto L15(r33);
  D11():
    deopt 50 [r28];
  D14():
    deopt 63 [scope7];
  D16():
    deopt 69 [];
  L125():
    dx = getTryDispatchBuiltinValue(dr);
    goto L122(dx);
  L126():
    goto L13(r28);
  L130(dx3):
    attr1 = ldf attr in base;
    r32 = dyn attr1(dx3, "intercept");
    check L134() else D13();
  L131():
    dr2 = tryDispatchBuiltin.1("$", object10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L133() else L132(dr2);
  L132(object12):
    r31 = `$`(object12, <sym terms>);
    goto L130(r31);
  L137():
    scope8 = force? scope7;
    checkMissing(scope8);
    length1 = ldf length in base;
    r35 = dyn length1(scope8);
    check L138() else D15();
  L139():
    p6 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      r36 = `+`(ns1, 1);
      return r36;
    };
    r38 = dyn numeric(p6);
    check L140() else D17();
  D13():
    deopt 59 [r32];
  D15():
    deopt 66 [r35];
  D17():
    deopt 71 [r38];
  L133():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L130(dx2);
  L134():
    goto L14(r32);
  L138():
    goto L15(r35);
  L140():
    st dfs = r38;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L141() else L142();
  L16(r40):
    l = ld dfs;
    names__ = ldf `names<-`;
    check L145() else D20();
  L141():
    scope9 = ld scope;
    check L143() else D18();
  L142():
    r39 = dyn base6("<none>", <sym scope>);
    goto L16(r39);
  D18():
    deopt 76 [scope9];
  D20():
    deopt 81 [r40, l, r40];
  L143():
    scope10 = force? scope9;
    checkMissing(scope10);
    c7 = ldf c in base;
    r41 = dyn c7("<none>", scope10);
    check L144() else D19();
  L145():
    r42 = dyn names__(l, NULL, r40);
    check L146() else D21();
  D19():
    deopt 79 [r41];
  D21():
    deopt 83 [r40, r42];
  L144():
    goto L16(r41);
  L146():
    st dfs = r42;
    dfs = ld dfs;
    check L147() else D22();
  D22():
    deopt 85 [dfs];
  L147():
    dfs1 = force? dfs;
    checkMissing(dfs1);
    st score = dfs1;
    st dev = dfs1;
    eval = ldf eval;
    check L148() else D23();
  D23():
    deopt 90 [];
  L148():
    p10 = prom<V +>{
      str2lang = ldf str2lang;
      p9 = prom<V +>{
        paste = ldf paste;
        p8 = prom<V +>{
          paste1 = ldf paste;
          p7 = prom<V +>{
            scope11 = ld scope;
            scope12 = force? scope11;
            checkMissing(scope12);
            return scope12;
          };
          r44 = dyn paste1[, collapse](p7, "+");
          return r44;
        };
        r46 = dyn paste("~ . +", p8);
        return r46;
      };
      r48 = dyn str2lang(p9);
      return r48;
    };
    r50 = dyn eval(p10);
    check L149() else D24();
  D24():
    deopt 92 [r50];
  L149():
    st `add.rhs` = r50;
    update_formula1 = ldf `update.formula`;
    check L150() else D25();
  D25():
    deopt 95 [];
  L150():
    p11 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      return object14;
    };
    p12 = prom<V +>{
      add_rhs = ld `add.rhs`;
      add_rhs1 = force? add_rhs;
      checkMissing(add_rhs1);
      return add_rhs1;
    };
    r53 = dyn update_formula1(p11, p12);
    check L151() else D26();
  D26():
    deopt 98 [r53];
  L151():
    st `new.form` = r53;
    terms = ldf terms;
    check L152() else D27();
  D27():
    deopt 101 [];
  L152():
    p13 = prom<V +>{
      new_form = ld `new.form`;
      new_form1 = force? new_form;
      checkMissing(new_form1);
      return new_form1;
    };
    r55 = dyn terms(p13);
    check L153() else D28();
  D28():
    deopt 103 [r55];
  L153():
    st Terms = r55;
    object15 = ld object;
    check L154() else D29();
  D29():
    deopt 105 [object15];
  L154():
    object16 = force? object15;
    checkMissing(object16);
    c8 = `is.object`(object16);
    if c8 then L156() else L157(object16);
  L155(dx5):
    st y = dx5;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L159() else L160();
  L156():
    dr4 = tryDispatchBuiltin.1("$", object16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L158() else L157(dr4);
  L157(object18):
    r56 = `$`(object18, <sym y>);
    goto L155(r56);
  L17(r58):
    c10 = `as.logical`(r58);
    if c10 then L162() else L18();
  L158():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L155(dx4);
  L159():
    x1 = ld x;
    check L161() else D30();
  L160():
    r57 = dyn base7(<sym x>);
    goto L17(r57);
  D30():
    deopt 110 [x1];
  L18():
    object33 = ld object;
    check L232() else D71();
  L31():
    nrow = ldf nrow;
    check L242() else D73();
  L161():
    x2 = force? x1;
    checkMissing(x2);
    c9 = `==`(x2, NULL);
    goto L17(c9);
  L162():
    object19 = ld object;
    check L163() else D31();
  D31():
    deopt 113 [object19];
  D71():
    deopt 250 [object33];
  D73():
    deopt 259 [];
  L163():
    object20 = force? object19;
    checkMissing(object20);
    c11 = `is.object`(object20);
    if c11 then L165() else L166(object20);
  L232():
    object34 = force? object33;
    checkMissing(object34);
    c21 = `is.object`(object34);
    if c21 then L234() else L235(object34);
  L242():
    p33 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r131 = dyn nrow(p33);
    check L243() else D74();
  D74():
    deopt 261 [r131];
  L164(dx7):
    st fc = dx7;
    Terms = ld Terms;
    check L168() else D32();
  L165():
    dr6 = tryDispatchBuiltin.1("$", object20);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L167() else L166(dr6);
  L166(object22):
    r59 = `$`(object22, <sym call>);
    goto L164(r59);
  L233(dx25):
    st wt = dx25;
    object37 = ld object;
    check L237() else D72();
  L234():
    dr20 = tryDispatchBuiltin.1("$", object34);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L236() else L235(dr20);
  L235(object36):
    r128 = `$`(object36, <sym prior.weights>);
    goto L233(r128);
  L243():
    st n = r131;
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L244() else L245();
  D32():
    deopt 117 [Terms];
  D72():
    deopt 254 [object37];
  L32(r133):
    c24 = `as.logical`(r133);
    if c24 then L247() else L33();
  L167():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L164(dx6);
  L168():
    Terms1 = force? Terms;
    checkMissing(Terms1);
    l1 = ld fc;
    c12 = `is.object`(l1);
    if c12 then L170() else L171(Terms1, l1);
  L236():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L233(dx24);
  L237():
    object38 = force? object37;
    checkMissing(object38);
    c22 = `is.object`(object38);
    if c22 then L239() else L240(object38);
  L244():
    wt2 = ld wt;
    check L246() else D75();
  L245():
    r132 = dyn base14(<sym wt>);
    goto L32(r132);
  D75():
    deopt 264 [wt2];
  L33():
    goto L35();
  L35():
    sym16 = ldf attr;
    base16 = ldf attr in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L253() else L254();
  L169(dx9):
    st fc = dx9;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L173() else L174();
  L170():
    dr8 = tryDispatchBuiltin.0("$<-", l1, Terms1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L172() else L171(Terms1, dr8);
  L171(Terms3, l3):
    r60 = `$<-`(l3, <sym formula>, Terms1);
    goto L169(r60);
  L238(dx27):
    st offset = dx27;
    goto L31();
  L239():
    dr22 = tryDispatchBuiltin.1("$", object38);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L241() else L240(dr22);
  L240(object40):
    r129 = `$`(object40, <sym offset>);
    goto L238(r129);
  L246():
    wt3 = force? wt2;
    checkMissing(wt3);
    c23 = `==`(wt3, NULL);
    goto L32(c23);
  L247():
    sym15 = ldf `rep.int`;
    base15 = ldf `rep.int` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L248() else L249();
  L19(r62):
    st fob = r62;
    sym9 = ldf oldClass;
    base9 = ldf oldClass in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L178() else L179();
  L34(r135):
    st wt = r135;
    goto L35();
  L36(r139):
    st Terms = r139;
    sym17 = ldf attr;
    base17 = ldf attr in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L257() else L258();
  L172():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L169(dx8);
  L173():
    fc = ld fc;
    check L175() else D33();
  L174():
    r61 = dyn base8[call, terms](<sym fc>, <sym Terms>);
    goto L19(r61);
  L241():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L238(dx26);
  L248():
    n6 = ld n;
    check L250() else D76();
  L249():
    r134 = dyn base15(1.0, <sym n>);
    goto L34(r134);
  L253():
    Terms10 = ld Terms;
    check L255() else D78();
  L254():
    r138 = dyn base16(<sym Terms>, "term.labels");
    goto L36(r138);
  D33():
    deopt 124 [fc];
  D76():
    deopt 270 [n6];
  D78():
    deopt 279 [Terms10];
  L20(r65):
    l4 = ld fob;
    class__ = ldf `class<-`;
    check L182() else D38();
  L37(r142):
    st asgn = r142;
    sym18 = ldf match;
    base18 = ldf match in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L261() else L262();
  L175():
    fc1 = force? fc;
    checkMissing(fc1);
    Terms6 = ld Terms;
    check L176() else D34();
  L178():
    object23 = ld object;
    check L180() else D36();
  L179():
    r64 = dyn base9(<sym object>);
    goto L20(r64);
  L250():
    n7 = force? n6;
    checkMissing(n7);
    rep_int1 = ldf `rep.int` in base;
    r136 = dyn rep_int1(1.0, n7);
    check L251() else D77();
  L255():
    Terms11 = force? Terms10;
    checkMissing(Terms11);
    attr2 = ldf attr in base;
    r140 = dyn attr2(Terms11, "term.labels");
    check L256() else D79();
  L257():
    x5 = ld x;
    check L259() else D80();
  L258():
    r141 = dyn base17(<sym x>, "assign");
    goto L37(r141);
  D34():
    deopt 127 [Terms6];
  D36():
    deopt 135 [object23];
  D38():
    deopt 140 [r65, l4, r65];
  D77():
    deopt 273 [r136];
  D79():
    deopt 283 [r140];
  D80():
    deopt 287 [x5];
  L38(r145):
    r150 = `>`(r145, 0);
    st ousex = r150;
    int = ld int;
    check L270() else D87();
  L176():
    Terms7 = force? Terms6;
    checkMissing(Terms7);
    list = ldf list in base;
    r63 = dyn list(fc1, Terms7);
    check L177() else D35();
  L180():
    object24 = force? object23;
    checkMissing(object24);
    oldClass = ldf oldClass in base;
    r66 = dyn oldClass(object24);
    check L181() else D37();
  L182():
    r67 = dyn class__(l4, NULL, r65);
    check L183() else D39();
  L251():
    goto L34(r136);
  L256():
    goto L36(r140);
  L259():
    x6 = force? x5;
    checkMissing(x6);
    attr3 = ldf attr in base;
    r143 = dyn attr3(x6, "assign");
    check L260() else D81();
  L261():
    asgn = ld asgn;
    check L263() else D82();
  L262():
    r144 = dyn base18(<sym asgn>, <lang match(oTerms, Terms)>, 0);
    goto L38(r144);
  D35():
    deopt 131 [r63];
  D37():
    deopt 138 [r66];
  D39():
    deopt 142 [r65, r67];
  D81():
    deopt 291 [r143];
  D82():
    deopt 295 [asgn];
  D87():
    deopt 314 [int];
  L177():
    goto L19(r63);
  L181():
    goto L20(r66);
  L183():
    st fob = r67;
    model_frame = ldf `model.frame`;
    check L184() else D40();
  L260():
    goto L37(r143);
  L263():
    asgn1 = force? asgn;
    checkMissing(asgn1);
    sym19 = ldf match;
    base19 = ldf match in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L264() else L265();
  L270():
    int1 = force? int;
    checkMissing(int1);
    c25 = `as.logical`(int1);
    if c25 then L271() else L40();
  D40():
    deopt 145 [];
  L39(r147):
    match1 = ldf match in base;
    r149 = dyn match1(asgn1, r147, 0, NULL);
    check L269() else D86();
  L40():
    goto L42();
  L42():
    x7 = ld x;
    check L276() else D88();
  L184():
    p14 = prom<V +>{
      fob = ld fob;
      fob1 = force? fob;
      checkMissing(fob1);
      return fob1;
    };
    p15 = prom<V +>{
      object25 = ld object;
      object26 = force? object25;
      checkMissing(object26);
      c13 = `is.object`(object26);
      if c13 then L1() else L2(object26);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", object26);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(object28):
      r69 = `$`(object28, <sym xlevels>);
      goto L0(r69);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r71 = dyn model_frame[, xlev](p14, p15);
    check L185() else D41();
  L264():
    oTerms = ld oTerms;
    check L266() else D83();
  L265():
    r146 = dyn base19(<sym oTerms>, <sym Terms>);
    goto L39(r146);
  L271():
    l6 = ld ousex;
    c26 = `is.object`(l6);
    if c26 then L272() else L273(TRUE, l6);
  D41():
    deopt 149 [r71];
  D83():
    deopt 299 [oTerms];
  D86():
    deopt 310 [r149];
  D88():
    deopt 325 [x7];
  L41(r154, dx29):
    st ousex = dx29;
    goto L42();
  L185():
    st m = r71;
    model_offset = ldf `model.offset`;
    check L186() else D42();
  L266():
    oTerms1 = force? oTerms;
    checkMissing(oTerms1);
    Terms12 = ld Terms;
    check L267() else D84();
  L269():
    goto L38(r149);
  L272():
    dr24 = tryDispatchBuiltin.0("[<-", l6, TRUE);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L274() else L273(TRUE, dr24);
  L273(r152, l8):
    ___ = ldf `[<-` in base;
    r155 = dyn ___(l8, TRUE, 1);
    goto L41(r152, r155);
  L276():
    x8 = force? x7;
    checkMissing(x8);
    c27 = `is.object`(x8);
    if c27 then L277() else L278(x8);
  D42():
    deopt 152 [];
  D84():
    deopt 301 [Terms12];
  L43(dx31):
    st X = dx31;
    glm_fit = ldf `glm.fit`;
    check L281() else D90();
  L186():
    p16 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r73 = dyn model_offset(p16);
    check L187() else D43();
  L267():
    Terms13 = force? Terms12;
    checkMissing(Terms13);
    match = ldf match in base;
    r148 = dyn match(oTerms1, Terms13, NA_INT, NULL);
    check L268() else D85();
  L274():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L41(TRUE, dx28);
  L277():
    dr26 = tryDispatchBuiltin.1("[", x8);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L279() else L278(dr26);
  L278(x10):
    ousex = ld ousex;
    check L280() else D89();
  D43():
    deopt 154 [r73];
  D85():
    deopt 306 [r148];
  D89():
    deopt 328 [x10, ousex];
  D90():
    deopt 336 [];
  L187():
    st offset = r73;
    model_weights = ldf `model.weights`;
    check L188() else D44();
  L268():
    goto L39(r148);
  L279():
    dx30 = getTryDispatchBuiltinValue(dr26);
    goto L43(dx30);
  L280():
    ousex1 = force? ousex;
    __3 = ldf `[` in base;
    r157 = dyn __3(x8, <missing>, ousex1, FALSE);
    goto L43(r157);
  L281():
    p34 = prom<V +>{
      X = ld X;
      X1 = force? X;
      checkMissing(X1);
      return X1;
    };
    p35 = prom<V +>{
      y22 = ld y;
      y23 = force? y22;
      checkMissing(y23);
      return y23;
    };
    p36 = prom<V +>{
      wt4 = ld wt;
      wt5 = force? wt4;
      checkMissing(wt5);
      return wt5;
    };
    p37 = prom<V +>{
      offset = ld offset;
      offset1 = force? offset;
      checkMissing(offset1);
      return offset1;
    };
    p38 = prom<V +>{
      object41 = ld object;
      object42 = force? object41;
      checkMissing(object42);
      c28 = `is.object`(object42);
      if c28 then L1() else L2(object42);
    L0(dx33):
      return dx33;
    L1():
      dr28 = tryDispatchBuiltin.1("$", object42);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(object44):
      r162 = `$`(object44, <sym family>);
      goto L0(r162);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx32);
    };
    p39 = prom<V +>{
      object45 = ld object;
      object46 = force? object45;
      checkMissing(object46);
      c29 = `is.object`(object46);
      if c29 then L1() else L2(object46);
    L0(dx35):
      return dx35;
    L1():
      dr30 = tryDispatchBuiltin.1("$", object46);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(object48):
      r164 = `$`(object48, <sym control>);
      goto L0(r164);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx34);
    };
    r166 = dyn glm_fit[, , , offset, family, control](p34, p35, p36, p37, p38, p39);
    check L282() else D91();
  D44():
    deopt 157 [];
  D91():
    deopt 346 [r166];
  L188():
    p17 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r75 = dyn model_weights(p17);
    check L189() else D45();
  L282():
    st z = r166;
    z = ld z;
    check L283() else D92();
  D45():
    deopt 159 [r75];
  D92():
    deopt 348 [z];
  L189():
    st wt = r75;
    model_matrix = ldf `model.matrix`;
    check L190() else D46();
  L283():
    z1 = force? z;
    checkMissing(z1);
    c30 = `is.object`(z1);
    if c30 then L285() else L286(z1);
  D46():
    deopt 162 [];
  L190():
    p18 = prom<V +>{
      Terms8 = ld Terms;
      Terms9 = force? Terms8;
      checkMissing(Terms9);
      return Terms9;
    };
    p19 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p20 = prom<V +>{
      object29 = ld object;
      object30 = force? object29;
      checkMissing(object30);
      c14 = `is.object`(object30);
      if c14 then L1() else L2(object30);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", object30);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(object32):
      r78 = `$`(object32, <sym contrasts>);
      goto L0(r78);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r80 = dyn model_matrix[, , `contrasts.arg`](p18, p19, p20);
    check L191() else D47();
  L284(dx37):
    l9 = ld dfs;
    c31 = `is.object`(l9);
    if c31 then L288() else L289(dx37, l9);
  L285():
    dr32 = tryDispatchBuiltin.1("$", z1);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L287() else L286(dr32);
  L286(z3):
    r167 = `$`(z3, <sym rank>);
    goto L284(r167);
  D47():
    deopt 167 [r80];
  L44(dx43):
    st dfs = dx43;
    z4 = ld z;
    check L291() else D93();
  L191():
    st x = r80;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L192() else L193();
  L287():
    dx36 = getTryDispatchBuiltinValue(dr32);
    goto L284(dx36);
  L288():
    dr34 = tryDispatchBuiltin.0("[<-", l9, dx37);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L290() else L289(dx37, dr34);
  L289(dx39, l11):
    ___1 = ldf `[<-` in base;
    r168 = dyn ___1(l11, dx37, 1);
    goto L44(r168);
  D93():
    deopt 356 [z4];
  L21(r82):
    st oldn = r82;
    model_response = ldf `model.response`;
    check L196() else D50();
  L192():
    y = ld y;
    check L194() else D48();
  L193():
    r81 = dyn base10(<sym y>);
    goto L21(r81);
  L290():
    dx41 = getTryDispatchBuiltinValue(dr34);
    goto L44(dx41);
  L291():
    z5 = force? z4;
    checkMissing(z5);
    c32 = `is.object`(z5);
    if c32 then L293() else L294(z5);
  D48():
    deopt 171 [y];
  D50():
    deopt 177 [];
  L194():
    y1 = force? y;
    checkMissing(y1);
    length2 = ldf length in base;
    r83 = dyn length2(y1);
    check L195() else D49();
  L196():
    p21 = prom<V +>{
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      return m7;
    };
    r85 = dyn model_response(p21);
    check L197() else D51();
  L292(dx45):
    l12 = ld dev;
    c33 = `is.object`(l12);
    if c33 then L296() else L297(dx45, l12);
  L293():
    dr36 = tryDispatchBuiltin.1("$", z5);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L295() else L294(dr36);
  L294(z7):
    r169 = `$`(z7, <sym deviance>);
    goto L292(r169);
  D49():
    deopt 174 [r83];
  D51():
    deopt 179 [r85];
  L45(dx51):
    st dev = dx51;
    z8 = ld z;
    check L299() else D94();
  L195():
    goto L21(r83);
  L197():
    st y = r85;
    is_factor = ldf `is.factor`;
    check L198() else D52();
  L295():
    dx44 = getTryDispatchBuiltinValue(dr36);
    goto L292(dx44);
  L296():
    dr38 = tryDispatchBuiltin.0("[<-", l12, dx45);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L298() else L297(dx45, dr38);
  L297(dx47, l14):
    ___2 = ldf `[<-` in base;
    r170 = dyn ___2(l14, dx45, 1);
    goto L45(r170);
  D52():
    deopt 182 [];
  D94():
    deopt 364 [z8];
  L198():
    p22 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r87 = dyn is_factor(p22);
    check L199() else D53();
  L298():
    dx49 = getTryDispatchBuiltinValue(dr38);
    goto L45(dx49);
  L299():
    z9 = force? z8;
    checkMissing(z9);
    c34 = `is.object`(z9);
    if c34 then L301() else L302(z9);
  D53():
    deopt 184 [r87];
  L199():
    r88 = `!`(r87);
    c15 = `as.logical`(r88);
    if c15 then L200() else L22();
  L300(dx53):
    st r = dx53;
    z12 = ld z;
    check L304() else D95();
  L301():
    dr40 = tryDispatchBuiltin.1("$", z9);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L303() else L302(dr40);
  L302(z11):
    r171 = `$`(z11, <sym residuals>);
    goto L300(r171);
  D95():
    deopt 368 [z12];
  L22():
    goto L23();
  L23():
    NCOL = ldf NCOL;
    check L204() else D56();
  L200():
    l5 = ld y;
    storage_mode__ = ldf `storage.mode<-`;
    check L201() else D54();
  L303():
    dx52 = getTryDispatchBuiltinValue(dr40);
    goto L300(dx52);
  L304():
    z13 = force? z12;
    checkMissing(z13);
    c35 = `is.object`(z13);
    if c35 then L306() else L307(z13);
  D54():
    deopt 189 ["double", l5, "double"];
  D56():
    deopt 196 [];
  L201():
    r89 = dyn storage_mode__(l5, NULL, "double");
    check L202() else D55();
  L204():
    p23 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    r92 = dyn NCOL(p23);
    check L205() else D57();
  L305(dx55):
    st w = dx55;
    sapply = ldf sapply;
    check L309() else D96();
  L306():
    dr42 = tryDispatchBuiltin.1("$", z13);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L308() else L307(dr42);
  L307(z15):
    r172 = `$`(z15, <sym weights>);
    goto L305(r172);
  D55():
    deopt 191 ["double", r89];
  D57():
    deopt 198 [r92];
  D96():
    deopt 373 [];
  L202():
    st y = r89;
    goto L23();
  L205():
    r93 = `==`(r92, 2.0);
    c16 = `as.logical`(r93);
    if c16 then L206() else L24();
  L308():
    dx54 = getTryDispatchBuiltinValue(dr42);
    goto L305(dx54);
  L309():
    p41 = prom<V +>{
      strsplit = ldf strsplit;
      p40 = prom<V +>{
        Terms14 = ld Terms;
        Terms15 = force? Terms14;
        checkMissing(Terms15);
        return Terms15;
      };
      r174 = dyn strsplit[, , fixed](p40, ":", TRUE);
      return r174;
    };
    p42 = prom<V +>{
      r176 = clos inner2501545716;
      return r176;
    };
    r178 = dyn sapply(p41, p42);
    check L310() else D97();
  D97():
    deopt 376 [r178];
  L24():
    goto L27();
  L27():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L221() else L222();
  L206():
    y6 = ld y;
    check L207() else D58();
  L310():
    st sTerms = r178;
    scope13 = ld scope;
    check L311() else D98();
  D58():
    deopt 201 [y6];
  D98():
    deopt 378 [scope13];
  L28(r115):
    st newn = r115;
    newn = ld newn;
    check L225() else D67();
  L207():
    y7 = force? y6;
    checkMissing(y7);
    c17 = `is.object`(y7);
    if c17 then L208() else L209();
  L221():
    y20 = ld y;
    check L223() else D65();
  L222():
    r114 = dyn base13(<sym y>);
    goto L28(r114);
  L311():
    scope14 = force? scope13;
    checkMissing(scope14);
    s = toForSeq(scope14);
    l15 = length(s);
    i = 0;
    goto L46(i);
  D65():
    deopt 233 [y20];
  D67():
    deopt 238 [newn];
  L25(dx15):
    y10 = ld y;
    check L211() else D59();
  L46(i1):
    i2 = `+`.1(i1, 1);
    c36 = `<`.1(l15, i2);
    if c36 then L312() else L55();
  L208():
    dr14 = tryDispatchBuiltin.1("[", y7);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L210() else L209();
  L209():
    __ = ldf `[` in base;
    r94 = dyn __(y7, <missing>, 1.0);
    goto L25(r94);
  L223():
    y21 = force? y20;
    checkMissing(y21);
    length4 = ldf length in base;
    r116 = dyn length4(y21);
    check L224() else D66();
  L225():
    newn1 = force? newn;
    checkMissing(newn1);
    oldn = ld oldn;
    check L226() else D68();
  D59():
    deopt 206 [dx15, y10];
  D66():
    deopt 236 [r116];
  D68():
    deopt 239 [newn1, oldn];
  L55():
    x11 = `[[`(s, i2, NULL, TRUE);
    st tt = x11;
    paste2 = ldf paste;
    check L313() else D99();
  L210():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L25(dx14);
  L211():
    y11 = force? y10;
    checkMissing(y11);
    c18 = `is.object`(y11);
    if c18 then L212() else L213(dx15);
  L224():
    goto L28(r116);
  L226():
    oldn1 = force? oldn;
    checkMissing(oldn1);
    r117 = `<`(newn1, oldn1);
    c20 = `as.logical`(r117);
    if c20 then L227() else L29();
  L312():
    scale1 = ld scale;
    check L369() else D121();
  D99():
    deopt 381 [i2];
  D121():
    deopt 478 [scale1];
  L26(dx20, dx21):
    r96 = `+`(dx20, dx21);
    st n = r96;
    ifelse = ldf ifelse;
    check L215() else D60();
  L29():
    goto L30(NULL);
  L30(r126):
    goto L31();
  L212():
    dr16 = tryDispatchBuiltin.1("[", y11);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L214() else L213(dx15);
  L213(dx17):
    __1 = ldf `[` in base;
    r95 = dyn __1(y11, <missing>, 2.0);
    goto L26(dx17, r95);
  L227():
    warning = ldf warning;
    check L228() else D69();
  L313():
    p45 = prom<V +>{
      sort = ldf sort;
      p44 = prom<V +>{
        strsplit1 = ldf strsplit;
        p43 = prom<V +>{
          tt = ld tt;
          tt1 = force? tt;
          checkMissing(tt1);
          return tt1;
        };
        r180 = dyn strsplit1(p43, ":");
        c37 = `is.object`(r180);
        if c37 then L1() else L2(r180);
      L0(dx57):
        return dx57;
      L1():
        dr44 = tryDispatchBuiltin.1("[[", r180);
        dc22 = getTryDispatchBuiltinDispatched(dr44);
        if dc22 then L3() else L2(dr44);
      L2(r182):
        __4 = ldf `[[` in base;
        r183 = dyn __4(r182, 1);
        goto L0(r183);
      L3():
        dx56 = getTryDispatchBuiltinValue(dr44);
        goto L0(dx56);
      };
      r185 = dyn sort(p44);
      return r185;
    };
    r187 = dyn paste2[, collapse](p45, ":");
    check L314() else D100();
  L369():
    scale2 = force? scale1;
    checkMissing(scale2);
    r227 = `==`(scale2, 0.0);
    c49 = `as.logical`(r227);
    if c49 then L370() else L56();
  D60():
    deopt 215 [];
  D69():
    deopt 243 [];
  D100():
    deopt 385 [i2, r187];
  L56():
    scale3 = ld scale;
    check L378() else D124();
  L57(dx92):
    st dispersion = dx92;
    object59 = ld object;
    check L379() else D125();
  L214():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L26(dx15, dx19);
  L215():
    p24 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      r97 = `==`(n1, 0.0);
      return r97;
    };
    p25 = prom<V +>{
      y14 = ld y;
      y15 = force? y14;
      checkMissing(y15);
      c19 = `is.object`(y15);
      if c19 then L1() else L2();
    L0(dx23):
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      r100 = `/`(dx23, n3);
      return r100;
    L1():
      dr18 = tryDispatchBuiltin.1("[", y15);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r99 = dyn __2(y15, <missing>, 1.0);
      goto L0(r99);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx22);
    };
    r102 = dyn ifelse(p24, 0.0, p25);
    check L216() else D61();
  L228():
    p32 = prom<V +>{
      sprintf = ldf sprintf;
      p29 = prom<V +>{
        ngettext = ldf ngettext;
        p28 = prom<V +>{
          newn2 = ld newn;
          newn3 = force? newn2;
          checkMissing(newn3);
          return newn3;
        };
        r119 = dyn ngettext(p28, "using the %d/%d row from a combined fit", "using the %d/%d rows from a combined fit");
        return r119;
      };
      p30 = prom<V +>{
        newn4 = ld newn;
        newn5 = force? newn4;
        checkMissing(newn5);
        return newn5;
      };
      p31 = prom<V +>{
        oldn2 = ld oldn;
        oldn3 = force? oldn2;
        checkMissing(oldn3);
        return oldn3;
      };
      r123 = dyn sprintf(p29, p30, p31);
      return r123;
    };
    r125 = dyn warning[, domain](p32, NA_LGL);
    check L229() else D70();
  L314():
    st stt = r187;
    sym20 = ldf match;
    base20 = ldf match in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L315() else L316();
  L370():
    summary = ldf summary;
    check L371() else D122();
  D61():
    deopt 219 [r102];
  D70():
    deopt 247 [r125];
  D122():
    deopt 483 [];
  D124():
    deopt 489 [scale3];
  D125():
    deopt 492 [object59];
  L47(i7, r189):
    r194 = `>`(r189, 0);
    st usex = r194;
    x12 = ld x;
    check L324() else D106();
  L216():
    st y = r102;
    ____ = ldf `%||%`;
    check L217() else D62();
  L229():
    goto L30(r125);
  L315():
    asgn2 = ld asgn;
    check L317() else D101();
  L316():
    r188 = dyn base20(<sym asgn>, <lang match(stt, sTerms)>, 0);
    goto L47(i2, r188);
  L371():
    p56 = prom<V +>{
      object57 = ld object;
      object58 = force? object57;
      checkMissing(object58);
      return object58;
    };
    r229 = dyn summary[, dispersion](p56, NULL);
    check L372() else D123();
  L378():
    scale4 = force? scale3;
    checkMissing(scale4);
    goto L57(scale4);
  L379():
    object60 = force? object59;
    checkMissing(object60);
    c51 = `is.object`(object60);
    if c51 then L381() else L382(object60);
  D62():
    deopt 222 [];
  D101():
    deopt 389 [i2, asgn2];
  D106():
    deopt 408 [i7, x12];
  D123():
    deopt 487 [r229];
  L217():
    p26 = prom<V +>{
      wt = ld wt;
      wt1 = force? wt;
      checkMissing(wt1);
      return wt1;
    };
    p27 = prom<V +>{
      sym11 = ldf `rep.int`;
      base11 = ldf `rep.int` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L2() else L3();
    L0(r105):
      return r105;
    L2():
      sym12 = ldf length;
      base12 = ldf length in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L4() else L5();
    L3():
      r104 = dyn base11(1.0, <lang length(y)>);
      goto L0(r104);
    L1(r107):
      rep_int = ldf `rep.int` in base;
      r109 = dyn rep_int(1.0, r107);
      goto L0(r109);
    L4():
      y18 = ld y;
      y19 = force? y18;
      checkMissing(y19);
      length3 = ldf length in base;
      r108 = dyn length3(y19);
      goto L1(r108);
    L5():
      r106 = dyn base12(<sym y>);
      goto L1(r106);
    };
    r111 = dyn ____(p26, p27);
    check L218() else D63();
  L317():
    asgn3 = force? asgn2;
    checkMissing(asgn3);
    sym21 = ldf match;
    base21 = ldf match in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L318() else L319();
  L324():
    x13 = force? x12;
    checkMissing(x13);
    c38 = `is.object`(x13);
    if c38 then L325() else L326(i7, x13);
  L372():
    c50 = `is.object`(r229);
    if c50 then L374() else L375(r229);
  L380(dx94):
    c52 = `is.object`(dx94);
    if c52 then L385() else L386(dx94);
  L381():
    dr68 = tryDispatchBuiltin.1("$", object60);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L383() else L382(dr68);
  L382(object62):
    r233 = `$`(object62, <sym family>);
    goto L380(r233);
  D63():
    deopt 225 [r111];
  L48(i10, r191):
    match3 = ldf match in base;
    r193 = dyn match3(asgn3, r191, 0, NULL);
    check L323() else D105();
  L49(i14, dx59):
    st X = dx59;
    glm_fit1 = ldf `glm.fit`;
    check L330() else D109();
  L218():
    n4 = ld n;
    check L219() else D64();
  L318():
    stt = ld stt;
    check L320() else D102();
  L319():
    r190 = dyn base21(<sym stt>, <sym sTerms>);
    goto L48(i2, r190);
  L325():
    dr46 = tryDispatchBuiltin.1("[", x13);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L327() else L326(i7, dr46);
  L326(i12, x15):
    usex = ld usex;
    check L328() else D107();
  L373(dx91):
    goto L57(dx91);
  L374():
    dr66 = tryDispatchBuiltin.1("$", r229);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L376() else L375(dr66);
  L375(r231):
    r232 = `$`(r231, <sym dispersion>);
    goto L373(r232);
  L383():
    dx93 = getTryDispatchBuiltinValue(dr68);
    goto L380(dx93);
  L384(dx98):
    st fam = dx98;
    fam = ld fam;
    check L388() else D126();
  L385():
    dr70 = tryDispatchBuiltin.1("$", dx94);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L387() else L386(dr70);
  L386(dx96):
    r234 = `$`(dx96, <sym family>);
    goto L384(r234);
  D64():
    deopt 225 [r111, n4];
  D102():
    deopt 393 [i2, stt];
  D105():
    deopt 404 [i10, r193];
  D107():
    deopt 411 [i12, x15, usex];
  D109():
    deopt 421 [i14];
  D126():
    deopt 497 [fam];
  L219():
    n5 = force? n4;
    checkMissing(n5);
    r112 = `*`(r111, n5);
    st wt = r112;
    goto L27();
  L320():
    stt1 = force? stt;
    checkMissing(stt1);
    sTerms = ld sTerms;
    check L321() else D103();
  L323():
    goto L47(i10, r193);
  L327():
    dx58 = getTryDispatchBuiltinValue(dr46);
    goto L49(i7, dx58);
  L328():
    usex1 = force? usex;
    checkMissing(usex1);
    ousex2 = ld ousex;
    check L329() else D108();
  L330():
    p46 = prom<V +>{
      X2 = ld X;
      X3 = force? X2;
      checkMissing(X3);
      return X3;
    };
    p47 = prom<V +>{
      y24 = ld y;
      y25 = force? y24;
      checkMissing(y25);
      return y25;
    };
    p48 = prom<V +>{
      wt6 = ld wt;
      wt7 = force? wt6;
      checkMissing(wt7);
      return wt7;
    };
    p49 = prom<V +>{
      offset2 = ld offset;
      offset3 = force? offset2;
      checkMissing(offset3);
      return offset3;
    };
    p50 = prom<V +>{
      object49 = ld object;
      object50 = force? object49;
      checkMissing(object50);
      c39 = `is.object`(object50);
      if c39 then L1() else L2(object50);
    L0(dx61):
      return dx61;
    L1():
      dr48 = tryDispatchBuiltin.1("$", object50);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(object52):
      r201 = `$`(object52, <sym family>);
      goto L0(r201);
    L3():
      dx60 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx60);
    };
    p51 = prom<V +>{
      object53 = ld object;
      object54 = force? object53;
      checkMissing(object54);
      c40 = `is.object`(object54);
      if c40 then L1() else L2(object54);
    L0(dx63):
      return dx63;
    L1():
      dr50 = tryDispatchBuiltin.1("$", object54);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(object56):
      r203 = `$`(object56, <sym control>);
      goto L0(r203);
    L3():
      dx62 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx62);
    };
    r205 = dyn glm_fit1[, , , offset, family, control](p46, p47, p48, p49, p50, p51);
    check L331() else D110();
  L376():
    dx90 = getTryDispatchBuiltinValue(dr66);
    goto L373(dx90);
  L387():
    dx97 = getTryDispatchBuiltinValue(dr70);
    goto L384(dx97);
  L388():
    fam1 = force? fam;
    checkMissing(fam1);
    r235 = `==`(fam1, "gaussian");
    c53 = `as.logical`(r235);
    if c53 then L389() else L58();
  D103():
    deopt 395 [i2, sTerms];
  D108():
    deopt 412 [i12, x15, usex1, ousex2];
  D110():
    deopt 431 [i14, r205];
  L58():
    dev4 = ld dev;
    check L402() else D134();
  L62(r245):
    st loglik = r245;
    loglik = ld loglik;
    check L404() else D136();
  L321():
    sTerms1 = force? sTerms;
    checkMissing(sTerms1);
    match2 = ldf match in base;
    r192 = dyn match2(stt1, sTerms1, NA_INT, NULL);
    check L322() else D104();
  L329():
    ousex3 = force? ousex2;
    checkMissing(ousex3);
    r195 = `||`(usex1, ousex3);
    __5 = ldf `[` in base;
    r196 = dyn __5(x13, <missing>, r195, FALSE);
    goto L49(i12, r196);
  L331():
    st z = r205;
    z16 = ld z;
    check L332() else D111();
  L389():
    scale5 = ld scale;
    check L390() else D127();
  D104():
    deopt 400 [i2, r192];
  D111():
    deopt 433 [i14, z16];
  D127():
    deopt 501 [scale5];
  D134():
    deopt 519 [dev4];
  D136():
    deopt 524 [loglik];
  L322():
    goto L48(i2, r192);
  L332():
    z17 = force? z16;
    checkMissing(z17);
    c41 = `is.object`(z17);
    if c41 then L334() else L335(i14, z17);
  L390():
    scale6 = force? scale5;
    checkMissing(scale6);
    r236 = `>`(scale6, 0.0);
    c54 = `as.logical`(r236);
    if c54 then L391() else L59();
  L402():
    dev5 = force? dev4;
    checkMissing(dev5);
    dispersion = ld dispersion;
    check L403() else D135();
  L404():
    loglik1 = force? loglik;
    checkMissing(loglik1);
    k1 = ld k;
    check L405() else D137();
  D135():
    deopt 520 [dev5, dispersion];
  D137():
    deopt 525 [loglik1, k1];
  L59():
    n10 = ld n;
    check L396() else D131();
  L60(r239):
    goto L62(r239);
  L333(i18, dx65):
    l16 = ld dfs;
    c42 = `is.object`(l16);
    if c42 then L337() else L338(i18, dx65, l16);
  L334():
    dr52 = tryDispatchBuiltin.1("$", z17);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L336() else L335(i14, dr52);
  L335(i16, z19):
    r206 = `$`(z19, <sym rank>);
    goto L333(i16, r206);
  L391():
    dev = ld dev;
    check L392() else D128();
  L403():
    dispersion1 = force? dispersion;
    checkMissing(dispersion1);
    r246 = `/`(dev5, dispersion1);
    goto L62(r246);
  L405():
    k2 = force? k1;
    checkMissing(k2);
    dfs2 = ld dfs;
    check L406() else D138();
  D128():
    deopt 505 [dev];
  D131():
    deopt 511 [n10];
  D138():
    deopt 526 [loglik1, k2, dfs2];
  L50(i22, dx71):
    st dfs = dx71;
    z20 = ld z;
    check L341() else D113();
  L336():
    dx64 = getTryDispatchBuiltinValue(dr52);
    goto L333(i14, dx64);
  L337():
    dr54 = tryDispatchBuiltin.0("[<-", l16, dx65);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L339() else L338(i18, dx65, dr54);
  L338(i20, dx67, l18):
    tt2 = ld tt;
    check L340() else D112();
  L392():
    dev1 = force? dev;
    checkMissing(dev1);
    scale7 = ld scale;
    check L393() else D129();
  L396():
    n11 = force? n10;
    checkMissing(n11);
    sym22 = ldf log;
    base22 = ldf log in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L397() else L398();
  L406():
    dfs3 = force? dfs2;
    checkMissing(dfs3);
    r247 = `*`(k2, dfs3);
    r248 = `+`(loglik1, r247);
    st aic = r248;
    aic = ld aic;
    check L407() else D139();
  D112():
    deopt 437 [i20, dx67, l18, dx65, tt2];
  D113():
    deopt 441 [i22, z20];
  D129():
    deopt 506 [dev1, scale7];
  D139():
    deopt 531 [aic];
  L61(n14, r241):
    r244 = `*`(n14, r241);
    goto L60(r244);
  L339():
    dx69 = getTryDispatchBuiltinValue(dr54);
    goto L50(i18, dx69);
  L340():
    tt3 = force? tt2;
    ___3 = ldf `[<-` in base;
    r207 = dyn ___3(l18, dx65, tt3);
    goto L50(i20, r207);
  L341():
    z21 = force? z20;
    checkMissing(z21);
    c43 = `is.object`(z21);
    if c43 then L343() else L344(i22, z21);
  L393():
    scale8 = force? scale7;
    checkMissing(scale8);
    r237 = `/`(dev1, scale8);
    n8 = ld n;
    check L394() else D130();
  L397():
    dev2 = ld dev;
    check L399() else D132();
  L398():
    r240 = dyn base22(<lang `/`(dev, n)>);
    goto L61(n11, r240);
  L407():
    aic1 = force? aic;
    checkMissing(aic1);
    extractAIC = ldf extractAIC;
    check L408() else D140();
  D130():
    deopt 508 [r237, n8];
  D132():
    deopt 513 [n11, dev2];
  D140():
    deopt 533 [aic1];
  L342(i26, dx73):
    l19 = ld dev;
    c44 = `is.object`(l19);
    if c44 then L346() else L347(i26, dx73, l19);
  L343():
    dr56 = tryDispatchBuiltin.1("$", z21);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L345() else L344(i22, dr56);
  L344(i24, z23):
    r208 = `$`(z23, <sym deviance>);
    goto L342(i24, r208);
  L394():
    n9 = force? n8;
    checkMissing(n9);
    r238 = `-`(r237, n9);
    goto L60(r238);
  L399():
    dev3 = force? dev2;
    checkMissing(dev3);
    n15 = ld n;
    check L400() else D133();
  L408():
    p57 = prom<V +>{
      object63 = ld object;
      object64 = force? object63;
      checkMissing(object64);
      return object64;
    };
    p58 = prom<V +>{
      k3 = ld k;
      k4 = force? k3;
      checkMissing(k4);
      return k4;
    };
    r251 = dyn extractAIC[, k](p57, p58);
    check L409() else D141();
  D133():
    deopt 514 [n11, dev3, n15];
  D141():
    deopt 537 [aic1, r251];
  L51(i30, dx79):
    st dev = dx79;
    test5 = ld test;
    check L350() else D115();
  L345():
    dx72 = getTryDispatchBuiltinValue(dr56);
    goto L342(i22, dx72);
  L346():
    dr58 = tryDispatchBuiltin.0("[<-", l19, dx73);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L348() else L347(i26, dx73, dr58);
  L347(i28, dx75, l21):
    tt4 = ld tt;
    check L349() else D114();
  L400():
    n16 = force? n15;
    checkMissing(n16);
    r242 = `/`(dev3, n16);
    r243 = log(r242, 2.718281828459045);
    goto L61(n11, r243);
  L409():
    c55 = `is.object`(r251);
    if c55 then L410() else L411(aic1, r251);
  D114():
    deopt 445 [i28, dx75, l21, dx73, tt4];
  D115():
    deopt 449 [i30, test5];
  L63(aic5, dx100):
    aic6 = ld aic;
    check L413() else D142();
  L348():
    dx77 = getTryDispatchBuiltinValue(dr58);
    goto L51(i26, dx77);
  L349():
    tt5 = force? tt4;
    ___4 = ldf `[<-` in base;
    r209 = dyn ___4(l21, dx73, tt5);
    goto L51(i28, r209);
  L350():
    test6 = force? test5;
    checkMissing(test6);
    r210 = `==`(test6, "Rao");
    c45 = `as.logical`(r210);
    if c45 then L351() else L52();
  L410():
    dr72 = tryDispatchBuiltin.1("[", r251);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L412() else L411(aic1, dr72);
  L411(aic3, r253):
    __6 = ldf `[` in base;
    r254 = dyn __6(r253, 2);
    goto L63(aic3, r254);
  D142():
    deopt 540 [aic5, dx100, aic6];
  L52():
    goto L54(i30);
  L54(i45):
    goto L46(i45);
  L351():
    glm_fit2 = ldf `glm.fit`;
    check L352() else D116();
  L412():
    dx99 = getTryDispatchBuiltinValue(dr72);
    goto L63(aic1, dx99);
  L413():
    aic7 = force? aic6;
    checkMissing(aic7);
    c56 = `is.object`(aic7);
    if c56 then L414() else L415(aic5, dx100, aic7);
  D116():
    deopt 454 [i30];
  L64(aic13, dx105, dx106):
    r256 = `-`(dx105, dx106);
    r257 = `+`(aic13, r256);
    st aic = r257;
    dfs4 = ld dfs;
    check L417() else D143();
  L352():
    p52 = prom<V +>{
      X4 = ld X;
      X5 = force? X4;
      checkMissing(X5);
      return X5;
    };
    p53 = prom<V +>{
      r212 = ld r;
      r213 = force? r212;
      checkMissing(r213);
      return r213;
    };
    p54 = prom<V +>{
      w = ld w;
      w1 = force? w;
      checkMissing(w1);
      return w1;
    };
    p55 = prom<V +>{
      offset4 = ld offset;
      offset5 = force? offset4;
      checkMissing(offset5);
      return offset5;
    };
    r217 = dyn glm_fit2[, , , offset](p52, p53, p54, p55);
    check L353() else D117();
  L414():
    dr74 = tryDispatchBuiltin.1("[", aic7);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L416() else L415(aic5, dx100, dr74);
  L415(aic10, dx102, aic11):
    __7 = ldf `[` in base;
    r255 = dyn __7(aic11, 1);
    goto L64(aic10, dx102, r255);
  D117():
    deopt 460 [i30, r217];
  D143():
    deopt 548 [dfs4];
  L353():
    st zz = r217;
    zz = ld zz;
    check L354() else D118();
  L416():
    dx104 = getTryDispatchBuiltinValue(dr74);
    goto L64(aic5, dx100, dx104);
  L417():
    dfs5 = force? dfs4;
    checkMissing(dfs5);
    dfs6 = ld dfs;
    check L418() else D144();
  D118():
    deopt 462 [i30, zz];
  D144():
    deopt 549 [dfs5, dfs6];
  L354():
    zz1 = force? zz;
    checkMissing(zz1);
    c46 = `is.object`(zz1);
    if c46 then L356() else L357(i30, zz1);
  L418():
    dfs7 = force? dfs6;
    checkMissing(dfs7);
    c57 = `is.object`(dfs7);
    if c57 then L419() else L420(dfs5, dfs7);
  L65(dfs13, dx108):
    r259 = `-`(dfs13, dx108);
    st dfs = r259;
    l25 = ld dfs;
    c58 = `is.object`(l25);
    if c58 then L422() else L423(NA_LGL, l25);
  L355(i36, dx81):
    zz4 = ld zz;
    check L359() else D119();
  L356():
    dr60 = tryDispatchBuiltin.1("$", zz1);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L358() else L357(i30, dr60);
  L357(i34, zz3):
    r218 = `$`(zz3, <sym null.deviance>);
    goto L355(i34, r218);
  L419():
    dr76 = tryDispatchBuiltin.1("[", dfs7);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L421() else L420(dfs5, dr76);
  L420(dfs10, dfs11):
    __8 = ldf `[` in base;
    r258 = dyn __8(dfs11, 1);
    goto L65(dfs10, r258);
  D119():
    deopt 464 [i36, dx81, zz4];
  L66(dx110):
    st dfs = dx110;
    data_frame = ldf `data.frame`;
    check L425() else D145();
  L358():
    dx80 = getTryDispatchBuiltinValue(dr60);
    goto L355(i30, dx80);
  L359():
    zz5 = force? zz4;
    checkMissing(zz5);
    c47 = `is.object`(zz5);
    if c47 then L361() else L362(i36, dx81, zz5);
  L421():
    dx107 = getTryDispatchBuiltinValue(dr76);
    goto L65(dfs5, dx107);
  L422():
    dr78 = tryDispatchBuiltin.0("[<-", l25, NA_LGL);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L424() else L423(NA_LGL, dr78);
  L423(r261, l27):
    ___6 = ldf `[<-` in base;
    r264 = dyn ___6(l27, NA_LGL, 1);
    goto L66(r264);
  D145():
    deopt 564 [];
  L360(i40, dx86, dx87):
    r220 = `-`(dx86, dx87);
    l22 = ld score;
    c48 = `is.object`(l22);
    if c48 then L364() else L365(i40, r220, l22);
  L361():
    dr62 = tryDispatchBuiltin.1("$", zz5);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L363() else L362(i36, dx81, dr62);
  L362(i38, dx83, zz7):
    r219 = `$`(zz7, <sym deviance>);
    goto L360(i38, dx83, r219);
  L424():
    dx109 = getTryDispatchBuiltinValue(dr78);
    goto L66(dx109);
  L425():
    p59 = prom<V +>{
      dfs14 = ld dfs;
      dfs15 = force? dfs14;
      checkMissing(dfs15);
      return dfs15;
    };
    p60 = prom<V +>{
      dev6 = ld dev;
      dev7 = force? dev6;
      checkMissing(dev7);
      return dev7;
    };
    p61 = prom<V +>{
      aic14 = ld aic;
      aic15 = force? aic14;
      checkMissing(aic15);
      return aic15;
    };
    p62 = prom<V +>{
      sym23 = ldf names;
      base23 = ldf names in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r269):
      return r269;
    L1():
      dfs16 = ld dfs;
      dfs17 = force? dfs16;
      checkMissing(dfs17);
      names = ldf names in base;
      r270 = dyn names(dfs17);
      goto L0(r270);
    L2():
      r268 = dyn base23(<sym dfs>);
      goto L0(r268);
    };
    r272 = dyn data_frame[Df, Deviance, AIC, `row.names`, `check.names`](p59, p60, p61, p62, FALSE);
    check L426() else D146();
  D146():
    deopt 575 [r272];
  L53(i44, r224, dx89):
    st score = dx89;
    goto L54(i44);
  L363():
    dx85 = getTryDispatchBuiltinValue(dr62);
    goto L360(i36, dx81, dx85);
  L364():
    dr64 = tryDispatchBuiltin.0("[<-", l22, r220);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L366() else L365(i40, r220, dr64);
  L365(i42, r222, l24):
    tt6 = ld tt;
    check L367() else D120();
  L426():
    st aod = r272;
    sym24 = ldf all;
    base24 = ldf all in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L427() else L428();
  D120():
    deopt 469 [i42, r222, l24, r220, tt6];
  L67(r274):
    c59 = `as.logical`(r274);
    if c59 then L434() else L69();
  L366():
    dx88 = getTryDispatchBuiltinValue(dr64);
    goto L53(i40, r220, dx88);
  L367():
    tt7 = force? tt6;
    ___5 = ldf `[<-` in base;
    r225 = dyn ___5(l24, r220, tt7);
    goto L53(i42, r222, r225);
  L427():
    sym25 = ldf `is.na`;
    base25 = ldf `is.na` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L429() else L430();
  L428():
    r273 = dyn base24(<lang is.na(aic)>);
    goto L67(r273);
  L68(r276):
    all = ldf all in base;
    r278 = dyn all(r276);
    check L433() else D149();
  L69():
    goto L71();
  L71():
    match_arg1 = ldf `match.arg`;
    check L440() else D151();
  L429():
    aic16 = ld aic;
    check L431() else D147();
  L430():
    r275 = dyn base25(<sym aic>);
    goto L68(r275);
  L434():
    aod = ld aod;
    check L435() else D150();
  D147():
    deopt 581 [aic16];
  D149():
    deopt 586 [r278];
  D150():
    deopt 587 [aod];
  D151():
    deopt 598 [];
  L431():
    aic17 = force? aic16;
    checkMissing(aic17);
    is_na = ldf `is.na` in base;
    r277 = dyn is_na(aic17);
    check L432() else D148();
  L433():
    goto L67(r278);
  L435():
    aod1 = force? aod;
    checkMissing(aod1);
    c60 = `is.object`(aod1);
    if c60 then L436() else L437();
  L440():
    p63 = prom<V +>{
      test7 = ld test;
      test8 = force? test7;
      checkMissing(test8);
      return test8;
    };
    r281 = dyn match_arg1(p63);
    check L441() else D152();
  D148():
    deopt 584 [r277];
  D152():
    deopt 600 [r281];
  L70(dx112):
    st aod = dx112;
    goto L71();
  L432():
    goto L68(r277);
  L436():
    dr80 = tryDispatchBuiltin.1("[", aod1);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L438() else L437();
  L437():
    __9 = ldf `[` in base;
    r279 = dyn __9(aod1, <missing>, -3.0);
    goto L70(r279);
  L441():
    st test = r281;
    test9 = ld test;
    check L442() else D153();
  D153():
    deopt 602 [test9];
  L438():
    dx111 = getTryDispatchBuiltinValue(dr80);
    goto L70(dx111);
  L442():
    test10 = force? test9;
    checkMissing(test10);
    r282 = `==`(test10, "LRT");
    c61 = `as.logical`(r282);
    if c61 then L443() else L72();
  L72():
    test11 = ld test;
    check L472() else D165();
  L80():
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L528() else L529();
  L443():
    pmax = ldf pmax;
    check L444() else D154();
  D154():
    deopt 607 [];
  D165():
    deopt 665 [test11];
  L95(r366):
    st head = r366;
    sym30 = ldf c;
    base30 = ldf c in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L538() else L539();
  L444():
    p64 = prom<V +>{
      loglik2 = ld loglik;
      loglik3 = force? loglik2;
      checkMissing(loglik3);
      c62 = `is.object`(loglik3);
      if c62 then L1() else L2(loglik3);
    L0(dx115):
      loglik6 = ld loglik;
      loglik7 = force? loglik6;
      checkMissing(loglik7);
      r284 = `-`(dx115, loglik7);
      return r284;
    L1():
      dr82 = tryDispatchBuiltin.1("[", loglik3);
      dc41 = getTryDispatchBuiltinDispatched(dr82);
      if dc41 then L3() else L2(dr82);
    L2(loglik5):
      __10 = ldf `[` in base;
      r283 = dyn __10(loglik5, 1);
      goto L0(r283);
    L3():
      dx114 = getTryDispatchBuiltinValue(dr82);
      goto L0(dx114);
    };
    r286 = dyn pmax(0.0, p64);
    check L445() else D155();
  L472():
    test12 = force? test11;
    checkMissing(test12);
    r311 = `==`(test12, "Rao");
    c71 = `as.logical`(r311);
    if c71 then L473() else L81();
  L528():
    deparse = ldf deparse;
    check L530() else D188();
  L529():
    r365 = dyn base29("Single term additions", "\nModel:", <lang deparse(formula(object))>, <lang if(`>`(scale, 0.0), paste("\nscale: ", format(scale), "\n"))>);
    goto L95(r365);
  D155():
    deopt 610 [r286];
  D188():
    deopt 781 [];
  L81():
    test13 = ld test;
    check L504() else D179();
  L98(r379):
    l58 = ld aod;
    class__1 = ldf `class<-`;
    check L541() else D195();
  L445():
    st dev = r286;
    l28 = ld dev;
    c63 = `is.object`(l28);
    if c63 then L446() else L447(NA_LGL, l28);
  L473():
    pmax1 = ldf pmax;
    check L474() else D166();
  L530():
    p75 = prom<V +>{
      formula = ldf formula;
      p74 = prom<V +>{
        object69 = ld object;
        object70 = force? object69;
        checkMissing(object70);
        return object70;
      };
      r368 = dyn formula(p74);
      return r368;
    };
    r370 = dyn deparse(p75);
    check L531() else D189();
  L538():
    c93 = ldf c in base;
    r380 = dyn c93("anova", "data.frame");
    check L540() else D194();
  L539():
    r378 = dyn base30("anova", "data.frame");
    goto L98(r378);
  D166():
    deopt 670 [];
  D179():
    deopt 733 [test13];
  D189():
    deopt 783 [r370];
  D194():
    deopt 804 [r380];
  D195():
    deopt 806 [r379, l58, r379];
  L73(dx117):
    st dev = dx117;
    dispersion2 = ld dispersion;
    check L449() else D156();
  L446():
    dr84 = tryDispatchBuiltin.0("[<-", l28, NA_LGL);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L448() else L447(NA_LGL, dr84);
  L447(r288, l30):
    ___7 = ldf `[<-` in base;
    r291 = dyn ___7(l30, NA_LGL, 1);
    goto L73(r291);
  L474():
    p67 = prom<V +>{
      score = ld score;
      score1 = force? score;
      checkMissing(score1);
      return score1;
    };
    r313 = dyn pmax1(0.0, p67);
    check L475() else D167();
  L504():
    test14 = force? test13;
    checkMissing(test14);
    r339 = `==`(test14, "F");
    c80 = `as.logical`(r339);
    if c80 then L505() else L89();
  L531():
    scale9 = ld scale;
    check L532() else D190();
  L540():
    goto L98(r380);
  L541():
    r381 = dyn class__1(l58, NULL, r379);
    check L542() else D196();
  D156():
    deopt 619 [dispersion2];
  D167():
    deopt 673 [r313];
  D190():
    deopt 784 [scale9];
  D196():
    deopt 808 [r379, r381];
  L89():
    goto L80();
  L448():
    dx116 = getTryDispatchBuiltinValue(dr84);
    goto L73(dx116);
  L449():
    dispersion3 = force? dispersion2;
    checkMissing(dispersion3);
    r292 = `==`(dispersion3, 1.0);
    c64 = `as.logical`(r292);
    if c64 then L450() else L74();
  L475():
    st dev = r313;
    l40 = ld dev;
    c72 = `is.object`(l40);
    if c72 then L476() else L477(NA_LGL, l40);
  L505():
    fam2 = ld fam;
    check L506() else D180();
  L532():
    scale10 = force? scale9;
    checkMissing(scale10);
    r371 = `>`(scale10, 0.0);
    c91 = `as.logical`(r371);
    if c91 then L533() else L96();
  L542():
    st aod = r381;
    head = ld head;
    check L543() else D197();
  D180():
    deopt 737 [fam2];
  D197():
    deopt 810 [head];
  L74():
    goto L75("scaled dev.");
  L75(r293):
    st LRT = r293;
    dev8 = ld dev;
    check L452() else D157();
  L82(dx133):
    st dev = dx133;
    sym27 = ldf `is.na`;
    base27 = ldf `is.na` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L479() else L480();
  L96():
    goto L97(NULL);
  L97(r376):
    c92 = ldf c in base;
    r377 = dyn c92("Single term additions", "\nModel:", r370, r376);
    check L537() else D193();
  L450():
    goto L75("LRT");
  L476():
    dr98 = tryDispatchBuiltin.0("[<-", l40, NA_LGL);
    dc49 = getTryDispatchBuiltinDispatched(dr98);
    if dc49 then L478() else L477(NA_LGL, dr98);
  L477(r315, l42):
    ___11 = ldf `[<-` in base;
    r318 = dyn ___11(l42, NA_LGL, 1);
    goto L82(r318);
  L506():
    fam3 = force? fam2;
    checkMissing(fam3);
    r340 = `==`(fam3, "binomial");
    c81 = `as.logical`(r340);
    if c81 then L90(c81) else L507();
  L533():
    paste3 = ldf paste;
    check L534() else D191();
  L543():
    head1 = force? head;
    checkMissing(head1);
    l59 = ld aod;
    attr__ = ldf `attr<-`;
    check L544() else D198();
  D157():
    deopt 628 [dev8];
  D191():
    deopt 789 [];
  D193():
    deopt 797 [r377];
  D198():
    deopt 813 [head1, l59, head1];
  L83(r320):
    r322 = `!`(r320);
    st nas = r322;
    dispersion4 = ld dispersion;
    check L483() else D170();
  L90(c82):
    c87 = `as.logical`(c82);
    if c87 then L510() else L91();
  L452():
    dev9 = force? dev8;
    checkMissing(dev9);
    l31 = ld aod;
    c65 = `is.object`(l31);
    if c65 then L453() else L454(dev9, l31);
  L478():
    dx132 = getTryDispatchBuiltinValue(dr98);
    goto L82(dx132);
  L479():
    dev27 = ld dev;
    check L481() else D168();
  L480():
    r319 = dyn base27(<sym dev>);
    goto L83(r319);
  L507():
    fam4 = ld fam;
    check L508() else D181();
  L534():
    p77 = prom<V +>{
      format = ldf format;
      p76 = prom<V +>{
        scale11 = ld scale;
        scale12 = force? scale11;
        checkMissing(scale12);
        return scale12;
      };
      r373 = dyn format(p76);
      return r373;
    };
    r375 = dyn paste3("\nscale: ", p77, "\n");
    check L535() else D192();
  L537():
    goto L95(r377);
  L544():
    r382 = dyn attr__(l59, NULL, "heading", head1);
    check L545() else D199();
  D168():
    deopt 684 [dev27];
  D170():
    deopt 690 [dispersion4];
  D181():
    deopt 741 [c81, fam4];
  D192():
    deopt 793 [r375];
  D199():
    deopt 816 [head1, r382];
  L76(dx119):
    st aod = dx119;
    sym26 = ldf `is.na`;
    base26 = ldf `is.na` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L457() else L458();
  L91():
    goto L92();
  L92():
    object65 = ld object;
    check L514() else D184();
  L453():
    dr86 = tryDispatchBuiltin.0("[<-", l31, dev9);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L455() else L454(dev9, dr86);
  L454(dev11, l33):
    LRT = ld LRT;
    check L456() else D158();
  L481():
    dev28 = force? dev27;
    checkMissing(dev28);
    is_na2 = ldf `is.na` in base;
    r321 = dyn is_na2(dev28);
    check L482() else D169();
  L483():
    dispersion5 = force? dispersion4;
    checkMissing(dispersion5);
    r323 = `==`(dispersion5, 1.0);
    c73 = `as.logical`(r323);
    if c73 then L484() else L84();
  L508():
    fam5 = force? fam4;
    checkMissing(fam5);
    r341 = `==`(fam5, "poisson");
    c84 = `as.logical`(r341);
    c85 = `||`(c81, c84);
    goto L90(c85);
  L510():
    warning1 = ldf warning;
    check L511() else D182();
  L535():
    goto L97(r375);
  L545():
    st aod = r382;
    aod14 = ld aod;
    check L546() else D200();
  D158():
    deopt 632 [dev11, l33, dev9, LRT];
  D169():
    deopt 687 [r321];
  D182():
    deopt 747 [];
  D184():
    deopt 754 [object65];
  D200():
    deopt 818 [aod14];
  L77(r296):
    r298 = `!`(r296);
    st nas = r298;
    safe_pchisq = ldf safe_pchisq;
    check L461() else D161();
  L84():
    goto L85("scaled Rao sc.");
  L85(r324):
    st SC = r324;
    dev29 = ld dev;
    check L486() else D171();
  L455():
    dx118 = getTryDispatchBuiltinValue(dr86);
    goto L76(dx118);
  L456():
    LRT1 = force? LRT;
    ___8 = ldf `[<-` in base;
    r294 = dyn ___8(l31, <missing>, LRT1, dev9);
    goto L76(r294);
  L457():
    dev14 = ld dev;
    check L459() else D159();
  L458():
    r295 = dyn base26(<sym dev>);
    goto L77(r295);
  L482():
    goto L83(r321);
  L484():
    goto L85("Rao score");
  L511():
    p71 = prom<V +>{
      gettextf = ldf gettextf;
      p70 = prom<V +>{
        fam6 = ld fam;
        fam7 = force? fam6;
        checkMissing(fam7);
        return fam7;
      };
      r343 = dyn gettextf("F test assumes quasi%s family", p70);
      return r343;
    };
    r345 = dyn warning1[, domain](p71, NA_LGL);
    check L512() else D183();
  L514():
    object66 = force? object65;
    checkMissing(object66);
    c88 = `is.object`(object66);
    if c88 then L516() else L517(object66);
  L546():
    aod15 = force? aod14;
    checkMissing(aod15);
    popenv;
    return aod15;
  D159():
    deopt 639 [dev14];
  D161():
    deopt 646 [];
  D171():
    deopt 699 [dev29];
  D183():
    deopt 751 [r345];
  L459():
    dev15 = force? dev14;
    checkMissing(dev15);
    is_na1 = ldf `is.na` in base;
    r297 = dyn is_na1(dev15);
    check L460() else D160();
  L461():
    p65 = prom<V +>{
      dev16 = ld dev;
      dev17 = force? dev16;
      checkMissing(dev17);
      c66 = `is.object`(dev17);
      if c66 then L1() else L2(dev17);
    L0(dx121):
      return dx121;
    L1():
      dr88 = tryDispatchBuiltin.1("[", dev17);
      dc44 = getTryDispatchBuiltinDispatched(dr88);
      if dc44 then L3() else L2(dr88);
    L2(dev19):
      nas = ld nas;
      nas1 = force? nas;
      __11 = ldf `[` in base;
      r299 = dyn __11(dev19, nas1);
      goto L0(r299);
    L3():
      dx120 = getTryDispatchBuiltinValue(dr88);
      goto L0(dx120);
    };
    p66 = prom<V +>{
      aod4 = ld aod;
      aod5 = force? aod4;
      checkMissing(aod5);
      c67 = `is.object`(aod5);
      if c67 then L2() else L3(aod5);
    L1(dx123):
      c68 = `is.object`(dx123);
      if c68 then L5() else L6(dx123);
    L2():
      dr90 = tryDispatchBuiltin.1("$", aod5);
      dc45 = getTryDispatchBuiltinDispatched(dr90);
      if dc45 then L4() else L3(dr90);
    L3(aod7):
      r301 = `$`(aod7, <sym Df>);
      goto L1(r301);
    L0(dx127):
      return dx127;
    L4():
      dx122 = getTryDispatchBuiltinValue(dr90);
      goto L1(dx122);
    L5():
      dr92 = tryDispatchBuiltin.1("[", dx123);
      dc46 = getTryDispatchBuiltinDispatched(dr92);
      if dc46 then L7() else L6(dr92);
    L6(dx125):
      nas2 = ld nas;
      nas3 = force? nas2;
      __12 = ldf `[` in base;
      r302 = dyn __12(dx125, nas3);
      goto L0(r302);
    L7():
      dx126 = getTryDispatchBuiltinValue(dr92);
      goto L0(dx126);
    };
    r304 = dyn safe_pchisq[, , `lower.tail`](p65, p66, FALSE);
    check L462() else D162();
  L486():
    dev30 = force? dev29;
    checkMissing(dev30);
    dispersion6 = ld dispersion;
    check L487() else D172();
  L512():
    goto L92();
  L515(dx149):
    st rdf = dx149;
    Fstat = ldf Fstat;
    check L519() else D185();
  L516():
    dr112 = tryDispatchBuiltin.1("$", object66);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L518() else L517(dr112);
  L517(object68):
    r347 = `$`(object68, <sym df.residual>);
    goto L515(r347);
  D160():
    deopt 642 [r297];
  D162():
    deopt 651 [r304];
  D172():
    deopt 700 [dev30, dispersion6];
  D185():
    deopt 759 [];
  L460():
    goto L77(r297);
  L462():
    l34 = ld dev;
    c69 = `is.object`(l34);
    if c69 then L463() else L464(r304, l34);
  L487():
    dispersion7 = force? dispersion6;
    checkMissing(dispersion7);
    r325 = `/`(dev30, dispersion7);
    st dev = r325;
    dev31 = ld dev;
    check L488() else D173();
  L518():
    dx148 = getTryDispatchBuiltinValue(dr112);
    goto L515(dx148);
  L519():
    p72 = prom<V +>{
      aod12 = ld aod;
      aod13 = force? aod12;
      checkMissing(aod13);
      return aod13;
    };
    p73 = prom<V +>{
      rdf = ld rdf;
      rdf1 = force? rdf;
      checkMissing(rdf1);
      return rdf1;
    };
    r350 = dyn Fstat(p72, p73);
    check L520() else D186();
  D173():
    deopt 704 [dev31];
  D186():
    deopt 762 [r350];
  L78(dx129):
    st dev = dx129;
    dev20 = ld dev;
    check L467() else D164();
  L463():
    dr94 = tryDispatchBuiltin.0("[<-", l34, r304);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L465() else L464(r304, dr94);
  L464(r306, l36):
    nas4 = ld nas;
    check L466() else D163();
  L488():
    dev32 = force? dev31;
    checkMissing(dev32);
    l43 = ld aod;
    c74 = `is.object`(l43);
    if c74 then L489() else L490(dev32, l43);
  L520():
    l52 = ld aod;
    c89 = `is.object`(l52);
    if c89 then L521() else L522(r350, l52);
  D163():
    deopt 653 [r306, l36, r304, nas4];
  D164():
    deopt 657 [dev20];
  L86(dx135):
    st aod = dx135;
    safe_pchisq1 = ldf safe_pchisq;
    check L493() else D175();
  L93(r354, dx151):
    st aod = dx151;
    goto L80();
  L465():
    dx128 = getTryDispatchBuiltinValue(dr94);
    goto L78(dx128);
  L466():
    nas5 = force? nas4;
    ___9 = ldf `[<-` in base;
    r309 = dyn ___9(l36, r304, nas5);
    goto L78(r309);
  L467():
    dev21 = force? dev20;
    checkMissing(dev21);
    l37 = ld aod;
    c70 = `is.object`(l37);
    if c70 then L468() else L469(dev21);
  L489():
    dr100 = tryDispatchBuiltin.0("[<-", l43, dev32);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L491() else L490(dev32, dr100);
  L490(dev34, l45):
    SC = ld SC;
    check L492() else D174();
  L521():
    dr114 = tryDispatchBuiltin.0("[<-", l52, r350);
    dc57 = getTryDispatchBuiltinDispatched(dr114);
    if dc57 then L523() else L522(r350, dr114);
  L522(r352, l54):
    sym28 = ldf c;
    base28 = ldf c in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L524() else L525();
  D174():
    deopt 708 [dev34, l45, dev32, SC];
  D175():
    deopt 714 [];
  L79(dev25, dx131):
    st aod = dx131;
    goto L80();
  L94(r360, r361, r362):
    ___15 = ldf `[<-` in base;
    r364 = dyn ___15(l52, <missing>, r362, r361);
    goto L93(r360, r364);
  L468():
    dr96 = tryDispatchBuiltin.0("[<-", l37, dev21);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L470() else L469(dev21);
  L469(dev23):
    ___10 = ldf `[<-` in base;
    r310 = dyn ___10(l37, <missing>, "Pr(>Chi)", dev21);
    goto L79(dev23, r310);
  L491():
    dx134 = getTryDispatchBuiltinValue(dr100);
    goto L86(dx134);
  L492():
    SC1 = force? SC;
    ___12 = ldf `[<-` in base;
    r326 = dyn ___12(l43, <missing>, SC1, dev32);
    goto L86(r326);
  L493():
    p68 = prom<V +>{
      dev37 = ld dev;
      dev38 = force? dev37;
      checkMissing(dev38);
      c75 = `is.object`(dev38);
      if c75 then L1() else L2(dev38);
    L0(dx137):
      return dx137;
    L1():
      dr102 = tryDispatchBuiltin.1("[", dev38);
      dc51 = getTryDispatchBuiltinDispatched(dr102);
      if dc51 then L3() else L2(dr102);
    L2(dev40):
      nas6 = ld nas;
      nas7 = force? nas6;
      __13 = ldf `[` in base;
      r327 = dyn __13(dev40, nas7);
      goto L0(r327);
    L3():
      dx136 = getTryDispatchBuiltinValue(dr102);
      goto L0(dx136);
    };
    p69 = prom<V +>{
      aod8 = ld aod;
      aod9 = force? aod8;
      checkMissing(aod9);
      c76 = `is.object`(aod9);
      if c76 then L2() else L3(aod9);
    L1(dx139):
      c77 = `is.object`(dx139);
      if c77 then L5() else L6(dx139);
    L2():
      dr104 = tryDispatchBuiltin.1("$", aod9);
      dc52 = getTryDispatchBuiltinDispatched(dr104);
      if dc52 then L4() else L3(dr104);
    L3(aod11):
      r329 = `$`(aod11, <sym Df>);
      goto L1(r329);
    L0(dx143):
      return dx143;
    L4():
      dx138 = getTryDispatchBuiltinValue(dr104);
      goto L1(dx138);
    L5():
      dr106 = tryDispatchBuiltin.1("[", dx139);
      dc53 = getTryDispatchBuiltinDispatched(dr106);
      if dc53 then L7() else L6(dr106);
    L6(dx141):
      nas8 = ld nas;
      nas9 = force? nas8;
      __14 = ldf `[` in base;
      r330 = dyn __14(dx141, nas9);
      goto L0(r330);
    L7():
      dx142 = getTryDispatchBuiltinValue(dr106);
      goto L0(dx142);
    };
    r332 = dyn safe_pchisq1[, , `lower.tail`](p68, p69, FALSE);
    check L494() else D176();
  L523():
    dx150 = getTryDispatchBuiltinValue(dr114);
    goto L93(r350, dx150);
  L524():
    c90 = ldf c in base;
    r363 = dyn c90("F value", "Pr(>F)");
    check L526() else D187();
  L525():
    r359 = dyn base28("F value", "Pr(>F)");
    goto L94(r352, r350, r359);
  D176():
    deopt 719 [r332];
  D187():
    deopt 770 [r352, l54, r350, r363];
  L470():
    dx130 = getTryDispatchBuiltinValue(dr96);
    goto L79(dev21, dx130);
  L494():
    l46 = ld dev;
    c78 = `is.object`(l46);
    if c78 then L495() else L496(r332, l46);
  L526():
    goto L94(r352, r350, r363);
  L87(dx145):
    st dev = dx145;
    dev41 = ld dev;
    check L499() else D178();
  L495():
    dr108 = tryDispatchBuiltin.0("[<-", l46, r332);
    dc54 = getTryDispatchBuiltinDispatched(dr108);
    if dc54 then L497() else L496(r332, dr108);
  L496(r334, l48):
    nas10 = ld nas;
    check L498() else D177();
  D177():
    deopt 721 [r334, l48, r332, nas10];
  D178():
    deopt 725 [dev41];
  L497():
    dx144 = getTryDispatchBuiltinValue(dr108);
    goto L87(dx144);
  L498():
    nas11 = force? nas10;
    ___13 = ldf `[<-` in base;
    r337 = dyn ___13(l48, r332, nas11);
    goto L87(r337);
  L499():
    dev42 = force? dev41;
    checkMissing(dev42);
    l49 = ld aod;
    c79 = `is.object`(l49);
    if c79 then L500() else L501(dev42);
  L88(dev46, dx147):
    st aod = dx147;
    goto L80();
  L500():
    dr110 = tryDispatchBuiltin.0("[<-", l49, dev42);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L502() else L501(dev42);
  L501(dev44):
    ___14 = ldf `[<-` in base;
    r338 = dyn ___14(l49, <missing>, "Pr(>Chi)", dev42);
    goto L88(dev44, r338);
  L502():
    dx146 = getTryDispatchBuiltinValue(dr110);
    goto L88(dev42, dx146);
  }
}
fun inner1812945554(table, rdf) {
  (reg table:*, reg rdf:*) -+> V { var table:*, var rdf:*, reg table1:*, reg table2:V, reg c:L, reg table4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg table5:*, reg table6:V, reg c1:L, reg table8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg pmax:cls, reg dev:*, reg dev1:V, reg c2:L, reg dev3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __:cls, reg r2:V, reg dev4:*, reg dev5:V, reg r3:V, reg df:*, reg df1:V, reg r4:V, reg p:p(V +), reg r6:V, reg diff:*, reg diff1:V, reg dev6:*, reg dev7:V, reg rdf1:*, reg rdf2:V, reg df2:*, reg df3:V, reg r7:V, reg r8:V, reg r9:V, reg l:*, reg c3:L, reg r11:L, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg df4:*, reg df5:V, reg _Machine:*, reg _Machine1:V, reg c4:L, reg r16:L, reg l4:*, reg r17:L, reg df7:V, reg _Machine3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg r20:L, reg l6:*, reg r21:L, reg df9:V, reg dx9:V, reg r22:V, reg r23:V, reg ___:cls, reg r24:V, reg Fs:*, reg Fs1:V, reg sym:cls, reg base:cls, reg guard:L, reg r25:V, reg r26:V, reg Fs2:*, reg Fs3:V, reg is_na:cls, reg r27:V, reg r28:V, reg safe_pf:cls, reg Fs4:*, reg Fs5:V, reg c5:L, reg Fs7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg nnas:*, reg nnas1:V, reg __1:cls, reg r29:V, reg p1:p(V +), reg df10:*, reg df11:V, reg c6:L, reg df13:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg nnas2:*, reg nnas3:V, reg __2:cls, reg r31:V, reg p2:p(V +), reg rdf3:*, reg rdf4:V, reg df14:*, reg df15:V, reg c7:L, reg rdf6:V, reg df17:V, reg dr14:V, reg dc7:L, reg dx14:V, reg rdf8:V, reg dx15:V, reg nnas4:*, reg nnas5:V, reg __3:cls, reg r33:V, reg r34:V, reg p3:p(V +), reg r36:V, reg l7:*, reg c8:L, reg r38:V, reg l9:*, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg nnas6:*, reg nnas7:V, reg ___1:cls, reg r41:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r42:V, reg r43:V, reg Fs8:*, reg Fs9:V, reg P:*, reg P1:V, reg list:cls, reg r44:V |
    mkenv;
    st table = table;
    st rdf = rdf;
    table1 = ld table;
    check L4() else D0();
  D0():
    deopt 0 [table1];
  L4():
    table2 = force? table1;
    checkMissing(table2);
    c = `is.object`(table2);
    if c then L6() else L7(table2);
  L5(dx1):
    st dev = dx1;
    table5 = ld table;
    check L9() else D1();
  L6():
    dr = tryDispatchBuiltin.1("$", table2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(table4):
    r = `$`(table4, <sym Deviance>);
    goto L5(r);
  D1():
    deopt 4 [table5];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L9():
    table6 = force? table5;
    checkMissing(table6);
    c1 = `is.object`(table6);
    if c1 then L11() else L12(table6);
  L10(dx3):
    st df = dx3;
    pmax = ldf pmax;
    check L14() else D2();
  L11():
    dr2 = tryDispatchBuiltin.1("$", table6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L13() else L12(dr2);
  L12(table8):
    r1 = `$`(table8, <sym Df>);
    goto L10(r1);
  D2():
    deopt 9 [];
  L13():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L14():
    p = prom<V +>{
      dev = ld dev;
      dev1 = force? dev;
      checkMissing(dev1);
      c2 = `is.object`(dev1);
      if c2 then L1() else L2(dev1);
    L0(dx5):
      dev4 = ld dev;
      dev5 = force? dev4;
      checkMissing(dev5);
      r3 = `-`(dx5, dev5);
      df = ld df;
      df1 = force? df;
      checkMissing(df1);
      r4 = `/`(r3, df1);
      return r4;
    L1():
      dr4 = tryDispatchBuiltin.1("[", dev1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(dev3):
      __ = ldf `[` in base;
      r2 = dyn __(dev3, 1);
      goto L0(r2);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r6 = dyn pmax(0.0, p);
    check L15() else D3();
  D3():
    deopt 12 [r6];
  L15():
    st diff = r6;
    diff = ld diff;
    check L16() else D4();
  D4():
    deopt 14 [diff];
  L16():
    diff1 = force? diff;
    checkMissing(diff1);
    dev6 = ld dev;
    check L17() else D5();
  D5():
    deopt 15 [diff1, dev6];
  L17():
    dev7 = force? dev6;
    checkMissing(dev7);
    rdf1 = ld rdf;
    check L18() else D6();
  D6():
    deopt 16 [diff1, dev7, rdf1];
  L18():
    rdf2 = force? rdf1;
    checkMissing(rdf2);
    df2 = ld df;
    check L19() else D7();
  D7():
    deopt 17 [diff1, dev7, rdf2, df2];
  L19():
    df3 = force? df2;
    checkMissing(df3);
    r7 = `-`(rdf2, df3);
    r8 = `/`(dev7, r7);
    r9 = `/`(diff1, r8);
    st Fs = r9;
    l = ld Fs;
    c3 = `is.object`(l);
    if c3 then L20() else L21(NA_LGL, l);
  L0(dx7):
    st Fs = dx7;
    Fs = ld Fs;
    check L29() else D10();
  L20():
    dr6 = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L22() else L21(NA_LGL, dr6);
  L21(r11, l2):
    df4 = ld df;
    check L23() else D8();
  D8():
    deopt 26 [r11, l2, NA_LGL, df4];
  D10():
    deopt 33 [Fs];
  L22():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L0(dx6);
  L23():
    df5 = force? df4;
    checkMissing(df5);
    _Machine = ld `.Machine`;
    check L24() else D9();
  L29():
    Fs1 = force? Fs;
    checkMissing(Fs1);
    st P = Fs1;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  D9():
    deopt 27 [r11, l2, NA_LGL, df5, _Machine];
  L1(r26):
    r28 = `!`(r26);
    st nnas = r28;
    safe_pf = ldf safe_pf;
    check L34() else D13();
  L24():
    _Machine1 = force? _Machine;
    checkMissing(_Machine1);
    c4 = `is.object`(_Machine1);
    if c4 then L26() else L27(r11, l2, NA_LGL, df5, _Machine1);
  L30():
    Fs2 = ld Fs;
    check L32() else D11();
  L31():
    r25 = dyn base(<sym Fs>);
    goto L1(r25);
  D11():
    deopt 38 [Fs2];
  D13():
    deopt 45 [];
  L25(r20, l6, r21, df9, dx9):
    r23 = `<`(df9, dx9);
    ___ = ldf `[<-` in base;
    r24 = dyn ___(l6, r21, r23);
    goto L0(r24);
  L26():
    dr8 = tryDispatchBuiltin.1("$", _Machine1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L28() else L27(r11, l2, NA_LGL, df5, dr8);
  L27(r16, l4, r17, df7, _Machine3):
    r22 = `$`(_Machine3, <sym double.eps>);
    goto L25(r16, l4, r17, df7, r22);
  L32():
    Fs3 = force? Fs2;
    checkMissing(Fs3);
    is_na = ldf `is.na` in base;
    r27 = dyn is_na(Fs3);
    check L33() else D12();
  L34():
    p1 = prom<V +>{
      Fs4 = ld Fs;
      Fs5 = force? Fs4;
      checkMissing(Fs5);
      c5 = `is.object`(Fs5);
      if c5 then L1() else L2(Fs5);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", Fs5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(Fs7):
      nnas = ld nnas;
      nnas1 = force? nnas;
      __1 = ldf `[` in base;
      r29 = dyn __1(Fs7, nnas1);
      goto L0(r29);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p2 = prom<V +>{
      df10 = ld df;
      df11 = force? df10;
      checkMissing(df11);
      c6 = `is.object`(df11);
      if c6 then L1() else L2(df11);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", df11);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(df13):
      nnas2 = ld nnas;
      nnas3 = force? nnas2;
      __2 = ldf `[` in base;
      r31 = dyn __2(df13, nnas3);
      goto L0(r31);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p3 = prom<V +>{
      rdf3 = ld rdf;
      rdf4 = force? rdf3;
      checkMissing(rdf4);
      df14 = ld df;
      df15 = force? df14;
      checkMissing(df15);
      c7 = `is.object`(df15);
      if c7 then L1() else L2(rdf4, df15);
    L0(rdf8, dx15):
      r34 = `-`(rdf8, dx15);
      return r34;
    L1():
      dr14 = tryDispatchBuiltin.1("[", df15);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(rdf4, dr14);
    L2(rdf6, df17):
      nnas4 = ld nnas;
      nnas5 = force? nnas4;
      __3 = ldf `[` in base;
      r33 = dyn __3(df17, nnas5);
      goto L0(rdf6, r33);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(rdf4, dx14);
    };
    r36 = dyn safe_pf[, , , `lower.tail`](p1, p2, p3, FALSE);
    check L35() else D14();
  D12():
    deopt 41 [r27];
  D14():
    deopt 51 [r36];
  L28():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L25(r11, l2, NA_LGL, df5, dx8);
  L33():
    goto L1(r27);
  L35():
    l7 = ld P;
    c8 = `is.object`(l7);
    if c8 then L36() else L37(r36, l7);
  L2(dx17):
    st P = dx17;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L36():
    dr16 = tryDispatchBuiltin.0("[<-", l7, r36);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L38() else L37(r36, dr16);
  L37(r38, l9):
    nnas6 = ld nnas;
    check L39() else D15();
  D15():
    deopt 53 [r38, l9, r36, nnas6];
  L3(r43):
    popenv;
    return r43;
  L38():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L2(dx16);
  L39():
    nnas7 = force? nnas6;
    ___1 = ldf `[<-` in base;
    r41 = dyn ___1(l9, r36, nnas7);
    goto L2(r41);
  L40():
    Fs8 = ld Fs;
    check L42() else D16();
  L41():
    r42 = dyn base1[Fs, P](<sym Fs>, <sym P>);
    goto L3(r42);
  D16():
    deopt 59 [Fs8];
  L42():
    Fs9 = force? Fs8;
    checkMissing(Fs9);
    P = ld P;
    check L43() else D17();
  D17():
    deopt 62 [P];
  L43():
    P1 = force? P;
    checkMissing(P1);
    list = ldf list in base;
    r44 = dyn list(Fs9, P1);
    check L44() else D18();
  D18():
    deopt 66 [r44];
  L44():
    goto L3(r44);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste:cls, reg sort:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      sort = ldf sort;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn sort(p);
      return r1;
    };
    r3 = dyn paste[, collapse](p1, ":");
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}