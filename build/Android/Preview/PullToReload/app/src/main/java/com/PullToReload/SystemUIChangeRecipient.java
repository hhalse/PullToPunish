package com.PullToReload;

public interface SystemUIChangeRecipient
{
	public SystemUIChangeRecipient GetSystemUIChangeCallback();
	public void SystemUIChangeOccured();
}
