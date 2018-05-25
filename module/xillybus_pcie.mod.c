#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0xa910fc75, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc045372f, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa8bd4db3, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{        0, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_esi) },
	{ 0x3f65a12e, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x1f36d8c6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf606f5ef, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x68af8991, __VMLINUX_SYMBOL_STR(xillybus_endpoint_discovery) },
	{ 0x62c84876, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x25978d50, __VMLINUX_SYMBOL_STR(xillybus_isr) },
	{ 0x647c0c90, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0x6b663ddc, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xf9c5aa4f, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x22fc18c3, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x7efcbd92, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9bd9f74, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0x40d61614, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xa4d2b225, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x11c5a4d4, __VMLINUX_SYMBOL_STR(xillybus_init_endpoint) },
	{        0, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_ebx) },
	{ 0xb90c30e4, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x37f365ab, __VMLINUX_SYMBOL_STR(xillybus_do_cleanup) },
	{ 0xff56f4d8, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x73d901d0, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x88b5d8b5, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x9397d605, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xbef84af4, __VMLINUX_SYMBOL_STR(xillybus_endpoint_remove) },
	{ 0x18554677, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xillybus_core";

MODULE_ALIAS("pci:v000010EEd0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001172d0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011AAd0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001204d0000EBEBsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3A56164C227D8E7CBACE73D");
