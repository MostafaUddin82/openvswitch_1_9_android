#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf479a0f6, "module_layout" },
	{ 0xa17b8636, "ovs_dp_ioctl_hook" },
	{ 0x2b5794bc, "genl_unregister_family" },
	{ 0xcfa8485b, "genl_register_mc_group" },
	{ 0xe914e41e, "strcpy" },
	{ 0xbbb0bee3, "genl_register_family_with_ops" },
	{ 0xb86e4ab9, "random32" },
	{ 0xab57215e, "brioctl_set" },
	{ 0x9d669763, "memcpy" },
	{ 0xb34f9bd, "__dev_get_by_index" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x4f391d0e, "nla_parse" },
	{ 0x10fda2d7, "mutex_unlock" },
	{ 0x27e1a049, "printk" },
	{ 0x9b5fd507, "wait_for_completion_timeout" },
	{ 0x5f6bcb14, "netlink_broadcast" },
	{ 0xde1a8665, "mutex_lock" },
	{ 0x97255bdf, "strlen" },
	{ 0xe2763bf9, "init_net" },
	{ 0x1fa33896, "netlink_unicast" },
	{ 0x53e2def0, "nla_put" },
	{ 0xc42961a, "genlmsg_put" },
	{ 0x9c17f708, "__alloc_skb" },
	{ 0x8ddab831, "_raw_spin_unlock_irqrestore" },
	{ 0xad998077, "complete" },
	{ 0x91db146c, "kfree_skb" },
	{ 0x1a9b678e, "_raw_spin_lock_irqsave" },
	{ 0x34824c8a, "skb_clone" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x507c8602, "nlmsg_notify" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch";

